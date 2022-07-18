#include "qthreadobject.h"
#include <QMutexLocker>
#include <stdint.h>

extern QMutex m_Mutex;

QThreadObject::QThreadObject(QObject *parent) : QObject(parent)
{
    SmapCount = 0;
    Sum_posi = 0;
    ReAdCount = 0;
    IsReading = false;
//    this->Device_init();
    PConut = 2;
    Sleeping = false;
    pre_posi = 0;
    posi_1 = 0;
    posi_2 = 0;
    posi_3 = 0;
    posi_4 = 0;
    Hcount = 10;
    VtoMM = true;
    Control_frequency = 5;
    bt_change_state = true;
}

void QThreadObject::Read_ad7606()
{
//    QMutexLocker locker(&m_Mutex);

#ifdef UBUNTU
        read(fd_AdSpi,ad_bf,6);
        posi = ((( ad_bf[1])<<8)+ad_bf[2])*5.0/32768;
        pres = ((( ad_bf[3])<<8)+ad_bf[4])*5.0/32768;

//        posi = ((( ad_bf[0])<<8)+ad_bf[1])*5.0/32768;
//        pres = ((( ad_bf[2])<<8)+ad_bf[3])*5.0/32768;
//        posi = ad_bf[0]*5.0/32768;
//        pres = ad_bf[1]*5.0/32768;
#endif
        //将电压转换实际的位移值，单位/mm
        //posi = (36.24-(8*posi))/3.32;
        //posi = 25*(posi-2.0)/2;
        //add 20210304  distant=80mm; 2mm端---2.13v  10mm端---5.06v  tanA = 100/4=25; 8 x+ -2.93 y+ -11.18 =0 (x1,y1)=(2.13,2) (x2,y2)=(5.06,10)
        if(posi > 5.0) posi = posi -5.0;
        V_posi = (30-6*posi)*2.4;
        posi = (posi+posi_1+posi_2+posi_3+posi_4)/5.0;
        posi_4= posi_3;
        posi_3= posi_2;
        posi_2= posi_1;
        posi_1 = posi;
        pre_posi = posi;
        if(VtoMM)
        {
            /* CLS-K-10 */
#ifdef CLS_K_10
            posi = (8*posi-11.18)/2.93;
#else
            /*松下HG-C1050*/
            posi = 30 - 6*posi;      //y=k*x+b,(x1,0),(x2,27),k=27/(x2-x1),b=27*x1/(x2-x1)  近段x1，远端x2
            if(posi > 23.0)
                posi = 23.0;
//            posi = 30 - 6*posi;
#endif
#ifdef POSITION
    #ifdef CLS_K_10
            posi = 100-(25*(posi-2.0)/2);
    #else
            posi = (posi/25.0)*60.0;  //近段 偏高 + 放气  、、、  远端 偏低 - 进气
    #endif
#endif
#ifdef DIRECTION
            posi = 60.0 - posi;
#endif
        }

        //一阶滤波
        Yn = a*posi+(1.0-a)*Yn_1;
        Yn_1 = Yn;
        //二阶滤波
        Yn1 = a*Yn+(1.0-a)*Yn1_1;
        Yn1_1 = Yn1;
        //三阶滤波
//        Yn2 = a*Yn1+(1-a)*Yn2_1;
//        Yn2_1 = Yn2;
        //将二阶滤波输出值累加求和
//        Sum_posi+=Yn;
        Sum_posi+=Yn1;
//        Sum_posi+=Yn2;
        SmapCount++;
//        if(SmapCount > 1600)   //800-100ms  1600-200ms
//        if(SmapCount > (8000/Control_frequency))   //800-100ms  1600-200ms
        if(SmapCount > 1600)   //800-100ms  1600-200ms
        {
            Ave_posi = Sum_posi/SmapCount;
            if(bt_change_state)
                emit start_pid();
            SmapCount = 0;
            Sum_posi = 0;
        }
}

void QThreadObject::Device_init()
{
#ifdef UBUNTU

    MyWidgetHandle = new mywidget;
    /*****************AD7606_SPI Open*********************************/
    char *adspi_node = "/dev/adspi";
//    if((fd_AdSpi = open(adspi_node, O_RDWR|O_NOCTTY|O_NDELAY))<0)
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

    /*****************MyEint1 Open*********************************/
    char *myeint_node = "/dev/myeint1";
    if((fd_Eint1 = open(myeint_node, O_RDWR|O_NOCTTY|O_NDELAY))<0)
    {
         qDebug()<<"MyEint1 Open  failed!";
//         return;
    }
    else
    {
         printf("MyEint1 Open success!\n");
    }

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
    signal(SIGIO, QThreadObject::pwm1_signal);
    fcntl(fd_Eint1, F_SETOWN, getpid());
    oflags = fcntl(fd_Eint1, F_GETFL);
    fcntl(fd_Eint1, F_SETFL, oflags | FASYNC);
    memset(ad_bf,0,sizeof (ad_bf));
    connect(MyWidgetHandle,SIGNAL(start_collect()),this,SLOT(Read_ad7606()));

#endif
//    a = 0.4*2*PI*0.001;   //时间常数a越大，滞后越低，但是截止频率越高 a = 2*fL*PI*t
//    a = 2*2*PI*0.000125;//2Hz截止频率
    a = 2*2*PI*0.000125;
    StopAuto = true;
    Manu_count = 0;
    Yn = 0;
    Yn_1 = 0;
    Yn1 = 0;
    Yn1_1 = 0;
}

void QThreadObject::FcnTl()
{
#ifdef UBUNTU
    signal(SIGIO, QThreadObject::pwm1_signal);
    fcntl(fd_Eint1, F_SETOWN, getpid());
    oflags = fcntl(fd_Eint1, F_GETFL);
    fcntl(fd_Eint1, F_SETFL, oflags | FASYNC);
#endif
}

void QThreadObject::pwm1_signal(int signum)
{
//    QMutexLocker locker(&m_Mutex);
    MyWidgetHandle->Start_Collect();
}


