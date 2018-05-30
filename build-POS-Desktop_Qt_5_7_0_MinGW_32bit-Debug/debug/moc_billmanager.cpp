/****************************************************************************
** Meta object code from reading C++ file 'billmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/billmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BillManager_t {
    QByteArrayData data[19];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BillManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BillManager_t qt_meta_stringdata_BillManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BillManager"
QT_MOC_LITERAL(1, 12, 12), // "stateChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "billNumberChanged"
QT_MOC_LITERAL(4, 44, 10), // "billNumber"
QT_MOC_LITERAL(5, 55, 12), // "totalChanged"
QT_MOC_LITERAL(6, 68, 5), // "total"
QT_MOC_LITERAL(7, 74, 17), // "onAddToOrderClick"
QT_MOC_LITERAL(8, 92, 7), // "addItem"
QT_MOC_LITERAL(9, 100, 8), // "itemCode"
QT_MOC_LITERAL(10, 109, 12), // "itemUnitCode"
QT_MOC_LITERAL(11, 122, 5), // "count"
QT_MOC_LITERAL(12, 128, 14), // "addItemToOrder"
QT_MOC_LITERAL(13, 143, 8), // "saveBill"
QT_MOC_LITERAL(14, 152, 5), // "clear"
QT_MOC_LITERAL(15, 158, 5), // "state"
QT_MOC_LITERAL(16, 164, 5), // "STATE"
QT_MOC_LITERAL(17, 170, 9), // "STATE_NEW"
QT_MOC_LITERAL(18, 180, 11) // "STATE_SAVED"

    },
    "BillManager\0stateChanged\0\0billNumberChanged\0"
    "billNumber\0totalChanged\0total\0"
    "onAddToOrderClick\0addItem\0itemCode\0"
    "itemUnitCode\0count\0addItemToOrder\0"
    "saveBill\0clear\0state\0STATE\0STATE_NEW\0"
    "STATE_SAVED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BillManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   72, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   61,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    3,   62,    2, 0x02 /* Public */,
      12,    0,   69,    2, 0x02 /* Public */,
      13,    0,   70,    2, 0x02 /* Public */,
      14,    0,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,    9,   10,   11,
    QMetaType::Int,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0049510b,
       4, QMetaType::Int, 0x00495103,
       6, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      16, 0x0,    2,   88,

 // enum data: key, value
      17, uint(BillManager::STATE_NEW),
      18, uint(BillManager::STATE_SAVED),

       0        // eod
};

void BillManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BillManager *_t = static_cast<BillManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->billNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->totalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onAddToOrderClick(); break;
        case 4: { bool _r = _t->addItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { qint32 _r = _t->addItemToOrder();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = _r; }  break;
        case 6: { QVariantMap _r = _t->saveBill();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 7: { QVariantMap _r = _t->clear();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BillManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillManager::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BillManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillManager::billNumberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BillManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillManager::totalChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BillManager *_t = static_cast<BillManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< STATE*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< qint32*>(_v) = _t->billNumber(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->total(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BillManager *_t = static_cast<BillManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setState(*reinterpret_cast< STATE*>(_v)); break;
        case 1: _t->setBillNumber(*reinterpret_cast< qint32*>(_v)); break;
        case 2: _t->setTotal(*reinterpret_cast< qint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BillManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BillManager.data,
      qt_meta_data_BillManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BillManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BillManager.stringdata0))
        return static_cast<void*>(const_cast< BillManager*>(this));
    return QObject::qt_metacast(_clname);
}

int BillManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void BillManager::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BillManager::billNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BillManager::totalChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
