/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Apr 28 00:34:33 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     130,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     226,   11,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     320,   11,   11,   11, 0x08,
     336,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     412,   11,   11,   11, 0x08,
     422,   11,   11,   11, 0x08,
     429,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0Start_PWM()\0button_in_pressed()\0"
    "button_in_released()\0button_out_pressed()\0"
    "button_out_released()\0button_stop_pressed()\0"
    "button_stop_released()\0button_change_pressed()\0"
    "button_config_pressed()\0"
    "button_config_released()\0"
    "button_language_pressed()\0test_time_dell()\0"
    "QTimerXmsdell()\0ReDisplayScreen()\0"
    "Qtimer5mindell()\0OneOrContinue()\0"
    "QTimerBuzzermsdell()\0QTimerADdell()\0"
    "StarQthreadObject()\0StopQthreadObject()\0"
    "StarPid()\0test()\0Change_Target()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Start_PWM(); break;
        case 1: button_in_pressed(); break;
        case 2: button_in_released(); break;
        case 3: button_out_pressed(); break;
        case 4: button_out_released(); break;
        case 5: button_stop_pressed(); break;
        case 6: button_stop_released(); break;
        case 7: button_change_pressed(); break;
        case 8: button_config_pressed(); break;
        case 9: button_config_released(); break;
        case 10: button_language_pressed(); break;
        case 11: test_time_dell(); break;
        case 12: QTimerXmsdell(); break;
        case 13: ReDisplayScreen(); break;
        case 14: Qtimer5mindell(); break;
        case 15: OneOrContinue(); break;
        case 16: QTimerBuzzermsdell(); break;
        case 17: QTimerADdell(); break;
        case 18: StarQthreadObject(); break;
        case 19: StopQthreadObject(); break;
        case 20: StarPid(); break;
        case 21: test(); break;
        case 22: Change_Target(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::Start_PWM()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
