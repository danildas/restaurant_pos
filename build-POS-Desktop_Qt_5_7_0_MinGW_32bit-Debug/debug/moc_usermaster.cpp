/****************************************************************************
** Meta object code from reading C++ file 'usermaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/usermaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserMaster_t {
    QByteArrayData data[19];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserMaster_t qt_meta_stringdata_UserMaster = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserMaster"
QT_MOC_LITERAL(1, 11, 15), // "UserCodeChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "UserNameChanged"
QT_MOC_LITERAL(4, 44, 11), // "RoleChanged"
QT_MOC_LITERAL(5, 56, 17), // "TotalCountChanged"
QT_MOC_LITERAL(6, 74, 21), // "roleValueCountChanged"
QT_MOC_LITERAL(7, 96, 7), // "refresh"
QT_MOC_LITERAL(8, 104, 8), // "saveUser"
QT_MOC_LITERAL(9, 113, 8), // "UserName"
QT_MOC_LITERAL(10, 122, 4), // "Role"
QT_MOC_LITERAL(11, 127, 8), // "Password"
QT_MOC_LITERAL(12, 136, 4), // "next"
QT_MOC_LITERAL(13, 141, 8), // "previous"
QT_MOC_LITERAL(14, 150, 10), // "deleteUser"
QT_MOC_LITERAL(15, 161, 8), // "editUser"
QT_MOC_LITERAL(16, 170, 8), // "UserCode"
QT_MOC_LITERAL(17, 179, 10), // "TotalCount"
QT_MOC_LITERAL(18, 190, 14) // "roleValueCount"

    },
    "UserMaster\0UserCodeChanged\0\0UserNameChanged\0"
    "RoleChanged\0TotalCountChanged\0"
    "roleValueCountChanged\0refresh\0saveUser\0"
    "UserName\0Role\0Password\0next\0previous\0"
    "deleteUser\0editUser\0UserCode\0TotalCount\0"
    "roleValueCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x0a /* Public */,
       8,    3,   75,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x0a /* Public */,
      15,    3,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void UserMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserMaster *_t = static_cast<UserMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UserCodeChanged(); break;
        case 1: _t->UserNameChanged(); break;
        case 2: _t->RoleChanged(); break;
        case 3: _t->TotalCountChanged(); break;
        case 4: _t->roleValueCountChanged(); break;
        case 5: _t->refresh(); break;
        case 6: { bool _r = _t->saveUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->previous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->deleteUser();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->editUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMaster::UserCodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMaster::UserNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UserMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMaster::RoleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UserMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMaster::TotalCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UserMaster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMaster::roleValueCountChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UserMaster *_t = static_cast<UserMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->UserCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->UserName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->Role(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->TotalCount(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->roleValueCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UserMaster *_t = static_cast<UserMaster *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRole(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTotalCount(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setRoleValueCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject UserMaster::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_UserMaster.data,
      qt_meta_data_UserMaster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserMaster.stringdata0))
        return static_cast<void*>(const_cast< UserMaster*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int UserMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UserMaster::UserCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UserMaster::UserNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void UserMaster::RoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void UserMaster::TotalCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void UserMaster::roleValueCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
