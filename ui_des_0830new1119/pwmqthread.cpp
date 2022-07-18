#include "pwmqthread.h"
#include <stdint.h>

PwmqThread::PwmqThread(QObject *parent) : QObject(parent)
{
    this->Device_init();
    ToStop = false;
    AorM = true;
    posi = 0;
    pres = 0;
    SmapCount = 0;
    Sum_posi = 0;
    v_posi = 0;
    posi_1 = 0;
    posi_2 = 0;
    posi_3 = 0;
    posi_4 = 0;
    a = 2*2*PI*0.000125;
    memset(ad_bf,0,sizeof (ad_bf));
    Ave_posi = 27.6;

    Height = 60;
    Width = 25;
    HalfRange = 26.5;
}

void PwmqThread::Manu_PWM()
{
    qDebug()<<"#####thread####";
    Ave_posi = 0;
    if(ToStop)
        return;
    while(!ToStop)
    {
#ifdef UBUNTU
        /********************实际使用程序 ***************************************/
        if(AorM)
        {
            usleep(115);//OFF time  1k=800/200   2k=400/100   8k=100/25   == usleep(Ioff);
            ioctl(fd_MyPwm1,1,0);
            usleep(10);//ON time  == usleep(Ion);
            this->Ad7606_HighRead();
            ioctl(fd_MyPwm1,0,0);
        }
        else
        {
            usleep(99990);//OFF time  1k=800/200   2k=400/100   8k=100/25   == usleep(Ioff);
            ioctl(fd_MyPwm1,1,0);
            usleep(10);//ON time  == usleep(Ion);
            this->Ad7606_LowRead();
            ioctl(fd_MyPwm1,0,0);
        }
#endif
    }
}

void PwmqThread::Ad7606_HighRead()
{
    read(fd_AdSpi,ad_bf,6);
    posi = ((( ad_bf[1])<<8)+ad_bf[2])*5.0/32768;
    pres = ((( ad_bf[3])<<8)+ad_bf[4])*5.0/32768;
    if(posi > 5.0) posi = posi -5.0;
    posi = (posi+posi_1+posi_2+posi_3+posi_4)/5.0;
    posi_4= posi_3;
    posi_3= posi_2;
    posi_2= posi_1;
    posi_1 = posi;
    v_posi = posi;
    /*松下HG-C1050*/
    posi = 30 - 6*posi;      //y=k*x+b,(x1,0),(x2,27),k=27/(x2-x1),b=27*x1/(x2-x1)  近段x1，远端x2
//    if(posi > 23.0)
//        posi = 23.0;
//    posi = (posi/25.0)*60.0;  //近段 偏高 + 放气  、、、  远端 偏低 - 进气
    posi = posi*Height/Width;  //近段 偏高 + 放气  、、、  远端 偏低 - 进气
    //一阶滤波
    Yn = a*posi+(1.0-a)*Yn_1;
    Yn_1 = Yn;
    //二阶滤波
    Yn1 = a*Yn+(1.0-a)*Yn1_1;
    Yn1_1 = Yn1;
    Sum_posi+=Yn1;
    SmapCount++;
    if(SmapCount > 1600)   //if(SmapCount > (8000/Control_frequency))   //800-100ms  1600-200ms
    {
        Ave_posi = Sum_posi/SmapCount;
        emit start_pid();
        SmapCount = 0;
        Sum_posi = 0;
    }
}
void PwmqThread::Ad7606_LowRead()
{
    read(fd_AdSpi,ad_bf,6);
    posi = ((( ad_bf[1])<<8)+ad_bf[2])*5.0/32768;
    pres = ((( ad_bf[3])<<8)+ad_bf[4])*5.0/32768;
    if(posi > 5.0) posi = posi -5.0;
    Ave_posi = (30-6*posi)*Height/Width;
}



void PwmqThread::Device_init()
{
#ifdef UBUNTU

    MyWidgetHandle = new mywidget;
    /*****************AD7606_SPI Open*********************************/
    char *adspi_node = "/dev/adspi";
    if((fd_AdSpi = open(adspi_node, O_RDWR))<0)
    {
        qDebug()<<"AD7606_SPI Open %s failed!";
//        return;
    }
    else
    {
        printf("AD7606_SPI Open success!\n");
    }
    int ret;

    static uint8_t mode = SPI_MODE_3;
    ret = ioctl(fd_AdSpi, SPI_IOC_WR_MODE, &mode);
    if (ret == -1)
        printf("can't set spi mode");

    ret = ioctl(fd_AdSpi, SPI_IOC_RD_MODE, &mode);
    if (ret == -1)
        printf("can't get spi mode");

    static uint8_t bits = 8;
    ret = ioctl(fd_AdSpi, SPI_IOC_WR_BITS_PER_WORD, &bits);
    if (ret == -1)
        printf("can't set bits per word\n");

    ret = ioctl(fd_AdSpi, SPI_IOC_RD_BITS_PER_WORD, &bits);
    if (ret == -1)
        printf("can't get bits per word\n");

    static uint32_t speed = 10*1000*1000;//10M;
    ret = ioctl(fd_AdSpi, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
    if (ret == -1)
        printf("can't set max speed hz\n");

    ret = ioctl(fd_AdSpi, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
    if (ret == -1)
        printf("can't get max speed hz\n");

    printf("spi mode: %d\n", mode);
    printf("bits per word: %d\n", bits);
    printf("max speed: %d Hz (%d KHz)\n", speed, speed/1000);

    /*****************MyPWM1 Open*********************************/
    char *mypwm_node = "/dev/myhrtimer";
    if((fd_MyPwm1 = open(mypwm_node, O_RDWR|O_NOCTTY|O_NDELAY))<0)
    {
         qDebug()<<"MyPWM Open  failed!";
//         return;
    }
    else
    {
         printf("MyPWM Open success!\n");
    }
#endif
}
