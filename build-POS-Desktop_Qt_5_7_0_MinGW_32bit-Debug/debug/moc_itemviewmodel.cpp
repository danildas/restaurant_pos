/****************************************************************************
** Meta object code from reading C++ file 'itemviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/itemviewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemviewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ItemViewModel_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemViewModel_t qt_meta_stringdata_ItemViewModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ItemViewModel"
QT_MOC_LITERAL(1, 14, 16), // "groupCodeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "subGroupCodeChanged"
QT_MOC_LITERAL(4, 52, 15), // "itemCodeChanged"
QT_MOC_LITERAL(5, 68, 18), // "onGroupCodeChanged"
QT_MOC_LITERAL(6, 87, 21), // "onSubGroupCodeChanged"
QT_MOC_LITERAL(7, 109, 9), // "groupCode"
QT_MOC_LITERAL(8, 119, 12), // "subGroupCode"
QT_MOC_LITERAL(9, 132, 8) // "itemCode"

    },
    "ItemViewModel\0groupCodeChanged\0\0"
    "subGroupCodeChanged\0itemCodeChanged\0"
    "onGroupCodeChanged\0onSubGroupCodeChanged\0"
    "groupCode\0subGroupCode\0itemCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ItemViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemViewModel *_t = static_cast<ItemViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupCodeChanged(); break;
        case 1: _t->subGroupCodeChanged(); break;
        case 2: _t->itemCodeChanged(); break;
        case 3: _t->onGroupCodeChanged(); break;
        case 4: _t->onSubGroupCodeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemViewModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemViewModel::groupCodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemViewModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemViewModel::subGroupCodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ItemViewModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemViewModel::itemCodeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ItemViewModel *_t = static_cast<ItemViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->groupCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->subGroupCode(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->itemCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ItemViewModel *_t = static_cast<ItemViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroupCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubGroupCode(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setItemCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject ItemViewModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_ItemViewModel.data,
      qt_meta_data_ItemViewModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemViewModel.stringdata0))
        return static_cast<void*>(const_cast< ItemViewModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int ItemViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ItemViewModel::groupCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ItemViewModel::subGroupCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ItemViewModel::itemCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
