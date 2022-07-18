/****************************************************************************
** Meta object code from reading C++ file 'pwmqthread.h'
**
** Created: Thu Apr 28 00:34:33 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pwmqthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pwmqthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PwmqThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PwmqThread[] = {
    "PwmqThread\0\0start_pid()\0Manu_PWM()\0"
};

const QMetaObject PwmqThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PwmqThread,
      qt_meta_data_PwmqThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PwmqThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PwmqThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PwmqThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PwmqThread))
        return static_cast<void*>(const_cast< PwmqThread*>(this));
    return QObject::qt_metacast(_clname);
}

int PwmqThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: start_pid(); break;
        case 1: Manu_PWM(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PwmqThread::start_pid()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
