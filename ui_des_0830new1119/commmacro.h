#ifndef COMM_MACRO_H
#define COMM_MACRO_H
#include "mywidget.h"
#define UBUNTU
//#define WINDOWS
//#define OPENBUZZER
#define POSITION
//#define CLS_K_10
#define HG_C1050
//#define DIRECTION

#ifdef UBUNTU //Compiler Switch
#include <unistd.h>
#include <net/if.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>
#include <errno.h>
#include <ctype.h>
#include <time.h>
#include <signal.h>
#include <linux/rtc.h>
#endif

#include "qmath.h"
#include <QString>
#include <QDebug>
#include <QMutex>
#include <QMutexLocker>
#define PI 3.1415926
#define TARGET 27.6



typedef char  int8;
typedef short int16;
typedef int   int32;

static mywidget* MyWidgetHandle;
static int Manu_count;
static bool StopAuto;
static QMutex m_stopMutex;
static volatile bool IsReading;
static volatile int on_time;
static volatile int off_time;
static volatile float Target_position;
static volatile int Control_frequency;

#endif//COMM_MACRO_H
