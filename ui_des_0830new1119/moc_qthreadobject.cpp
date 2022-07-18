/****************************************************************************
** Meta object code from reading C++ file 'qthreadobject.h'
**
** Created: Thu Apr 28 00:34:33 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qthreadobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QThreadObject[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      27,   14,   14,   14, 0x05,
      41,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   14,   14,   14, 0x0a,
      67,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QThreadObject[] = {
    "QThreadObject\0\0start_pid()\0heigh_speed()\0"
    "low_speed()\0Read_ad7606()\0FcnTl()\0"
};

const QMetaObject QThreadObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QThreadObject,
      qt_meta_data_QThreadObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QThreadObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QThreadObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QThreadObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QThreadObject))
        return static_cast<void*>(const_cast< QThreadObject*>(this));
    return QObject::qt_metacast(_clname);
}

int QThreadObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: start_pid(); break;
        case 1: heigh_speed(); break;
        case 2: low_speed(); break;
        case 3: Read_ad7606(); break;
        case 4: FcnTl(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QThreadObject::start_pid()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QThreadObject::heigh_speed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QThreadObject::low_speed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
