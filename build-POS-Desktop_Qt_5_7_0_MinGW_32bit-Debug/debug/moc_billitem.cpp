/****************************************************************************
** Meta object code from reading C++ file 'billitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/billitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BillItem_t {
    QByteArrayData data[24];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BillItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BillItem_t qt_meta_stringdata_BillItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BillItem"
QT_MOC_LITERAL(1, 9, 15), // "itemCodeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "itemCode"
QT_MOC_LITERAL(4, 35, 15), // "unitCodeChanged"
QT_MOC_LITERAL(5, 51, 8), // "unitcode"
QT_MOC_LITERAL(6, 60, 15), // "itemNameChanged"
QT_MOC_LITERAL(7, 76, 8), // "itemName"
QT_MOC_LITERAL(8, 85, 12), // "countChanged"
QT_MOC_LITERAL(9, 98, 5), // "count"
QT_MOC_LITERAL(10, 104, 12), // "priceChanged"
QT_MOC_LITERAL(11, 117, 5), // "price"
QT_MOC_LITERAL(12, 123, 12), // "totalChanged"
QT_MOC_LITERAL(13, 136, 5), // "total"
QT_MOC_LITERAL(14, 142, 19), // "parentStatusChanged"
QT_MOC_LITERAL(15, 162, 6), // "parent"
QT_MOC_LITERAL(16, 169, 17), // "lineNumberChanged"
QT_MOC_LITERAL(17, 187, 10), // "lineNumber"
QT_MOC_LITERAL(18, 198, 23), // "parentLineNumberChanged"
QT_MOC_LITERAL(19, 222, 16), // "parentLineNumber"
QT_MOC_LITERAL(20, 239, 13), // "statusChanged"
QT_MOC_LITERAL(21, 253, 6), // "status"
QT_MOC_LITERAL(22, 260, 8), // "unitCode"
QT_MOC_LITERAL(23, 269, 12) // "isParentItem"

    },
    "BillItem\0itemCodeChanged\0\0itemCode\0"
    "unitCodeChanged\0unitcode\0itemNameChanged\0"
    "itemName\0countChanged\0count\0priceChanged\0"
    "price\0totalChanged\0total\0parentStatusChanged\0"
    "parent\0lineNumberChanged\0lineNumber\0"
    "parentLineNumberChanged\0parentLineNumber\0"
    "statusChanged\0status\0unitCode\0"
    "isParentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BillItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      12,    1,   79,    2, 0x06 /* Public */,
      14,    1,   82,    2, 0x06 /* Public */,
      16,    1,   85,    2, 0x06 /* Public */,
      18,    1,   88,    2, 0x06 /* Public */,
      20,    1,   91,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
      22, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      23, QMetaType::Bool, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      21, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void BillItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BillItem *_t = static_cast<BillItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemCodeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->unitCodeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->itemNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->countChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->priceChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 5: _t->totalChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 6: _t->parentStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->lineNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->parentLineNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BillItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::itemCodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::unitCodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::itemNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::countChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::priceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::totalChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::parentStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::lineNumberChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::parentLineNumberChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (BillItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BillItem::statusChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BillItem *_t = static_cast<BillItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->itemCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->unitCode(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->itemName(); break;
        case 3: *reinterpret_cast< qint32*>(_v) = _t->count(); break;
        case 4: *reinterpret_cast< qint32*>(_v) = _t->price(); break;
        case 5: *reinterpret_cast< qint32*>(_v) = _t->total(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isParentItem(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->lineNumber(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->parentLineNumber(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BillItem *_t = static_cast<BillItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setItemCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUnitCode(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setItemName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCount(*reinterpret_cast< qint32*>(_v)); break;
        case 4: _t->setPrice(*reinterpret_cast< qint32*>(_v)); break;
        case 5: _t->setTotal(*reinterpret_cast< qint32*>(_v)); break;
        case 6: _t->setIsParentItem(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setLineNumber(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setParentLineNumber(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setStatus(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BillItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BillItem.data,
      qt_meta_data_BillItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BillItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BillItem.stringdata0))
        return static_cast<void*>(const_cast< BillItem*>(this));
    return QObject::qt_metacast(_clname);
}

int BillItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BillItem::itemCodeChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BillItem::unitCodeChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BillItem::itemNameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BillItem::countChanged(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BillItem::priceChanged(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BillItem::totalChanged(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BillItem::parentStatusChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BillItem::lineNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BillItem::parentLineNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BillItem::statusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
