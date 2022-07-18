/****************************************************************************
** Meta object code from reading C++ file 'config_widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../config_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'config_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_config_widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      35,   14,   14,   14, 0x05,
      49,   14,   14,   14, 0x05,
      64,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   14,   14,   14, 0x0a,
      97,   14,   14,   14, 0x0a,
     110,   14,   14,   14, 0x0a,
     124,   14,   14,   14, 0x0a,
     145,   14,   14,   14, 0x08,
     167,   14,   14,   14, 0x08,
     190,   14,   14,   14, 0x08,
     215,   14,   14,   14, 0x08,
     241,   14,   14,   14, 0x08,
     259,   14,   14,   14, 0x08,
     277,   14,   14,   14, 0x08,
     304,  298,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_config_widget[] = {
    "config_widget\0\0configWidgetClose()\0"
    "stopManuPWM()\0startManuPWM()\0"
    "ChangeTarget()\0ReDisplayScreen()\0"
    "BuzzerOpen()\0BuzzerClose()\0"
    "QTimerBuzzermsdell()\0button_home_pressed()\0"
    "button_home_released()\0button_logsave_pressed()\0"
    "button_logsave_released()\0P_show_keyboard()\0"
    "F_show_keyboard()\0Get_keyboard_value()\0"
    "value\0change_brightness(int)\0"
};

void config_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        config_widget *_t = static_cast<config_widget *>(_o);
        switch (_id) {
        case 0: _t->configWidgetClose(); break;
        case 1: _t->stopManuPWM(); break;
        case 2: _t->startManuPWM(); break;
        case 3: _t->ChangeTarget(); break;
        case 4: _t->ReDisplayScreen(); break;
        case 5: _t->BuzzerOpen(); break;
        case 6: _t->BuzzerClose(); break;
        case 7: _t->QTimerBuzzermsdell(); break;
        case 8: _t->button_home_pressed(); break;
        case 9: _t->button_home_released(); break;
        case 10: _t->button_logsave_pressed(); break;
        case 11: _t->button_logsave_released(); break;
        case 12: _t->P_show_keyboard(); break;
        case 13: _t->F_show_keyboard(); break;
        case 14: _t->Get_keyboard_value(); break;
        case 15: _t->change_brightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData config_widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject config_widget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_config_widget,
      qt_meta_data_config_widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &config_widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *config_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *config_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_config_widget))
        return static_cast<void*>(const_cast< config_widget*>(this));
    return QDialog::qt_metacast(_clname);
}

int config_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void config_widget::configWidgetClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void config_widget::stopManuPWM()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void config_widget::startManuPWM()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void config_widget::ChangeTarget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
