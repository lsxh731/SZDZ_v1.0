#ifndef QTHREADOBJECT_H
#define QTHREADOBJECT_H
#include "commmacro.h"
#include <QObject>
#include <QDebug>
#include <QMutex>
#include <QMutexLocker>
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

class QThreadObject : public QObject
{
    Q_OBJECT
public:
    explicit QThreadObject(QObject *parent = 0);

    long int SmapCount;
    long int ReAdCount;
    int PConut;
    bool Sleeping;
    bool VtoMM;
    int Hcount;
    bool bt_change_state;     //false:menu,true:auto

    int oflags;   //for 异步通讯
    static void pwm1_signal(int signum);         //for  ad7606_read(int fd), get ad7606 numbers
    void Device_init();

public:
    int fd_MyPwm1;
    int fd_AdSpi;
    int fd_Eint1;
    volatile double posi,pre_posi,posi_1,posi_2,posi_3,posi_4;
    volatile double V_posi;
    volatile double pres;
    volatile double Ave_posi;//经过滤波后输出值
    volatile double Sum_posi;//经过滤波后输出值
    unsigned char ad_bf[6];
    double a;//低通滤波系数 时间常数a越大，滞后越低，但是截止频率越高 a = 2*fL*PI*t
    double Yn,Yn_1;
    double Yn1,Yn1_1;
    double Yn2,Yn2_1;
    QString current_date;     //当前时间


public:


signals:
    void start_pid();
    void heigh_speed();
    void low_speed();

public slots:
    void Read_ad7606();
    void FcnTl();

};

#endif // QTHREADOBJECT_H
