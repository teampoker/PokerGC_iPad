/****************************************************************************
** Meta object code from reading C++ file 'startwindowimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/startwindow/startwindowimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startwindowimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_startWindowImpl_t {
    QByteArrayData data[92];
    char stringdata[1906];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_startWindowImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_startWindowImpl_t qt_meta_stringdata_startWindowImpl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "startWindowImpl"
QT_MOC_LITERAL(1, 16, 22), // "signalShowClientDialog"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "signalNetClientConnect"
QT_MOC_LITERAL(4, 63, 8), // "actionID"
QT_MOC_LITERAL(5, 72, 29), // "signalNetClientServerListShow"
QT_MOC_LITERAL(6, 102, 30), // "signalNetClientServerListClear"
QT_MOC_LITERAL(7, 133, 28), // "signalNetClientServerListAdd"
QT_MOC_LITERAL(8, 162, 8), // "serverId"
QT_MOC_LITERAL(9, 171, 24), // "signalNetClientLoginShow"
QT_MOC_LITERAL(10, 196, 29), // "signalNetClientRejoinPossible"
QT_MOC_LITERAL(11, 226, 6), // "gameId"
QT_MOC_LITERAL(12, 233, 23), // "signalNetClientGameInfo"
QT_MOC_LITERAL(13, 257, 20), // "signalNetClientError"
QT_MOC_LITERAL(14, 278, 7), // "errorID"
QT_MOC_LITERAL(15, 286, 9), // "osErrorID"
QT_MOC_LITERAL(16, 296, 27), // "signalNetClientNotification"
QT_MOC_LITERAL(17, 324, 14), // "notificationId"
QT_MOC_LITERAL(18, 339, 26), // "signalNetClientStatsUpdate"
QT_MOC_LITERAL(19, 366, 11), // "ServerStats"
QT_MOC_LITERAL(20, 378, 5), // "stats"
QT_MOC_LITERAL(21, 384, 32), // "signalNetClientShowTimeoutDialog"
QT_MOC_LITERAL(22, 417, 30), // "signalNetClientRemovedFromGame"
QT_MOC_LITERAL(23, 448, 20), // "signalNetServerError"
QT_MOC_LITERAL(24, 469, 25), // "signalNetClientSelfJoined"
QT_MOC_LITERAL(25, 495, 8), // "playerId"
QT_MOC_LITERAL(26, 504, 10), // "playerName"
QT_MOC_LITERAL(27, 515, 11), // "isGameAdmin"
QT_MOC_LITERAL(28, 527, 27), // "signalNetClientPlayerJoined"
QT_MOC_LITERAL(29, 555, 28), // "signalNetClientPlayerChanged"
QT_MOC_LITERAL(30, 584, 13), // "newPlayerName"
QT_MOC_LITERAL(31, 598, 25), // "signalNetClientPlayerLeft"
QT_MOC_LITERAL(32, 624, 30), // "signalNetClientSpectatorJoined"
QT_MOC_LITERAL(33, 655, 28), // "signalNetClientSpectatorLeft"
QT_MOC_LITERAL(34, 684, 27), // "signalNetClientNewGameAdmin"
QT_MOC_LITERAL(35, 712, 26), // "signalNetClientGameListNew"
QT_MOC_LITERAL(36, 739, 29), // "signalNetClientGameListRemove"
QT_MOC_LITERAL(37, 769, 33), // "signalNetClientGameListUpdate..."
QT_MOC_LITERAL(38, 803, 4), // "mode"
QT_MOC_LITERAL(39, 808, 34), // "signalNetClientGameListUpdate..."
QT_MOC_LITERAL(40, 843, 13), // "adminPlayerId"
QT_MOC_LITERAL(41, 857, 35), // "signalNetClientGameListPlayer..."
QT_MOC_LITERAL(42, 893, 33), // "signalNetClientGameListPlayer..."
QT_MOC_LITERAL(43, 927, 38), // "signalNetClientGameListSpecta..."
QT_MOC_LITERAL(44, 966, 36), // "signalNetClientGameListSpecta..."
QT_MOC_LITERAL(45, 1003, 24), // "signalNetClientGameStart"
QT_MOC_LITERAL(46, 1028, 23), // "boost::shared_ptr<Game>"
QT_MOC_LITERAL(47, 1052, 4), // "game"
QT_MOC_LITERAL(48, 1057, 26), // "signalNetClientGameChatMsg"
QT_MOC_LITERAL(49, 1084, 8), // "nickName"
QT_MOC_LITERAL(50, 1093, 3), // "msg"
QT_MOC_LITERAL(51, 1097, 27), // "signalNetClientLobbyChatMsg"
QT_MOC_LITERAL(52, 1125, 29), // "signalNetClientPrivateChatMsg"
QT_MOC_LITERAL(53, 1155, 21), // "signalNetClientMsgBox"
QT_MOC_LITERAL(54, 1177, 5), // "msgId"
QT_MOC_LITERAL(55, 1183, 23), // "signalLobbyPlayerJoined"
QT_MOC_LITERAL(56, 1207, 23), // "signalLobbyPlayerKicked"
QT_MOC_LITERAL(57, 1231, 6), // "byWhom"
QT_MOC_LITERAL(58, 1238, 6), // "reason"
QT_MOC_LITERAL(59, 1245, 21), // "signalLobbyPlayerLeft"
QT_MOC_LITERAL(60, 1267, 24), // "signalSelfGameInvitation"
QT_MOC_LITERAL(61, 1292, 12), // "playerIdFrom"
QT_MOC_LITERAL(62, 1305, 26), // "signalPlayerGameInvitation"
QT_MOC_LITERAL(63, 1332, 11), // "playerIdWho"
QT_MOC_LITERAL(64, 1344, 28), // "signalRejectedGameInvitation"
QT_MOC_LITERAL(65, 1373, 24), // "DenyGameInvitationReason"
QT_MOC_LITERAL(66, 1398, 22), // "callAboutPokerthDialog"
QT_MOC_LITERAL(67, 1421, 18), // "callSettingsDialog"
QT_MOC_LITERAL(68, 1440, 33), // "callSettingsDialogFromStartwi..."
QT_MOC_LITERAL(69, 1474, 17), // "callNewGameDialog"
QT_MOC_LITERAL(70, 1492, 19), // "callGameLobbyDialog"
QT_MOC_LITERAL(71, 1512, 27), // "callCreateNetworkGameDialog"
QT_MOC_LITERAL(72, 1540, 25), // "callJoinNetworkGameDialog"
QT_MOC_LITERAL(73, 1566, 15), // "showLobbyDialog"
QT_MOC_LITERAL(74, 1582, 27), // "callInternetGameLoginDialog"
QT_MOC_LITERAL(75, 1610, 24), // "callRejoinPossibleDialog"
QT_MOC_LITERAL(76, 1635, 13), // "joinGameLobby"
QT_MOC_LITERAL(77, 1649, 16), // "showClientDialog"
QT_MOC_LITERAL(78, 1666, 22), // "showNetworkStartDialog"
QT_MOC_LITERAL(79, 1689, 17), // "callLogFileDialog"
QT_MOC_LITERAL(80, 1707, 17), // "startNewLocalGame"
QT_MOC_LITERAL(81, 1725, 18), // "newGameDialogImpl*"
QT_MOC_LITERAL(82, 1744, 17), // "showTimeoutDialog"
QT_MOC_LITERAL(83, 1762, 5), // "msgID"
QT_MOC_LITERAL(84, 1768, 8), // "duration"
QT_MOC_LITERAL(85, 1777, 17), // "hideTimeoutDialog"
QT_MOC_LITERAL(86, 1795, 12), // "networkError"
QT_MOC_LITERAL(87, 1808, 19), // "networkNotification"
QT_MOC_LITERAL(88, 1828, 14), // "networkMessage"
QT_MOC_LITERAL(89, 1843, 12), // "networkStart"
QT_MOC_LITERAL(90, 1856, 18), // "getPlayerNicksList"
QT_MOC_LITERAL(91, 1875, 30) // "checkForFirstStartAfterUpdated"

    },
    "startWindowImpl\0signalShowClientDialog\0"
    "\0signalNetClientConnect\0actionID\0"
    "signalNetClientServerListShow\0"
    "signalNetClientServerListClear\0"
    "signalNetClientServerListAdd\0serverId\0"
    "signalNetClientLoginShow\0"
    "signalNetClientRejoinPossible\0gameId\0"
    "signalNetClientGameInfo\0signalNetClientError\0"
    "errorID\0osErrorID\0signalNetClientNotification\0"
    "notificationId\0signalNetClientStatsUpdate\0"
    "ServerStats\0stats\0signalNetClientShowTimeoutDialog\0"
    "signalNetClientRemovedFromGame\0"
    "signalNetServerError\0signalNetClientSelfJoined\0"
    "playerId\0playerName\0isGameAdmin\0"
    "signalNetClientPlayerJoined\0"
    "signalNetClientPlayerChanged\0newPlayerName\0"
    "signalNetClientPlayerLeft\0"
    "signalNetClientSpectatorJoined\0"
    "signalNetClientSpectatorLeft\0"
    "signalNetClientNewGameAdmin\0"
    "signalNetClientGameListNew\0"
    "signalNetClientGameListRemove\0"
    "signalNetClientGameListUpdateMode\0"
    "mode\0signalNetClientGameListUpdateAdmin\0"
    "adminPlayerId\0signalNetClientGameListPlayerJoined\0"
    "signalNetClientGameListPlayerLeft\0"
    "signalNetClientGameListSpectatorJoined\0"
    "signalNetClientGameListSpectatorLeft\0"
    "signalNetClientGameStart\0"
    "boost::shared_ptr<Game>\0game\0"
    "signalNetClientGameChatMsg\0nickName\0"
    "msg\0signalNetClientLobbyChatMsg\0"
    "signalNetClientPrivateChatMsg\0"
    "signalNetClientMsgBox\0msgId\0"
    "signalLobbyPlayerJoined\0signalLobbyPlayerKicked\0"
    "byWhom\0reason\0signalLobbyPlayerLeft\0"
    "signalSelfGameInvitation\0playerIdFrom\0"
    "signalPlayerGameInvitation\0playerIdWho\0"
    "signalRejectedGameInvitation\0"
    "DenyGameInvitationReason\0"
    "callAboutPokerthDialog\0callSettingsDialog\0"
    "callSettingsDialogFromStartwindow\0"
    "callNewGameDialog\0callGameLobbyDialog\0"
    "callCreateNetworkGameDialog\0"
    "callJoinNetworkGameDialog\0showLobbyDialog\0"
    "callInternetGameLoginDialog\0"
    "callRejoinPossibleDialog\0joinGameLobby\0"
    "showClientDialog\0showNetworkStartDialog\0"
    "callLogFileDialog\0startNewLocalGame\0"
    "newGameDialogImpl*\0showTimeoutDialog\0"
    "msgID\0duration\0hideTimeoutDialog\0"
    "networkError\0networkNotification\0"
    "networkMessage\0networkStart\0"
    "getPlayerNicksList\0checkForFirstStartAfterUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_startWindowImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  344,    2, 0x06 /* Public */,
       3,    1,  345,    2, 0x06 /* Public */,
       5,    0,  348,    2, 0x06 /* Public */,
       6,    0,  349,    2, 0x06 /* Public */,
       7,    1,  350,    2, 0x06 /* Public */,
       9,    0,  353,    2, 0x06 /* Public */,
      10,    1,  354,    2, 0x06 /* Public */,
      12,    1,  357,    2, 0x06 /* Public */,
      13,    2,  360,    2, 0x06 /* Public */,
      16,    1,  365,    2, 0x06 /* Public */,
      18,    1,  368,    2, 0x06 /* Public */,
      21,    2,  371,    2, 0x06 /* Public */,
      22,    1,  376,    2, 0x06 /* Public */,
      23,    2,  379,    2, 0x06 /* Public */,
      24,    3,  384,    2, 0x06 /* Public */,
      28,    3,  391,    2, 0x06 /* Public */,
      29,    2,  398,    2, 0x06 /* Public */,
      31,    2,  403,    2, 0x06 /* Public */,
      32,    2,  408,    2, 0x06 /* Public */,
      33,    2,  413,    2, 0x06 /* Public */,
      34,    2,  418,    2, 0x06 /* Public */,
      35,    1,  423,    2, 0x06 /* Public */,
      36,    1,  426,    2, 0x06 /* Public */,
      37,    2,  429,    2, 0x06 /* Public */,
      39,    2,  434,    2, 0x06 /* Public */,
      41,    2,  439,    2, 0x06 /* Public */,
      42,    2,  444,    2, 0x06 /* Public */,
      43,    2,  449,    2, 0x06 /* Public */,
      44,    2,  454,    2, 0x06 /* Public */,
      45,    1,  459,    2, 0x06 /* Public */,
      48,    2,  462,    2, 0x06 /* Public */,
      51,    2,  467,    2, 0x06 /* Public */,
      52,    2,  472,    2, 0x06 /* Public */,
      53,    1,  477,    2, 0x06 /* Public */,
      53,    1,  480,    2, 0x06 /* Public */,
      55,    2,  483,    2, 0x06 /* Public */,
      56,    3,  488,    2, 0x06 /* Public */,
      59,    1,  495,    2, 0x06 /* Public */,
      60,    2,  498,    2, 0x06 /* Public */,
      62,    3,  503,    2, 0x06 /* Public */,
      64,    3,  510,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      66,    0,  517,    2, 0x0a /* Public */,
      67,    1,  518,    2, 0x0a /* Public */,
      68,    0,  521,    2, 0x0a /* Public */,
      69,    0,  522,    2, 0x0a /* Public */,
      70,    0,  523,    2, 0x0a /* Public */,
      71,    0,  524,    2, 0x0a /* Public */,
      72,    0,  525,    2, 0x0a /* Public */,
      73,    0,  526,    2, 0x0a /* Public */,
      74,    0,  527,    2, 0x0a /* Public */,
      75,    1,  528,    2, 0x0a /* Public */,
      76,    0,  531,    2, 0x0a /* Public */,
      77,    0,  532,    2, 0x0a /* Public */,
      78,    0,  533,    2, 0x0a /* Public */,
      79,    0,  534,    2, 0x0a /* Public */,
      80,    1,  535,    2, 0x0a /* Public */,
      80,    0,  538,    2, 0x2a /* Public | MethodCloned */,
      82,    2,  539,    2, 0x0a /* Public */,
      85,    0,  544,    2, 0x0a /* Public */,
      86,    2,  545,    2, 0x0a /* Public */,
      87,    1,  550,    2, 0x0a /* Public */,
      88,    1,  553,    2, 0x0a /* Public */,
      88,    1,  556,    2, 0x0a /* Public */,
      89,    1,  559,    2, 0x0a /* Public */,
      90,    0,  562,    2, 0x0a /* Public */,
      91,    0,  563,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   30,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   11,   38,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   40,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   25,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::UInt,   54,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   25,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   49,   57,   58,
    QMetaType::Void, QMetaType::UInt,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   61,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   11,   63,   61,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 65,   11,   63,   58,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 81,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   83,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::QStringList,
    QMetaType::QString,

       0        // eod
};

void startWindowImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        startWindowImpl *_t = static_cast<startWindowImpl *>(_o);
        switch (_id) {
        case 0: _t->signalShowClientDialog(); break;
        case 1: _t->signalNetClientConnect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalNetClientServerListShow(); break;
        case 3: _t->signalNetClientServerListClear(); break;
        case 4: _t->signalNetClientServerListAdd((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->signalNetClientLoginShow(); break;
        case 6: _t->signalNetClientRejoinPossible((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->signalNetClientGameInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->signalNetClientError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->signalNetClientNotification((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->signalNetClientStatsUpdate((*reinterpret_cast< ServerStats(*)>(_a[1]))); break;
        case 11: _t->signalNetClientShowTimeoutDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 12: _t->signalNetClientRemovedFromGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->signalNetServerError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->signalNetClientSelfJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->signalNetClientPlayerJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->signalNetClientPlayerChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->signalNetClientPlayerLeft((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->signalNetClientSpectatorJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->signalNetClientSpectatorLeft((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->signalNetClientNewGameAdmin((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->signalNetClientGameListNew((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 22: _t->signalNetClientGameListRemove((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 23: _t->signalNetClientGameListUpdateMode((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->signalNetClientGameListUpdateAdmin((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 25: _t->signalNetClientGameListPlayerJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 26: _t->signalNetClientGameListPlayerLeft((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 27: _t->signalNetClientGameListSpectatorJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 28: _t->signalNetClientGameListSpectatorLeft((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 29: _t->signalNetClientGameStart((*reinterpret_cast< boost::shared_ptr<Game>(*)>(_a[1]))); break;
        case 30: _t->signalNetClientGameChatMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->signalNetClientLobbyChatMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->signalNetClientPrivateChatMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->signalNetClientMsgBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->signalNetClientMsgBox((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 35: _t->signalLobbyPlayerJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->signalLobbyPlayerKicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 37: _t->signalLobbyPlayerLeft((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 38: _t->signalSelfGameInvitation((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 39: _t->signalPlayerGameInvitation((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 40: _t->signalRejectedGameInvitation((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< DenyGameInvitationReason(*)>(_a[3]))); break;
        case 41: _t->callAboutPokerthDialog(); break;
        case 42: _t->callSettingsDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->callSettingsDialogFromStartwindow(); break;
        case 44: _t->callNewGameDialog(); break;
        case 45: _t->callGameLobbyDialog(); break;
        case 46: _t->callCreateNetworkGameDialog(); break;
        case 47: _t->callJoinNetworkGameDialog(); break;
        case 48: _t->showLobbyDialog(); break;
        case 49: _t->callInternetGameLoginDialog(); break;
        case 50: _t->callRejoinPossibleDialog((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 51: _t->joinGameLobby(); break;
        case 52: _t->showClientDialog(); break;
        case 53: _t->showNetworkStartDialog(); break;
        case 54: _t->callLogFileDialog(); break;
        case 55: _t->startNewLocalGame((*reinterpret_cast< newGameDialogImpl*(*)>(_a[1]))); break;
        case 56: _t->startNewLocalGame(); break;
        case 57: _t->showTimeoutDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 58: _t->hideTimeoutDialog(); break;
        case 59: _t->networkError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->networkNotification((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->networkMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->networkMessage((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 63: _t->networkStart((*reinterpret_cast< boost::shared_ptr<Game>(*)>(_a[1]))); break;
        case 64: { QStringList _r = _t->getPlayerNicksList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 65: { QString _r = _t->checkForFirstStartAfterUpdated();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (startWindowImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalShowClientDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientConnect)) {
                *result = 1;
            }
        }
        {
            typedef void (startWindowImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientServerListShow)) {
                *result = 2;
            }
        }
        {
            typedef void (startWindowImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientServerListClear)) {
                *result = 3;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientServerListAdd)) {
                *result = 4;
            }
        }
        {
            typedef void (startWindowImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientLoginShow)) {
                *result = 5;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientRejoinPossible)) {
                *result = 6;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameInfo)) {
                *result = 7;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientError)) {
                *result = 8;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientNotification)) {
                *result = 9;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(ServerStats );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientStatsUpdate)) {
                *result = 10;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientShowTimeoutDialog)) {
                *result = 11;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientRemovedFromGame)) {
                *result = 12;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetServerError)) {
                *result = 13;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientSelfJoined)) {
                *result = 14;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientPlayerJoined)) {
                *result = 15;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientPlayerChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientPlayerLeft)) {
                *result = 17;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientSpectatorJoined)) {
                *result = 18;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientSpectatorLeft)) {
                *result = 19;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientNewGameAdmin)) {
                *result = 20;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListNew)) {
                *result = 21;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListRemove)) {
                *result = 22;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListUpdateMode)) {
                *result = 23;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListUpdateAdmin)) {
                *result = 24;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListPlayerJoined)) {
                *result = 25;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListPlayerLeft)) {
                *result = 26;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListSpectatorJoined)) {
                *result = 27;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameListSpectatorLeft)) {
                *result = 28;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(boost::shared_ptr<Game> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameStart)) {
                *result = 29;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientGameChatMsg)) {
                *result = 30;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientLobbyChatMsg)) {
                *result = 31;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientPrivateChatMsg)) {
                *result = 32;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientMsgBox)) {
                *result = 33;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalNetClientMsgBox)) {
                *result = 34;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalLobbyPlayerJoined)) {
                *result = 35;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalLobbyPlayerKicked)) {
                *result = 36;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalLobbyPlayerLeft)) {
                *result = 37;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalSelfGameInvitation)) {
                *result = 38;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalPlayerGameInvitation)) {
                *result = 39;
            }
        }
        {
            typedef void (startWindowImpl::*_t)(unsigned  , unsigned  , DenyGameInvitationReason );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&startWindowImpl::signalRejectedGameInvitation)) {
                *result = 40;
            }
        }
    }
}

