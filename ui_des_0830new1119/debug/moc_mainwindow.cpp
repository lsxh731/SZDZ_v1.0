/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->Start_PWM(); break;
        case 1: _t->button_in_pressed(); break;
        case 2: _t->button_in_released(); break;
        case 3: _t->button_out_pressed(); break;
        case 4: _t->button_out_released(); break;
        case 5: _t->button_stop_pressed(); break;
        case 6: _t->button_stop_released(); break;
        case 7: _t->button_change_pressed(); break;
        case 8: _t->button_config_pressed(); break;
        case 9: _t->button_config_released(); break;
        case 10: _t->button_language_pressed(); break;
        case 11: _t->test_time_dell(); break;
        case 12: _t->QTimerXmsdell(); break;
        case 13: _t->ReDisplayScreen(); break;
        case 14: _t->Qtimer5mindell(); break;
        case 15: _t->OneOrContinue(); break;
        case 16: _t->QTimerBuzzermsdell(); break;
        case 17: _t->QTimerADdell(); break;
        case 18: _t->StarQthreadObject(); break;
        case 19: _t->StopQthreadObject(); break;
        case 20: _t->StarPid(); break;
        case 21: _t->test(); break;
        case 22: _t->Change_Target(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
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
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
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
