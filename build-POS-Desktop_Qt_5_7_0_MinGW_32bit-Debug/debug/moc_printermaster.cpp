/****************************************************************************
** Meta object code from reading C++ file 'printermaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/printermaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printermaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrinterMaster_t {
    QByteArrayData data[24];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrinterMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrinterMaster_t qt_meta_stringdata_PrinterMaster = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PrinterMaster"
QT_MOC_LITERAL(1, 14, 11), // "CodeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "PrinterTypeChanged"
QT_MOC_LITERAL(4, 46, 9), // "IpChanged"
QT_MOC_LITERAL(5, 56, 11), // "PortChanged"
QT_MOC_LITERAL(6, 68, 15), // "BaudRateChanged"
QT_MOC_LITERAL(7, 84, 17), // "TotalCountChanged"
QT_MOC_LITERAL(8, 102, 11), // "RoleChanged"
QT_MOC_LITERAL(9, 114, 7), // "refresh"
QT_MOC_LITERAL(10, 122, 11), // "savePrinter"
QT_MOC_LITERAL(11, 134, 4), // "Code"
QT_MOC_LITERAL(12, 139, 11), // "PrinterType"
QT_MOC_LITERAL(13, 151, 2), // "Ip"
QT_MOC_LITERAL(14, 154, 4), // "Port"
QT_MOC_LITERAL(15, 159, 8), // "BaudRate"
QT_MOC_LITERAL(16, 168, 13), // "deletePrinter"
QT_MOC_LITERAL(17, 182, 4), // "edit"
QT_MOC_LITERAL(18, 187, 4), // "next"
QT_MOC_LITERAL(19, 192, 8), // "previous"
QT_MOC_LITERAL(20, 201, 7), // "getRole"
QT_MOC_LITERAL(21, 209, 7), // "getCode"
QT_MOC_LITERAL(22, 217, 10), // "TotalCount"
QT_MOC_LITERAL(23, 228, 4) // "Role"

    },
    "PrinterMaster\0CodeChanged\0\0"
    "PrinterTypeChanged\0IpChanged\0PortChanged\0"
    "BaudRateChanged\0TotalCountChanged\0"
    "RoleChanged\0refresh\0savePrinter\0Code\0"
    "PrinterType\0Ip\0Port\0BaudRate\0deletePrinter\0"
    "edit\0next\0previous\0getRole\0getCode\0"
    "TotalCount\0Role"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrinterMaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       7,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   96,    2, 0x0a /* Public */,
      10,    5,   97,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    3,  109,    2, 0x0a /* Public */,
      18,    0,  116,    2, 0x0a /* Public */,
      19,    0,  117,    2, 0x0a /* Public */,
      20,    0,  118,    2, 0x0a /* Public */,
      21,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,   15,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      22, QMetaType::Int, 0x00495103,
      23, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void PrinterMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrinterMaster *_t = static_cast<PrinterMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CodeChanged(); break;
        case 1: _t->PrinterTypeChanged(); break;
        case 2: _t->IpChanged(); break;
        case 3: _t->PortChanged(); break;
        case 4: _t->BaudRateChanged(); break;
        case 5: _t->TotalCountChanged(); break;
        case 6: _t->RoleChanged(); break;
        case 7: _t->refresh(); break;
        case 8: { bool _r = _t->savePrinter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->deletePrinter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->edit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->previous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->getRole();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->getCode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::CodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::PrinterTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::IpChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::PortChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::BaudRateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::TotalCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PrinterMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrinterMaster::RoleChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PrinterMaster *_t = static_cast<PrinterMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->Code(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->PrinterType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->Ip(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->Port(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->BaudRate(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->TotalCount(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->Role(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PrinterMaster *_t = static_cast<PrinterMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPrinterType(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIp(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPort(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setBaudRate(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTotalCount(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setRole(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PrinterMaster::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_PrinterMaster.data,
      qt_meta_data_PrinterMaster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrinterMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrinterMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrinterMaster.stringdata0))
        return static_cast<void*>(const_cast< PrinterMaster*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int PrinterMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PrinterMaster::CodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PrinterMaster::PrinterTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PrinterMaster::IpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PrinterMaster::PortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void PrinterMaster::BaudRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PrinterMaster::TotalCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void PrinterMaster::RoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
