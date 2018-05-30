/****************************************************************************
** Meta object code from reading C++ file 'taxmaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/taxmaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taxmaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TaxMaster_t {
    QByteArrayData data[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaxMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaxMaster_t qt_meta_stringdata_TaxMaster = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TaxMaster"
QT_MOC_LITERAL(1, 10, 11), // "sgstChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "cgstChanged"
QT_MOC_LITERAL(4, 35, 7), // "saveTax"
QT_MOC_LITERAL(5, 43, 4), // "SGST"
QT_MOC_LITERAL(6, 48, 4), // "CGST"
QT_MOC_LITERAL(7, 53, 9), // "deleteTax"
QT_MOC_LITERAL(8, 63, 7), // "editTax"
QT_MOC_LITERAL(9, 71, 6), // "getTax"
QT_MOC_LITERAL(10, 78, 4), // "sgst"
QT_MOC_LITERAL(11, 83, 4) // "cgst"

    },
    "TaxMaster\0sgstChanged\0\0cgstChanged\0"
    "saveTax\0SGST\0CGST\0deleteTax\0editTax\0"
    "getTax\0sgst\0cgst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaxMaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   46,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    2,   52,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Bool,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TaxMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaxMaster *_t = static_cast<TaxMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sgstChanged(); break;
        case 1: _t->cgstChanged(); break;
        case 2: { bool _r = _t->saveTax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->deleteTax();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->editTax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getTax();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TaxMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaxMaster::sgstChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TaxMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaxMaster::cgstChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TaxMaster *_t = static_cast<TaxMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sgst(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->cgst(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TaxMaster *_t = static_cast<TaxMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSgst(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCgst(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TaxMaster::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_TaxMaster.data,
      qt_meta_data_TaxMaster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TaxMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaxMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TaxMaster.stringdata0))
        return static_cast<void*>(const_cast< TaxMaster*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int TaxMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TaxMaster::sgstChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TaxMaster::cgstChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
