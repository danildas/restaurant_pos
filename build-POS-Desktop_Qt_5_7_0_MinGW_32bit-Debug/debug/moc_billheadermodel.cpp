/****************************************************************************
** Meta object code from reading C++ file 'billheadermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/billheadermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billheadermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BillHeaderModel_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BillHeaderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BillHeaderModel_t qt_meta_stringdata_BillHeaderModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BillHeaderModel"
QT_MOC_LITERAL(1, 16, 16), // "groupCodeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "subGroupCodeChanged"
QT_MOC_LITERAL(4, 54, 17), // "billNumberChanged"
QT_MOC_LITERAL(5, 72, 10), // "billNumber"
QT_MOC_LITERAL(6, 83, 18), // "onGroupCodeChanged"
QT_MOC_LITERAL(7, 102, 21), // "onSubGroupCodeChanged"
QT_MOC_LITERAL(8, 124, 9), // "groupCode"
QT_MOC_LITERAL(9, 134, 12) // "subGroupCode"

    },
    "BillHeaderModel\0groupCodeChanged\0\0"
    "subGroupCodeChanged\0billNumberChanged\0"
    "billNumber\0onGroupCodeChanged\0"
    "onSubGroupCodeChanged\0groupCode\0"
    "subGroupCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BillHeaderModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void BillHeaderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BillHeaderModel *_t = static_cast<BillHeaderModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupCodeChanged(); break;
        case 1: _t->subGroupCodeChanged(); break;
        case 2: _t->billNumberChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 3: _t->onGroupCodeChanged(); break;
        case 4: _t->onSubGroupCodeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BillHeaderModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillHeaderModel::groupCodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BillHeaderModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillHeaderModel::subGroupCodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BillHeaderModel::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillHeaderModel::billNumberChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BillHeaderModel *_t = static_cast<BillHeaderModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->groupCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->subGroupCode(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->billNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BillHeaderModel *_t = static_cast<BillHeaderModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroupCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubGroupCode(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBillNumber(*reinterpret_cast< qint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BillHeaderModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_BillHeaderModel.data,
      qt_meta_data_BillHeaderModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BillHeaderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillHeaderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BillHeaderModel.stringdata0))
        return static_cast<void*>(const_cast< BillHeaderModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int BillHeaderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BillHeaderModel::groupCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BillHeaderModel::subGroupCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BillHeaderModel::billNumberChanged(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
