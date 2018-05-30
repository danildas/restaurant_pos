/****************************************************************************
** Meta object code from reading C++ file 'billitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/Work/ProjectCode/POS_Retail/POS/billitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BillItemModel_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BillItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BillItemModel_t qt_meta_stringdata_BillItemModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BillItemModel"
QT_MOC_LITERAL(1, 14, 8), // "ROLENAME"
QT_MOC_LITERAL(2, 23, 12), // "ITEMCODEROLE"
QT_MOC_LITERAL(3, 36, 12), // "UNITCODEROLE"
QT_MOC_LITERAL(4, 49, 12), // "ITEMNAMEROLE"
QT_MOC_LITERAL(5, 62, 9), // "COUNTROLE"
QT_MOC_LITERAL(6, 72, 9), // "PRICEROLE"
QT_MOC_LITERAL(7, 82, 9), // "TOTALROLE"
QT_MOC_LITERAL(8, 92, 12), // "ISPARENTROLE"
QT_MOC_LITERAL(9, 105, 14), // "LINENUMBERROLE"
QT_MOC_LITERAL(10, 120, 20) // "PARENTLINENUMBERROLE"

    },
    "BillItemModel\0ROLENAME\0ITEMCODEROLE\0"
    "UNITCODEROLE\0ITEMNAMEROLE\0COUNTROLE\0"
    "PRICEROLE\0TOTALROLE\0ISPARENTROLE\0"
    "LINENUMBERROLE\0PARENTLINENUMBERROLE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BillItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    9,   18,

 // enum data: key, value
       2, uint(BillItemModel::ITEMCODEROLE),
       3, uint(BillItemModel::UNITCODEROLE),
       4, uint(BillItemModel::ITEMNAMEROLE),
       5, uint(BillItemModel::COUNTROLE),
       6, uint(BillItemModel::PRICEROLE),
       7, uint(BillItemModel::TOTALROLE),
       8, uint(BillItemModel::ISPARENTROLE),
       9, uint(BillItemModel::LINENUMBERROLE),
      10, uint(BillItemModel::PARENTLINENUMBERROLE),

       0        // eod
};

void BillItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BillItemModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_BillItemModel.data,
      qt_meta_data_BillItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BillItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BillItemModel.stringdata0))
        return static_cast<void*>(const_cast< BillItemModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int BillItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
