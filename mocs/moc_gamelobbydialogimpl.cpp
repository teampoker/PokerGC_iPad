/****************************************************************************
** Meta object code from reading C++ file 'gamelobbydialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/gamelobbydialog/gamelobbydialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamelobbydialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gameLobbyDialogImpl_t {
    QByteArrayData data[105];
    char stringdata[1703];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameLobbyDialogImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameLobbyDialogImpl_t qt_meta_stringdata_gameLobbyDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "gameLobbyDialogImpl"
QT_MOC_LITERAL(1, 20, 10), // "createGame"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "joinGame"
QT_MOC_LITERAL(4, 41, 12), // "gameSelected"
QT_MOC_LITERAL(5, 54, 14), // "updateGameItem"
QT_MOC_LITERAL(6, 69, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(7, 91, 6), // "gameId"
QT_MOC_LITERAL(8, 98, 7), // "addGame"
QT_MOC_LITERAL(9, 106, 14), // "updateGameMode"
QT_MOC_LITERAL(10, 121, 7), // "newMode"
QT_MOC_LITERAL(11, 129, 15), // "updateGameAdmin"
QT_MOC_LITERAL(12, 145, 13), // "adminPlayerId"
QT_MOC_LITERAL(13, 159, 10), // "removeGame"
QT_MOC_LITERAL(14, 170, 13), // "gameAddPlayer"
QT_MOC_LITERAL(15, 184, 8), // "playerId"
QT_MOC_LITERAL(16, 193, 16), // "gameRemovePlayer"
QT_MOC_LITERAL(17, 210, 17), // "playerJoinedLobby"
QT_MOC_LITERAL(18, 228, 10), // "playerName"
QT_MOC_LITERAL(19, 239, 15), // "playerLeftLobby"
QT_MOC_LITERAL(20, 255, 11), // "updateStats"
QT_MOC_LITERAL(21, 267, 11), // "ServerStats"
QT_MOC_LITERAL(22, 279, 5), // "stats"
QT_MOC_LITERAL(23, 285, 16), // "refreshGameStats"
QT_MOC_LITERAL(24, 302, 18), // "refreshPlayerStats"
QT_MOC_LITERAL(25, 321, 18), // "setCurrentGameName"
QT_MOC_LITERAL(26, 340, 8), // "theValue"
QT_MOC_LITERAL(27, 349, 18), // "getCurrentGameName"
QT_MOC_LITERAL(28, 368, 6), // "getMyW"
QT_MOC_LITERAL(29, 375, 14), // "gameTableImpl*"
QT_MOC_LITERAL(30, 390, 19), // "checkPlayerQuantity"
QT_MOC_LITERAL(31, 410, 28), // "blinkingStartButtonAnimation"
QT_MOC_LITERAL(32, 439, 17), // "joinedNetworkGame"
QT_MOC_LITERAL(33, 457, 18), // "addConnectedPlayer"
QT_MOC_LITERAL(34, 476, 12), // "updatePlayer"
QT_MOC_LITERAL(35, 489, 12), // "removePlayer"
QT_MOC_LITERAL(36, 502, 12), // "newGameAdmin"
QT_MOC_LITERAL(37, 515, 29), // "refreshConnectedPlayerAvatars"
QT_MOC_LITERAL(38, 545, 14), // "playerSelected"
QT_MOC_LITERAL(39, 560, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(40, 577, 7), // "refresh"
QT_MOC_LITERAL(41, 585, 8), // "actionID"
QT_MOC_LITERAL(42, 594, 15), // "removedFromGame"
QT_MOC_LITERAL(43, 610, 6), // "reason"
QT_MOC_LITERAL(44, 617, 9), // "startGame"
QT_MOC_LITERAL(45, 627, 9), // "leaveGame"
QT_MOC_LITERAL(46, 637, 10), // "kickPlayer"
QT_MOC_LITERAL(47, 648, 22), // "joinedGameDialogUpdate"
QT_MOC_LITERAL(48, 671, 20), // "leftGameDialogUpdate"
QT_MOC_LITERAL(49, 692, 18), // "updateDialogBlinds"
QT_MOC_LITERAL(50, 711, 8), // "GameData"
QT_MOC_LITERAL(51, 720, 8), // "gameData"
QT_MOC_LITERAL(52, 729, 11), // "clearDialog"
QT_MOC_LITERAL(53, 741, 13), // "keyPressEvent"
QT_MOC_LITERAL(54, 755, 10), // "QKeyEvent*"
QT_MOC_LITERAL(55, 766, 8), // "keyEvent"
QT_MOC_LITERAL(56, 775, 5), // "event"
QT_MOC_LITERAL(57, 781, 7), // "QEvent*"
QT_MOC_LITERAL(58, 789, 19), // "showGameDescription"
QT_MOC_LITERAL(59, 809, 4), // "show"
QT_MOC_LITERAL(60, 814, 23), // "showWaitStartGameMsgBox"
QT_MOC_LITERAL(61, 838, 23), // "hideWaitStartGameMsgBox"
QT_MOC_LITERAL(62, 862, 28), // "stopWaitStartGameMsgBoxTimer"
QT_MOC_LITERAL(63, 891, 6), // "reject"
QT_MOC_LITERAL(64, 898, 10), // "closeEvent"
QT_MOC_LITERAL(65, 909, 12), // "QCloseEvent*"
QT_MOC_LITERAL(66, 922, 6), // "accept"
QT_MOC_LITERAL(67, 929, 19), // "writeDialogSettings"
QT_MOC_LITERAL(68, 949, 18), // "readDialogSettings"
QT_MOC_LITERAL(69, 968, 20), // "changeGameListFilter"
QT_MOC_LITERAL(70, 989, 20), // "changeNickListFilter"
QT_MOC_LITERAL(71, 1010, 21), // "changeGameListSorting"
QT_MOC_LITERAL(72, 1032, 18), // "registeredUserMode"
QT_MOC_LITERAL(73, 1051, 13), // "guestUserMode"
QT_MOC_LITERAL(74, 1065, 23), // "showNickListContextMenu"
QT_MOC_LITERAL(75, 1089, 23), // "showGameListContextMenu"
QT_MOC_LITERAL(76, 1113, 31), // "showConnectedPlayersContextMenu"
QT_MOC_LITERAL(77, 1145, 25), // "invitePlayerToCurrentGame"
QT_MOC_LITERAL(78, 1171, 14), // "showInfoMsgBox"
QT_MOC_LITERAL(79, 1186, 20), // "showInvitationDialog"
QT_MOC_LITERAL(80, 1207, 12), // "playerIdFrom"
QT_MOC_LITERAL(81, 1220, 24), // "chatInfoPlayerInvitation"
QT_MOC_LITERAL(82, 1245, 11), // "playerIdWho"
QT_MOC_LITERAL(83, 1257, 32), // "chatInfoPlayerRejectedInvitation"
QT_MOC_LITERAL(84, 1290, 24), // "DenyGameInvitationReason"
QT_MOC_LITERAL(85, 1315, 21), // "putPlayerOnIgnoreList"
QT_MOC_LITERAL(86, 1337, 26), // "removePlayerFromIgnoreList"
QT_MOC_LITERAL(87, 1364, 20), // "playerIsOnIgnoreList"
QT_MOC_LITERAL(88, 1385, 8), // "playerid"
QT_MOC_LITERAL(89, 1394, 28), // "searchForPlayerRegExpChanged"
QT_MOC_LITERAL(90, 1423, 18), // "showAutoStartTimer"
QT_MOC_LITERAL(91, 1442, 20), // "updateAutoStartTimer"
QT_MOC_LITERAL(92, 1463, 16), // "openPlayerStats1"
QT_MOC_LITERAL(93, 1480, 16), // "openPlayerStats2"
QT_MOC_LITERAL(94, 1497, 20), // "getFullCountryString"
QT_MOC_LITERAL(95, 1518, 20), // "closeAllChildDialogs"
QT_MOC_LITERAL(96, 1539, 17), // "reportBadGameName"
QT_MOC_LITERAL(97, 1557, 20), // "adminActionCloseGame"
QT_MOC_LITERAL(98, 1578, 23), // "adminActionTotalKickBan"
QT_MOC_LITERAL(99, 1602, 21), // "addConnectedSpectator"
QT_MOC_LITERAL(100, 1624, 11), // "spectatorId"
QT_MOC_LITERAL(101, 1636, 13), // "spectatorName"
QT_MOC_LITERAL(102, 1650, 15), // "removeSpectator"
QT_MOC_LITERAL(103, 1666, 16), // "gameAddSpectator"
QT_MOC_LITERAL(104, 1683, 19) // "gameRemoveSpectator"

    },
    "gameLobbyDialogImpl\0createGame\0\0"
    "joinGame\0gameSelected\0updateGameItem\0"
    "QList<QStandardItem*>\0gameId\0addGame\0"
    "updateGameMode\0newMode\0updateGameAdmin\0"
    "adminPlayerId\0removeGame\0gameAddPlayer\0"
    "playerId\0gameRemovePlayer\0playerJoinedLobby\0"
    "playerName\0playerLeftLobby\0updateStats\0"
    "ServerStats\0stats\0refreshGameStats\0"
    "refreshPlayerStats\0setCurrentGameName\0"
    "theValue\0getCurrentGameName\0getMyW\0"
    "gameTableImpl*\0checkPlayerQuantity\0"
    "blinkingStartButtonAnimation\0"
    "joinedNetworkGame\0addConnectedPlayer\0"
    "updatePlayer\0removePlayer\0newGameAdmin\0"
    "refreshConnectedPlayerAvatars\0"
    "playerSelected\0QTreeWidgetItem*\0refresh\0"
    "actionID\0removedFromGame\0reason\0"
    "startGame\0leaveGame\0kickPlayer\0"
    "joinedGameDialogUpdate\0leftGameDialogUpdate\0"
    "updateDialogBlinds\0GameData\0gameData\0"
    "clearDialog\0keyPressEvent\0QKeyEvent*\0"
    "keyEvent\0event\0QEvent*\0showGameDescription\0"
    "show\0showWaitStartGameMsgBox\0"
    "hideWaitStartGameMsgBox\0"
    "stopWaitStartGameMsgBoxTimer\0reject\0"
    "closeEvent\0QCloseEvent*\0accept\0"
    "writeDialogSettings\0readDialogSettings\0"
    "changeGameListFilter\0changeNickListFilter\0"
    "changeGameListSorting\0registeredUserMode\0"
    "guestUserMode\0showNickListContextMenu\0"
    "showGameListContextMenu\0"
    "showConnectedPlayersContextMenu\0"
    "invitePlayerToCurrentGame\0showInfoMsgBox\0"
    "showInvitationDialog\0playerIdFrom\0"
    "chatInfoPlayerInvitation\0playerIdWho\0"
    "chatInfoPlayerRejectedInvitation\0"
    "DenyGameInvitationReason\0putPlayerOnIgnoreList\0"
    "removePlayerFromIgnoreList\0"
    "playerIsOnIgnoreList\0playerid\0"
    "searchForPlayerRegExpChanged\0"
    "showAutoStartTimer\0updateAutoStartTimer\0"
    "openPlayerStats1\0openPlayerStats2\0"
    "getFullCountryString\0closeAllChildDialogs\0"
    "reportBadGameName\0adminActionCloseGame\0"
    "adminActionTotalKickBan\0addConnectedSpectator\0"
    "spectatorId\0spectatorName\0removeSpectator\0"
    "gameAddSpectator\0gameRemoveSpectator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameLobbyDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      77,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  399,    2, 0x0a /* Public */,
       3,    0,  400,    2, 0x0a /* Public */,
       4,    1,  401,    2, 0x0a /* Public */,
       5,    2,  404,    2, 0x0a /* Public */,
       8,    1,  409,    2, 0x0a /* Public */,
       9,    2,  412,    2, 0x0a /* Public */,
      11,    2,  417,    2, 0x0a /* Public */,
      13,    1,  422,    2, 0x0a /* Public */,
      14,    2,  425,    2, 0x0a /* Public */,
      16,    2,  430,    2, 0x0a /* Public */,
      17,    2,  435,    2, 0x0a /* Public */,
      19,    1,  440,    2, 0x0a /* Public */,
      20,    1,  443,    2, 0x0a /* Public */,
      23,    0,  446,    2, 0x0a /* Public */,
      24,    0,  447,    2, 0x0a /* Public */,
      25,    1,  448,    2, 0x0a /* Public */,
      27,    0,  451,    2, 0x0a /* Public */,
      28,    0,  452,    2, 0x0a /* Public */,
      30,    0,  453,    2, 0x0a /* Public */,
      31,    0,  454,    2, 0x0a /* Public */,
      32,    3,  455,    2, 0x0a /* Public */,
      33,    3,  462,    2, 0x0a /* Public */,
      34,    2,  469,    2, 0x0a /* Public */,
      35,    2,  474,    2, 0x0a /* Public */,
      36,    2,  479,    2, 0x0a /* Public */,
      37,    0,  484,    2, 0x0a /* Public */,
      38,    2,  485,    2, 0x0a /* Public */,
      40,    1,  490,    2, 0x0a /* Public */,
      42,    1,  493,    2, 0x0a /* Public */,
      44,    0,  496,    2, 0x0a /* Public */,
      45,    0,  497,    2, 0x0a /* Public */,
      46,    0,  498,    2, 0x0a /* Public */,
      47,    0,  499,    2, 0x0a /* Public */,
      48,    0,  500,    2, 0x0a /* Public */,
      49,    1,  501,    2, 0x0a /* Public */,
      52,    0,  504,    2, 0x0a /* Public */,
      53,    1,  505,    2, 0x0a /* Public */,
      56,    1,  508,    2, 0x0a /* Public */,
      58,    1,  511,    2, 0x0a /* Public */,
      60,    0,  514,    2, 0x0a /* Public */,
      61,    0,  515,    2, 0x0a /* Public */,
      62,    0,  516,    2, 0x0a /* Public */,
      63,    0,  517,    2, 0x0a /* Public */,
      64,    1,  518,    2, 0x0a /* Public */,
      66,    0,  521,    2, 0x0a /* Public */,
      67,    1,  522,    2, 0x0a /* Public */,
      68,    0,  525,    2, 0x0a /* Public */,
      69,    1,  526,    2, 0x0a /* Public */,
      70,    1,  529,    2, 0x0a /* Public */,
      71,    0,  532,    2, 0x0a /* Public */,
      72,    0,  533,    2, 0x0a /* Public */,
      73,    0,  534,    2, 0x0a /* Public */,
      74,    1,  535,    2, 0x0a /* Public */,
      75,    1,  538,    2, 0x0a /* Public */,
      76,    1,  541,    2, 0x0a /* Public */,
      77,    0,  544,    2, 0x0a /* Public */,
      78,    0,  545,    2, 0x0a /* Public */,
      79,    2,  546,    2, 0x0a /* Public */,
      81,    3,  551,    2, 0x0a /* Public */,
      83,    3,  558,    2, 0x0a /* Public */,
      85,    0,  565,    2, 0x0a /* Public */,
      86,    0,  566,    2, 0x0a /* Public */,
      87,    1,  567,    2, 0x0a /* Public */,
      89,    0,  570,    2, 0x0a /* Public */,
      90,    0,  571,    2, 0x0a /* Public */,
      91,    0,  572,    2, 0x0a /* Public */,
      92,    0,  573,    2, 0x0a /* Public */,
      93,    0,  574,    2, 0x0a /* Public */,
      94,    1,  575,    2, 0x0a /* Public */,
      95,    0,  578,    2, 0x0a /* Public */,
      96,    0,  579,    2, 0x0a /* Public */,
      97,    0,  580,    2, 0x0a /* Public */,
      98,    0,  581,    2, 0x0a /* Public */,
      99,    2,  582,    2, 0x0a /* Public */,
     102,    2,  587,    2, 0x0a /* Public */,
     103,    2,  592,    2, 0x0a /* Public */,
     104,    2,  597,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::UInt,    2,    7,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    7,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,   12,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,   15,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,   15,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   15,   18,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::QString,
    0x80000000 | 29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 39,    2,    2,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Bool, 0x80000000 | 57,   56,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,   80,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    7,   82,   80,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 84,    7,   82,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::UInt,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,  100,  101,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,  100,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,

       0        // eod
};

void gameLobbyDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gameLobbyDialogImpl *_t = static_cast<gameLobbyDialogImpl *>(_o);
        switch (_id) {
        case 0: _t->createGame(); break;
        case 1: _t->joinGame(); break;
        case 2: _t->gameSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->updateGameItem((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->addGame((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->updateGameMode((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateGameAdmin((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: _t->removeGame((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->gameAddPlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 9: _t->gameRemovePlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 10: _t->playerJoinedLobby((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->playerLeftLobby((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->updateStats((*reinterpret_cast< ServerStats(*)>(_a[1]))); break;
        case 13: _t->refreshGameStats(); break;
        case 14: _t->refreshPlayerStats(); break;
        case 15: _t->setCurrentGameName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: { QString _r = _t->getCurrentGameName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { gameTableImpl* _r = _t->getMyW();
            if (_a[0]) *reinterpret_cast< gameTableImpl**>(_a[0]) = _r; }  break;
        case 18: _t->checkPlayerQuantity(); break;
        case 19: _t->blinkingStartButtonAnimation(); break;
        case 20: _t->joinedNetworkGame((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->addConnectedPlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->updatePlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->removePlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->newGameAdmin((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->refreshConnectedPlayerAvatars(); break;
        case 26: _t->playerSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 27: _t->refresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->removedFromGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->startGame(); break;
        case 30: _t->leaveGame(); break;
        case 31: _t->kickPlayer(); break;
        case 32: _t->joinedGameDialogUpdate(); break;
        case 33: _t->leftGameDialogUpdate(); break;
        case 34: _t->updateDialogBlinds((*reinterpret_cast< const GameData(*)>(_a[1]))); break;
        case 35: _t->clearDialog(); break;
        case 36: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 37: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: _t->showGameDescription((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->showWaitStartGameMsgBox(); break;
        case 40: _t->hideWaitStartGameMsgBox(); break;
        case 41: _t->stopWaitStartGameMsgBoxTimer(); break;
        case 42: _t->reject(); break;
        case 43: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 44: _t->accept(); break;
        case 45: _t->writeDialogSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->readDialogSettings(); break;
        case 47: _t->changeGameListFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->changeNickListFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->changeGameListSorting(); break;
        case 50: _t->registeredUserMode(); break;
        case 51: _t->guestUserMode(); break;
        case 52: _t->showNickListContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 53: _t->showGameListContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 54: _t->showConnectedPlayersContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 55: _t->invitePlayerToCurrentGame(); break;
        case 56: _t->showInfoMsgBox(); break;
        case 57: _t->showInvitationDialog((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 58: _t->chatInfoPlayerInvitation((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 59: _t->chatInfoPlayerRejectedInvitation((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< DenyGameInvitationReason(*)>(_a[3]))); break;
        case 60: _t->putPlayerOnIgnoreList(); break;
        case 61: _t->removePlayerFromIgnoreList(); break;
        case 62: { bool _r = _t->playerIsOnIgnoreList((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: _t->searchForPlayerRegExpChanged(); break;
        case 64: _t->showAutoStartTimer(); break;
        case 65: _t->updateAutoStartTimer(); break;
        case 66: _t->openPlayerStats1(); break;
        case 67: _t->openPlayerStats2(); break;
        case 68: { QString _r = _t->getFullCountryString((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: _t->closeAllChildDialogs(); break;
        case 70: _t->reportBadGameName(); break;
        case 71: _t->adminActionCloseGame(); break;
        case 72: _t->adminActionTotalKickBan(); break;
        case 73: _t->addConnectedSpectator((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 74: _t->removeSpectator((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 75: _t->gameAddSpectator((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 76: _t->gameRemoveSpectator((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject gameLobbyDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gameLobbyDialogImpl.data,
      qt_meta_data_gameLobbyDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gameLobbyDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameLobbyDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gameLobbyDialogImpl.stringdata))
        return static_cast<void*>(const_cast< gameLobbyDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::gameLobbyDialog"))
        return static_cast< Ui::gameLobbyDialog*>(const_cast< gameLobbyDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int gameLobbyDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 77;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
