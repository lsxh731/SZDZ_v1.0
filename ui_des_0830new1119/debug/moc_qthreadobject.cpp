/****************************************************************************
** Meta object code from reading C++ file 'qthreadobject.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qthreadobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QThreadObject[] = {

 // content:
       6,       // revision
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

void QThreadObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QThreadObject *_t = static_cast<QThreadObject *>(_o);
        switch (_id) {
        case 0: _t->start_pid(); break;
        case 1: _t->heigh_speed(); break;
        case 2: _t->low_speed(); break;
        case 3: _t->Read_ad7606(); break;
        case 4: _t->FcnTl(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QThreadObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QThreadObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QThreadObject,
      qt_meta_data_QThreadObject, &staticMetaObjectExtraData }
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
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
