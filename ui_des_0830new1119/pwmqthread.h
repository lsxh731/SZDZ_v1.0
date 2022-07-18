#ifndef PWMQTHREAD_H
#define PWMQTHREAD_H
#include "commmacro.h"
#include <QObject>
#include <QDebug>
#include <QMutex>
#include <QTimer>
#include <QDateTime>
#include <QPoint>
#include <QFile>
#include <QPushButton>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#ifdef UBUNTU
#include <net/if.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/fs.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <termio.h>
#include <linux/rtc.h>
#include <poll.h>
#include "spi.h"
#include "cstdlib"
#endif
#include <math.h>
#include "math.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include "mywidget.h"
#include "config_widget.h"


class PwmqThread : public QObject
{
    Q_OBJECT
public:
    explicit PwmqThread(QObject *parent = 0);

    int fd_MyPwm1;
    int fd_AdSpi;
    bool ToStop;
    bool AorM;  //true:自动  false:手动
       //for  ad7606_read(int fd), get ad7606 numbers
    volatile double posi,v_posi,posi_1,posi_2,posi_3,posi_4;
    volatile double pres;
    unsigned char ad_bf[6];
    double a;//低通滤波系数 时间常数a越大，滞后越低，但是截止频率越高 a = 2*fL*PI*t
    double Yn,Yn_1;
    double Yn1,Yn1_1;
    volatile double Ave_posi;//经过滤波后输出值
    volatile double Sum_posi;//经过滤波后输出值
    long int SmapCount;

    double Height;      //梯形块高度
    double Width;       //梯形块宽度
    double HalfRange;   //一半量程

public:
    void Device_init();
    void Ad7606_HighRead();
    void Ad7606_LowRead();

signals:
    void start_pid();

public slots:
    void Manu_PWM();

};

#endif // PWMQTHREAD_H
