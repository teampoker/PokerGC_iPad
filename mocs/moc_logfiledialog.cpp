/****************************************************************************
** Meta object code from reading C++ file 'logfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/logfiledialog/logfiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logfiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LogFileDialog_t {
    QByteArrayData data[24];
    char stringdata[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogFileDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogFileDialog_t qt_meta_stringdata_LogFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogFileDialog"
QT_MOC_LITERAL(1, 14, 21), // "signalUploadCompleted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "filename"
QT_MOC_LITERAL(4, 46, 13), // "returnMessage"
QT_MOC_LITERAL(5, 60, 17), // "signalUploadError"
QT_MOC_LITERAL(6, 78, 12), // "errorMessage"
QT_MOC_LITERAL(7, 91, 18), // "refreshLogFileList"
QT_MOC_LITERAL(8, 110, 13), // "deleteLogFile"
QT_MOC_LITERAL(9, 124, 15), // "exportLogToHtml"
QT_MOC_LITERAL(10, 140, 14), // "exportLogToTxt"
QT_MOC_LITERAL(11, 155, 13), // "saveLogFileAs"
QT_MOC_LITERAL(12, 169, 22), // "showLogFilePreviewInit"
QT_MOC_LITERAL(13, 192, 26), // "showLogFilePreviewSelected"
QT_MOC_LITERAL(14, 219, 18), // "showLogFilePreview"
QT_MOC_LITERAL(15, 238, 11), // "ShowLogMode"
QT_MOC_LITERAL(16, 250, 13), // "keyPressEvent"
QT_MOC_LITERAL(17, 264, 10), // "QKeyEvent*"
QT_MOC_LITERAL(18, 275, 5), // "event"
QT_MOC_LITERAL(19, 281, 10), // "uploadFile"
QT_MOC_LITERAL(20, 292, 30), // "uploadInProgressAnimationStart"
QT_MOC_LITERAL(21, 323, 29), // "uploadInProgressAnimationStop"
QT_MOC_LITERAL(22, 353, 15), // "showLogAnalysis"
QT_MOC_LITERAL(23, 369, 15) // "showUploadError"

    },
    "LogFileDialog\0signalUploadCompleted\0"
    "\0filename\0returnMessage\0signalUploadError\0"
    "errorMessage\0refreshLogFileList\0"
    "deleteLogFile\0exportLogToHtml\0"
    "exportLogToTxt\0saveLogFileAs\0"
    "showLogFilePreviewInit\0"
    "showLogFilePreviewSelected\0"
    "showLogFilePreview\0ShowLogMode\0"
    "keyPressEvent\0QKeyEvent*\0event\0"
    "uploadFile\0uploadInProgressAnimationStart\0"
    "uploadInProgressAnimationStop\0"
    "showLogAnalysis\0showUploadError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       5,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    1,  111,    2, 0x0a /* Public */,
      16,    1,  114,    2, 0x0a /* Public */,
      19,    0,  117,    2, 0x0a /* Public */,
      20,    0,  118,    2, 0x0a /* Public */,
      21,    0,  119,    2, 0x0a /* Public */,
      22,    2,  120,    2, 0x0a /* Public */,
      23,    2,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    6,

       0        // eod
};

void LogFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogFileDialog *_t = static_cast<LogFileDialog *>(_o);
        switch (_id) {
        case 0: _t->signalUploadCompleted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalUploadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->refreshLogFileList(); break;
        case 3: _t->deleteLogFile(); break;
        case 4: _t->exportLogToHtml(); break;
        case 5: _t->exportLogToTxt(); break;
        case 6: _t->saveLogFileAs(); break;
        case 7: _t->showLogFilePreviewInit(); break;
        case 8: _t->showLogFilePreviewSelected(); break;
        case 9: _t->showLogFilePreview((*reinterpret_cast< ShowLogMode(*)>(_a[1]))); break;
        case 10: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 11: _t->uploadFile(); break;
        case 12: _t->uploadInProgressAnimationStart(); break;
        case 13: _t->uploadInProgressAnimationStop(); break;
        case 14: _t->showLogAnalysis((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->showUploadError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LogFileDialog::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogFileDialog::signalUploadCompleted)) {
                *result = 0;
            }
        }
        {
            typedef void (LogFileDialog::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogFileDialog::signalUploadError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LogFileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogFileDialog.data,
      qt_meta_data_LogFileDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogFileDialog.stringdata))
        return static_cast<void*>(const_cast< LogFileDialog*>(this));
    if (!strcmp(_clname, "UploadCallback"))
        return static_cast< UploadCallback*>(const_cast< LogFileDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void LogFileDialog::signalUploadCompleted(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogFileDialog::signalUploadError(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
