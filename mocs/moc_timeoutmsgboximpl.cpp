/****************************************************************************
** Meta object code from reading C++ file 'timeoutmsgboximpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/timeoutmsgbox/timeoutmsgboximpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timeoutmsgboximpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_timeoutMsgBoxImpl_t {
    QByteArrayData data[11];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_timeoutMsgBoxImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_timeoutMsgBoxImpl_t qt_meta_stringdata_timeoutMsgBoxImpl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "timeoutMsgBoxImpl"
QT_MOC_LITERAL(1, 18, 12), // "startTimeout"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "timerRefresh"
QT_MOC_LITERAL(4, 45, 11), // "stopTimeout"
QT_MOC_LITERAL(5, 57, 12), // "setMySession"
QT_MOC_LITERAL(6, 70, 26), // "boost::shared_ptr<Session>"
QT_MOC_LITERAL(7, 97, 8), // "theValue"
QT_MOC_LITERAL(8, 106, 8), // "setMsgID"
QT_MOC_LITERAL(9, 115, 16), // "NetTimeoutReason"
QT_MOC_LITERAL(10, 132, 18) // "setTimeoutDuration"

    },
    "timeoutMsgBoxImpl\0startTimeout\0\0"
    "timerRefresh\0stopTimeout\0setMySession\0"
    "boost::shared_ptr<Session>\0theValue\0"
    "setMsgID\0NetTimeoutReason\0setTimeoutDuration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_timeoutMsgBoxImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void timeoutMsgBoxImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        timeoutMsgBoxImpl *_t = static_cast<timeoutMsgBoxImpl *>(_o);
        switch (_id) {
        case 0: _t->startTimeout(); break;
        case 1: _t->timerRefresh(); break;
        case 2: _t->stopTimeout(); break;
        case 3: _t->setMySession((*reinterpret_cast< boost::shared_ptr<Session>(*)>(_a[1]))); break;
        case 4: _t->setMsgID((*reinterpret_cast< NetTimeoutReason(*)>(_a[1]))); break;
        case 5: _t->setTimeoutDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject timeoutMsgBoxImpl::staticMetaObject = {
    { &QMessageBox::staticMetaObject, qt_meta_stringdata_timeoutMsgBoxImpl.data,
      qt_meta_data_timeoutMsgBoxImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *timeoutMsgBoxImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *timeoutMsgBoxImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_timeoutMsgBoxImpl.stringdata))
        return static_cast<void*>(const_cast< timeoutMsgBoxImpl*>(this));
    return QMessageBox::qt_metacast(_clname);
}

int timeoutMsgBoxImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
