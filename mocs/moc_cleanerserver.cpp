/****************************************************************************
** Meta object code from reading C++ file 'cleanerserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/chatcleaner/cleanerserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cleanerserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CleanerServer_t {
    QByteArrayData data[11];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CleanerServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CleanerServer_t qt_meta_stringdata_CleanerServer = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 6),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 6),
QT_MOC_LITERAL(4, 29, 13),
QT_MOC_LITERAL(5, 43, 19),
QT_MOC_LITERAL(6, 63, 3),
QT_MOC_LITERAL(7, 67, 18),
QT_MOC_LITERAL(8, 86, 28),
QT_MOC_LITERAL(9, 115, 13),
QT_MOC_LITERAL(10, 129, 19)
    },
    "CleanerServer\0newCon\0\0onRead\0handleMessage\0"
    "ChatCleanerMessage&\0msg\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0refreshConfig\0"
    "sendMessageToClient\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CleanerServer[] = {

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
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    1,   46,    2, 0x08,
       7,    1,   49,    2, 0x08,
       9,    0,   52,    2, 0x08,
      10,    1,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void CleanerServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CleanerServer *_t = static_cast<CleanerServer *>(_o);
        switch (_id) {
        case 0: _t->newCon(); break;
        case 1: _t->onRead(); break;
        case 2: { bool _r = _t->handleMessage((*reinterpret_cast< ChatCleanerMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->refreshConfig(); break;
        case 5: _t->sendMessageToClient((*reinterpret_cast< ChatCleanerMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject CleanerServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CleanerServer.data,
      qt_meta_data_CleanerServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *CleanerServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CleanerServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CleanerServer.stringdata))
        return static_cast<void*>(const_cast< CleanerServer*>(this));
    return QObject::qt_metacast(_clname);
}

int CleanerServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