const QMetaObject startWindowImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_startWindowImpl.data,
      qt_meta_data_startWindowImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *startWindowImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_startWindowImpl.stringdata))
        return static_cast<void*>(const_cast< startWindowImpl*>(this));
    if (!strcmp(_clname, "Ui::startWindow"))
        return static_cast< Ui::startWindow*>(const_cast< startWindowImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int startWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 66;
    }
    return _id;
}

// SIGNAL 0
void startWindowImpl::signalShowClientDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void startWindowImpl::signalNetClientConnect(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void startWindowImpl::signalNetClientServerListShow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void startWindowImpl::signalNetClientServerListClear()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void startWindowImpl::signalNetClientServerListAdd(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void startWindowImpl::signalNetClientLoginShow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void startWindowImpl::signalNetClientRejoinPossible(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void startWindowImpl::signalNetClientGameInfo(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void startWindowImpl::signalNetClientError(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void startWindowImpl::signalNetClientNotification(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void startWindowImpl::signalNetClientStatsUpdate(ServerStats _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void startWindowImpl::signalNetClientShowTimeoutDialog(int _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void startWindowImpl::signalNetClientRemovedFromGame(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void startWindowImpl::signalNetServerError(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void startWindowImpl::signalNetClientSelfJoined(unsigned  _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void startWindowImpl::signalNetClientPlayerJoined(unsigned  _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void startWindowImpl::signalNetClientPlayerChanged(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void startWindowImpl::signalNetClientPlayerLeft(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void startWindowImpl::signalNetClientSpectatorJoined(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void startWindowImpl::signalNetClientSpectatorLeft(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void startWindowImpl::signalNetClientNewGameAdmin(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void startWindowImpl::signalNetClientGameListNew(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void startWindowImpl::signalNetClientGameListRemove(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void startWindowImpl::signalNetClientGameListUpdateMode(unsigned  _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void startWindowImpl::signalNetClientGameListUpdateAdmin(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void startWindowImpl::signalNetClientGameListPlayerJoined(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void startWindowImpl::signalNetClientGameListPlayerLeft(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void startWindowImpl::signalNetClientGameListSpectatorJoined(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void startWindowImpl::signalNetClientGameListSpectatorLeft(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void startWindowImpl::signalNetClientGameStart(boost::shared_ptr<Game> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void startWindowImpl::signalNetClientGameChatMsg(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void startWindowImpl::signalNetClientLobbyChatMsg(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void startWindowImpl::signalNetClientPrivateChatMsg(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void startWindowImpl::signalNetClientMsgBox(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void startWindowImpl::signalNetClientMsgBox(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void startWindowImpl::signalLobbyPlayerJoined(unsigned  _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void startWindowImpl::signalLobbyPlayerKicked(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void startWindowImpl::signalLobbyPlayerLeft(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void startWindowImpl::signalSelfGameInvitation(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void startWindowImpl::signalPlayerGameInvitation(unsigned  _t1, unsigned  _t2, unsigned  _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void startWindowImpl::signalRejectedGameInvitation(unsigned  _t1, unsigned  _t2, DenyGameInvitationReason _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}
QT_END_MOC_NAMESPACE
