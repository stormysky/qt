/****************************************************************************
** Meta object code from reading C++ file 'frmnvr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../VM6000/frmnvr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmnvr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frmNVR_t {
    QByteArrayData data[8];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_frmNVR_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_frmNVR_t qt_meta_stringdata_frmNVR = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 17),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 20),
QT_MOC_LITERAL(4, 47, 20),
QT_MOC_LITERAL(5, 68, 19),
QT_MOC_LITERAL(6, 88, 20),
QT_MOC_LITERAL(7, 109, 5)
    },
    "frmNVR\0on_btnAdd_clicked\0\0"
    "on_btnDelete_clicked\0on_btnUpdate_clicked\0"
    "on_btnExcel_clicked\0on_tableMain_pressed\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmNVR[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    1,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,

       0        // eod
};

void frmNVR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frmNVR *_t = static_cast<frmNVR *>(_o);
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnDelete_clicked(); break;
        case 2: _t->on_btnUpdate_clicked(); break;
        case 3: _t->on_btnExcel_clicked(); break;
        case 4: _t->on_tableMain_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject frmNVR::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_frmNVR.data,
      qt_meta_data_frmNVR,  qt_static_metacall, 0, 0}
};


const QMetaObject *frmNVR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmNVR::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmNVR.stringdata))
        return static_cast<void*>(const_cast< frmNVR*>(this));
    return QDialog::qt_metacast(_clname);
}

int frmNVR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
