/****************************************************************************
** Meta object code from reading C++ file 'mesdialog.h'
**
** Created: Thu Apr 28 00:34:33 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mesdialog[] = {

 // content:
       5,       // revision
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

const QMetaObject Mesdialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Mesdialog,
      qt_meta_data_Mesdialog, 0 }
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
        switch (_id) {
        case 0: OkButtonPressed(); break;
        case 1: CancelPressed(); break;
        case 2: OkPressed(); break;
        default: ;
        }
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
