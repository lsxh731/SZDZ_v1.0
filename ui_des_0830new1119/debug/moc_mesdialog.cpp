/****************************************************************************
** Meta object code from reading C++ file 'mesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mesdialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   10,   10,   10, 0x0a,
      45,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Mesdialog[] = {
    "Mesdialog\0\0OkButtonPressed()\0"
    "CancelPressed()\0OkPressed()\0"
};

void Mesdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mesdialog *_t = static_cast<Mesdialog *>(_o);
        switch (_id) {
        case 0: _t->OkButtonPressed(); break;
        case 1: _t->CancelPressed(); break;
        case 2: _t->OkPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Mesdialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Mesdialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Mesdialog,
      qt_meta_data_Mesdialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mesdialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mesdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mesdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mesdialog))
        return static_cast<void*>(const_cast< Mesdialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Mesdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Mesdialog::OkButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
