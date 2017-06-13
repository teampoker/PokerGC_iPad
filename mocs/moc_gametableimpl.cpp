/****************************************************************************
** Meta object code from reading C++ file 'gametableimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/gametable/gametableimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gametableimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gameTableImpl_t {
    QByteArrayData data[220];
    char stringdata[3972];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameTableImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameTableImpl_t qt_meta_stringdata_gameTableImpl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gameTableImpl"
QT_MOC_LITERAL(1, 14, 13), // "signalInitGui"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "speed"
QT_MOC_LITERAL(4, 35, 22), // "signalShowClientDialog"
QT_MOC_LITERAL(5, 58, 16), // "signalRefreshSet"
QT_MOC_LITERAL(6, 75, 17), // "signalRefreshCash"
QT_MOC_LITERAL(7, 93, 19), // "signalRefreshAction"
QT_MOC_LITERAL(8, 113, 25), // "signalRefreshChangePlayer"
QT_MOC_LITERAL(9, 139, 16), // "signalRefreshPot"
QT_MOC_LITERAL(10, 156, 21), // "signalRefreshGroupbox"
QT_MOC_LITERAL(11, 178, 16), // "signalRefreshAll"
QT_MOC_LITERAL(12, 195, 23), // "signalRefreshPlayerName"
QT_MOC_LITERAL(13, 219, 19), // "signalRefreshButton"
QT_MOC_LITERAL(14, 239, 23), // "signalRefreshGameLabels"
QT_MOC_LITERAL(15, 263, 30), // "signalRefreshSpectatorsDisplay"
QT_MOC_LITERAL(16, 294, 21), // "signalSetPlayerAvatar"
QT_MOC_LITERAL(17, 316, 19), // "signalGuiUpdateDone"
QT_MOC_LITERAL(18, 336, 16), // "signalMeInAction"
QT_MOC_LITERAL(19, 353, 26), // "signalUpdateMyButtonsState"
QT_MOC_LITERAL(20, 380, 22), // "signalDisableMyButtons"
QT_MOC_LITERAL(21, 403, 27), // "signalStartTimeoutAnimation"
QT_MOC_LITERAL(22, 431, 8), // "playerId"
QT_MOC_LITERAL(23, 440, 10), // "timeoutSec"
QT_MOC_LITERAL(24, 451, 26), // "signalStopTimeoutAnimation"
QT_MOC_LITERAL(25, 478, 19), // "signalDealBeRoCards"
QT_MOC_LITERAL(26, 498, 8), // "myBeRoID"
QT_MOC_LITERAL(27, 507, 19), // "signalDealHoleCards"
QT_MOC_LITERAL(28, 527, 20), // "signalDealFlopCards0"
QT_MOC_LITERAL(29, 548, 20), // "signalDealTurnCards0"
QT_MOC_LITERAL(30, 569, 21), // "signalDealRiverCards0"
QT_MOC_LITERAL(31, 591, 25), // "signalNextPlayerAnimation"
QT_MOC_LITERAL(32, 617, 20), // "signalBeRoAnimation2"
QT_MOC_LITERAL(33, 638, 23), // "signalPreflopAnimation1"
QT_MOC_LITERAL(34, 662, 23), // "signalPreflopAnimation2"
QT_MOC_LITERAL(35, 686, 20), // "signalFlopAnimation1"
QT_MOC_LITERAL(36, 707, 20), // "signalFlopAnimation2"
QT_MOC_LITERAL(37, 728, 20), // "signalTurnAnimation1"
QT_MOC_LITERAL(38, 749, 20), // "signalTurnAnimation2"
QT_MOC_LITERAL(39, 770, 21), // "signalRiverAnimation1"
QT_MOC_LITERAL(40, 792, 21), // "signalRiverAnimation2"
QT_MOC_LITERAL(41, 814, 25), // "signalPostRiverAnimation1"
QT_MOC_LITERAL(42, 840, 28), // "signalPostRiverRunAnimation1"
QT_MOC_LITERAL(43, 869, 24), // "signalPostRiverShowCards"
QT_MOC_LITERAL(44, 894, 24), // "signalFlipHolecardsAllIn"
QT_MOC_LITERAL(45, 919, 23), // "signalNextRoundCleanGui"
QT_MOC_LITERAL(46, 943, 21), // "signalStartVoteOnKick"
QT_MOC_LITERAL(47, 965, 19), // "voteStarterPlayerId"
QT_MOC_LITERAL(48, 985, 20), // "numVotesNeededToKick"
QT_MOC_LITERAL(49, 1006, 34), // "signalChangeVoteOnKickButtons..."
QT_MOC_LITERAL(50, 1041, 8), // "showHide"
QT_MOC_LITERAL(51, 1050, 19), // "signalEndVoteOnKick"
QT_MOC_LITERAL(52, 1070, 25), // "signalNetClientPlayerLeft"
QT_MOC_LITERAL(53, 1096, 28), // "signalNetClientSpectatorLeft"
QT_MOC_LITERAL(54, 1125, 30), // "signalNetClientSpectatorJoined"
QT_MOC_LITERAL(55, 1156, 25), // "signalNetClientPingUpdate"
QT_MOC_LITERAL(56, 1182, 7), // "minPing"
QT_MOC_LITERAL(57, 1190, 7), // "avgPing"
QT_MOC_LITERAL(58, 1198, 7), // "maxPing"
QT_MOC_LITERAL(59, 1206, 7), // "initGui"
QT_MOC_LITERAL(60, 1214, 10), // "refreshSet"
QT_MOC_LITERAL(61, 1225, 11), // "refreshCash"
QT_MOC_LITERAL(62, 1237, 13), // "refreshAction"
QT_MOC_LITERAL(63, 1251, 19), // "refreshChangePlayer"
QT_MOC_LITERAL(64, 1271, 10), // "refreshPot"
QT_MOC_LITERAL(65, 1282, 15), // "refreshGroupbox"
QT_MOC_LITERAL(66, 1298, 10), // "refreshAll"
QT_MOC_LITERAL(67, 1309, 17), // "refreshPlayerName"
QT_MOC_LITERAL(68, 1327, 17), // "refreshGameLabels"
QT_MOC_LITERAL(69, 1345, 13), // "refreshButton"
QT_MOC_LITERAL(70, 1359, 19), // "refreshPlayerAvatar"
QT_MOC_LITERAL(71, 1379, 32), // "refreshActionButtonFKeyIndicator"
QT_MOC_LITERAL(72, 1412, 15), // "setPlayerAvatar"
QT_MOC_LITERAL(73, 1428, 4), // "myID"
QT_MOC_LITERAL(74, 1433, 8), // "myAvatar"
QT_MOC_LITERAL(75, 1442, 19), // "getCurrentSeatState"
QT_MOC_LITERAL(76, 1462, 9), // "SeatState"
QT_MOC_LITERAL(77, 1472, 34), // "boost::shared_ptr<PlayerInter..."
QT_MOC_LITERAL(78, 1507, 13), // "guiUpdateDone"
QT_MOC_LITERAL(79, 1521, 20), // "waitForGuiUpdateDone"
QT_MOC_LITERAL(80, 1542, 13), // "dealHoleCards"
QT_MOC_LITERAL(81, 1556, 16), // "provideMyActions"
QT_MOC_LITERAL(82, 1573, 4), // "mode"
QT_MOC_LITERAL(83, 1578, 10), // "meInAction"
QT_MOC_LITERAL(84, 1589, 16), // "disableMyButtons"
QT_MOC_LITERAL(85, 1606, 21), // "startTimeoutAnimation"
QT_MOC_LITERAL(86, 1628, 9), // "timoutSec"
QT_MOC_LITERAL(87, 1638, 20), // "stopTimeoutAnimation"
QT_MOC_LITERAL(88, 1659, 12), // "setGameSpeed"
QT_MOC_LITERAL(89, 1672, 8), // "theValue"
QT_MOC_LITERAL(90, 1681, 18), // "callSettingsDialog"
QT_MOC_LITERAL(91, 1700, 13), // "applySettings"
QT_MOC_LITERAL(92, 1714, 19), // "settingsDialogImpl*"
QT_MOC_LITERAL(93, 1734, 25), // "pushButtonBetRaiseClicked"
QT_MOC_LITERAL(94, 1760, 7), // "checked"
QT_MOC_LITERAL(95, 1768, 26), // "pushButtonCallCheckClicked"
QT_MOC_LITERAL(96, 1795, 21), // "pushButtonFoldClicked"
QT_MOC_LITERAL(97, 1817, 22), // "pushButtonAllInClicked"
QT_MOC_LITERAL(98, 1840, 11), // "myCallCheck"
QT_MOC_LITERAL(99, 1852, 6), // "myFold"
QT_MOC_LITERAL(100, 1859, 7), // "myCheck"
QT_MOC_LITERAL(101, 1867, 15), // "getMyCallAmount"
QT_MOC_LITERAL(102, 1883, 26), // "getBetRaisePushButtonValue"
QT_MOC_LITERAL(103, 1910, 14), // "getMyBetAmount"
QT_MOC_LITERAL(104, 1925, 6), // "myCall"
QT_MOC_LITERAL(105, 1932, 5), // "mySet"
QT_MOC_LITERAL(106, 1938, 7), // "myAllIn"
QT_MOC_LITERAL(107, 1946, 12), // "myActionDone"
QT_MOC_LITERAL(108, 1959, 13), // "dealBeRoCards"
QT_MOC_LITERAL(109, 1973, 14), // "dealFlopCards0"
QT_MOC_LITERAL(110, 1988, 14), // "dealFlopCards1"
QT_MOC_LITERAL(111, 2003, 14), // "dealFlopCards2"
QT_MOC_LITERAL(112, 2018, 14), // "dealFlopCards3"
QT_MOC_LITERAL(113, 2033, 14), // "dealFlopCards4"
QT_MOC_LITERAL(114, 2048, 14), // "dealFlopCards5"
QT_MOC_LITERAL(115, 2063, 14), // "dealFlopCards6"
QT_MOC_LITERAL(116, 2078, 14), // "dealTurnCards0"
QT_MOC_LITERAL(117, 2093, 14), // "dealTurnCards1"
QT_MOC_LITERAL(118, 2108, 14), // "dealTurnCards2"
QT_MOC_LITERAL(119, 2123, 15), // "dealRiverCards0"
QT_MOC_LITERAL(120, 2139, 15), // "dealRiverCards1"
QT_MOC_LITERAL(121, 2155, 15), // "dealRiverCards2"
QT_MOC_LITERAL(122, 2171, 19), // "nextPlayerAnimation"
QT_MOC_LITERAL(123, 2191, 14), // "beRoAnimation2"
QT_MOC_LITERAL(124, 2206, 17), // "preflopAnimation1"
QT_MOC_LITERAL(125, 2224, 23), // "preflopAnimation1Action"
QT_MOC_LITERAL(126, 2248, 17), // "preflopAnimation2"
QT_MOC_LITERAL(127, 2266, 23), // "preflopAnimation2Action"
QT_MOC_LITERAL(128, 2290, 14), // "flopAnimation1"
QT_MOC_LITERAL(129, 2305, 20), // "flopAnimation1Action"
QT_MOC_LITERAL(130, 2326, 14), // "flopAnimation2"
QT_MOC_LITERAL(131, 2341, 20), // "flopAnimation2Action"
QT_MOC_LITERAL(132, 2362, 14), // "turnAnimation1"
QT_MOC_LITERAL(133, 2377, 20), // "turnAnimation1Action"
QT_MOC_LITERAL(134, 2398, 14), // "turnAnimation2"
QT_MOC_LITERAL(135, 2413, 20), // "turnAnimation2Action"
QT_MOC_LITERAL(136, 2434, 15), // "riverAnimation1"
QT_MOC_LITERAL(137, 2450, 21), // "riverAnimation1Action"
QT_MOC_LITERAL(138, 2472, 15), // "riverAnimation2"
QT_MOC_LITERAL(139, 2488, 21), // "riverAnimation2Action"
QT_MOC_LITERAL(140, 2510, 19), // "postRiverAnimation1"
QT_MOC_LITERAL(141, 2530, 25), // "postRiverAnimation1Action"
QT_MOC_LITERAL(142, 2556, 22), // "postRiverRunAnimation1"
QT_MOC_LITERAL(143, 2579, 22), // "postRiverRunAnimation2"
QT_MOC_LITERAL(144, 2602, 22), // "postRiverRunAnimation3"
QT_MOC_LITERAL(145, 2625, 22), // "postRiverRunAnimation4"
QT_MOC_LITERAL(146, 2648, 22), // "postRiverRunAnimation5"
QT_MOC_LITERAL(147, 2671, 22), // "postRiverRunAnimation6"
QT_MOC_LITERAL(148, 2694, 13), // "showHoleCards"
QT_MOC_LITERAL(149, 2708, 5), // "allIn"
QT_MOC_LITERAL(150, 2714, 18), // "refreshCardsChance"
QT_MOC_LITERAL(151, 2733, 9), // "GameState"
QT_MOC_LITERAL(152, 2743, 34), // "blinkingStartButtonAnimationA..."
QT_MOC_LITERAL(153, 2778, 18), // "flipHolecardsAllIn"
QT_MOC_LITERAL(154, 2797, 17), // "triggerVoteOnKick"
QT_MOC_LITERAL(155, 2815, 2), // "id"
QT_MOC_LITERAL(156, 2818, 16), // "handSwitchRounds"
QT_MOC_LITERAL(157, 2835, 12), // "startNewHand"
QT_MOC_LITERAL(158, 2848, 9), // "stopTimer"
QT_MOC_LITERAL(159, 2858, 17), // "nextRoundCleanGui"
QT_MOC_LITERAL(160, 2876, 18), // "breakButtonClicked"
QT_MOC_LITERAL(161, 2895, 13), // "keyPressEvent"
QT_MOC_LITERAL(162, 2909, 10), // "QKeyEvent*"
QT_MOC_LITERAL(163, 2920, 11), // "eventFilter"
QT_MOC_LITERAL(164, 2932, 3), // "obj"
QT_MOC_LITERAL(165, 2936, 7), // "QEvent*"
QT_MOC_LITERAL(166, 2944, 5), // "event"
QT_MOC_LITERAL(167, 2950, 16), // "switchChatWindow"
QT_MOC_LITERAL(168, 2967, 16), // "switchHelpWindow"
QT_MOC_LITERAL(169, 2984, 15), // "switchLogWindow"
QT_MOC_LITERAL(170, 3000, 16), // "switchAwayWindow"
QT_MOC_LITERAL(171, 3017, 18), // "switchChanceWindow"
QT_MOC_LITERAL(172, 3036, 16), // "switchFullscreen"
QT_MOC_LITERAL(173, 3053, 15), // "sendChatMessage"
QT_MOC_LITERAL(174, 3069, 20), // "checkChatInputLength"
QT_MOC_LITERAL(175, 3090, 15), // "tabSwitchAction"
QT_MOC_LITERAL(176, 3106, 23), // "leaveCurrentNetworkGame"
QT_MOC_LITERAL(177, 3130, 21), // "localGameModification"
QT_MOC_LITERAL(178, 3152, 23), // "networkGameModification"
QT_MOC_LITERAL(179, 3176, 18), // "mouseOverFlipCards"
QT_MOC_LITERAL(180, 3195, 5), // "front"
QT_MOC_LITERAL(181, 3201, 20), // "updateMyButtonsState"
QT_MOC_LITERAL(182, 3222, 16), // "uncheckMyButtons"
QT_MOC_LITERAL(183, 3239, 30), // "resetMyButtonsCheckStateMemory"
QT_MOC_LITERAL(184, 3270, 14), // "clearMyButtons"
QT_MOC_LITERAL(185, 3285, 18), // "myButtonsCheckable"
QT_MOC_LITERAL(186, 3304, 5), // "state"
QT_MOC_LITERAL(187, 3310, 17), // "changePlayingMode"
QT_MOC_LITERAL(188, 3328, 21), // "changeSpinBoxBetValue"
QT_MOC_LITERAL(189, 3350, 22), // "spinBoxBetValueChanged"
QT_MOC_LITERAL(190, 3373, 13), // "showMaximized"
QT_MOC_LITERAL(191, 3387, 14), // "closeGameTable"
QT_MOC_LITERAL(192, 3402, 15), // "startVoteOnKick"
QT_MOC_LITERAL(193, 3418, 28), // "changeVoteOnKickButtonsState"
QT_MOC_LITERAL(194, 3447, 13), // "endVoteOnKick"
QT_MOC_LITERAL(195, 3461, 13), // "voteOnKickYes"
QT_MOC_LITERAL(196, 3475, 12), // "voteOnKickNo"
QT_MOC_LITERAL(197, 3488, 22), // "startVoteOnKickTimeout"
QT_MOC_LITERAL(198, 3511, 21), // "stopVoteOnKickTimeout"
QT_MOC_LITERAL(199, 3533, 35), // "nextVoteOnKickTimeoutAnimatio..."
QT_MOC_LITERAL(200, 3569, 19), // "refreshVotesMonitor"
QT_MOC_LITERAL(201, 3589, 12), // "currentVotes"
QT_MOC_LITERAL(202, 3602, 21), // "refreshGameTableStyle"
QT_MOC_LITERAL(203, 3624, 21), // "saveGameTableGeometry"
QT_MOC_LITERAL(204, 3646, 24), // "restoreGameTableGeometry"
QT_MOC_LITERAL(205, 3671, 19), // "netClientPlayerLeft"
QT_MOC_LITERAL(206, 3691, 22), // "netClientSpectatorLeft"
QT_MOC_LITERAL(207, 3714, 24), // "netClientSpectatorJoined"
QT_MOC_LITERAL(208, 3739, 18), // "registeredUserMode"
QT_MOC_LITERAL(209, 3758, 13), // "guestUserMode"
QT_MOC_LITERAL(210, 3772, 21), // "showShowMyCardsButton"
QT_MOC_LITERAL(211, 3794, 21), // "sendShowMyCardsSignal"
QT_MOC_LITERAL(212, 3816, 17), // "closeMessageBoxes"
QT_MOC_LITERAL(213, 3834, 4), // "hide"
QT_MOC_LITERAL(214, 3839, 24), // "soundEvent_blindsWereSet"
QT_MOC_LITERAL(215, 3864, 25), // "enableCallCheckPushButton"
QT_MOC_LITERAL(216, 3890, 24), // "checkActionLabelPosition"
QT_MOC_LITERAL(217, 3915, 24), // "refreshSpectatorsDisplay"
QT_MOC_LITERAL(218, 3940, 10), // "pingUpdate"
QT_MOC_LITERAL(219, 3951, 20) // "getAndroidApiVersion"

    },
    "gameTableImpl\0signalInitGui\0\0speed\0"
    "signalShowClientDialog\0signalRefreshSet\0"
    "signalRefreshCash\0signalRefreshAction\0"
    "signalRefreshChangePlayer\0signalRefreshPot\0"
    "signalRefreshGroupbox\0signalRefreshAll\0"
    "signalRefreshPlayerName\0signalRefreshButton\0"
    "signalRefreshGameLabels\0"
    "signalRefreshSpectatorsDisplay\0"
    "signalSetPlayerAvatar\0signalGuiUpdateDone\0"
    "signalMeInAction\0signalUpdateMyButtonsState\0"
    "signalDisableMyButtons\0"
    "signalStartTimeoutAnimation\0playerId\0"
    "timeoutSec\0signalStopTimeoutAnimation\0"
    "signalDealBeRoCards\0myBeRoID\0"
    "signalDealHoleCards\0signalDealFlopCards0\0"
    "signalDealTurnCards0\0signalDealRiverCards0\0"
    "signalNextPlayerAnimation\0"
    "signalBeRoAnimation2\0signalPreflopAnimation1\0"
    "signalPreflopAnimation2\0signalFlopAnimation1\0"
    "signalFlopAnimation2\0signalTurnAnimation1\0"
    "signalTurnAnimation2\0signalRiverAnimation1\0"
    "signalRiverAnimation2\0signalPostRiverAnimation1\0"
    "signalPostRiverRunAnimation1\0"
    "signalPostRiverShowCards\0"
    "signalFlipHolecardsAllIn\0"
    "signalNextRoundCleanGui\0signalStartVoteOnKick\0"
    "voteStarterPlayerId\0numVotesNeededToKick\0"
    "signalChangeVoteOnKickButtonsState\0"
    "showHide\0signalEndVoteOnKick\0"
    "signalNetClientPlayerLeft\0"
    "signalNetClientSpectatorLeft\0"
    "signalNetClientSpectatorJoined\0"
    "signalNetClientPingUpdate\0minPing\0"
    "avgPing\0maxPing\0initGui\0refreshSet\0"
    "refreshCash\0refreshAction\0refreshChangePlayer\0"
    "refreshPot\0refreshGroupbox\0refreshAll\0"
    "refreshPlayerName\0refreshGameLabels\0"
    "refreshButton\0refreshPlayerAvatar\0"
    "refreshActionButtonFKeyIndicator\0"
    "setPlayerAvatar\0myID\0myAvatar\0"
    "getCurrentSeatState\0SeatState\0"
    "boost::shared_ptr<PlayerInterface>\0"
    "guiUpdateDone\0waitForGuiUpdateDone\0"
    "dealHoleCards\0provideMyActions\0mode\0"
    "meInAction\0disableMyButtons\0"
    "startTimeoutAnimation\0timoutSec\0"
    "stopTimeoutAnimation\0setGameSpeed\0"
    "theValue\0callSettingsDialog\0applySettings\0"
    "settingsDialogImpl*\0pushButtonBetRaiseClicked\0"
    "checked\0pushButtonCallCheckClicked\0"
    "pushButtonFoldClicked\0pushButtonAllInClicked\0"
    "myCallCheck\0myFold\0myCheck\0getMyCallAmount\0"
    "getBetRaisePushButtonValue\0getMyBetAmount\0"
    "myCall\0mySet\0myAllIn\0myActionDone\0"
    "dealBeRoCards\0dealFlopCards0\0"
    "dealFlopCards1\0dealFlopCards2\0"
    "dealFlopCards3\0dealFlopCards4\0"
    "dealFlopCards5\0dealFlopCards6\0"
    "dealTurnCards0\0dealTurnCards1\0"
    "dealTurnCards2\0dealRiverCards0\0"
    "dealRiverCards1\0dealRiverCards2\0"
    "nextPlayerAnimation\0beRoAnimation2\0"
    "preflopAnimation1\0preflopAnimation1Action\0"
    "preflopAnimation2\0preflopAnimation2Action\0"
    "flopAnimation1\0flopAnimation1Action\0"
    "flopAnimation2\0flopAnimation2Action\0"
    "turnAnimation1\0turnAnimation1Action\0"
    "turnAnimation2\0turnAnimation2Action\0"
    "riverAnimation1\0riverAnimation1Action\0"
    "riverAnimation2\0riverAnimation2Action\0"
    "postRiverAnimation1\0postRiverAnimation1Action\0"
    "postRiverRunAnimation1\0postRiverRunAnimation2\0"
    "postRiverRunAnimation3\0postRiverRunAnimation4\0"
    "postRiverRunAnimation5\0postRiverRunAnimation6\0"
    "showHoleCards\0allIn\0refreshCardsChance\0"
    "GameState\0blinkingStartButtonAnimationAction\0"
    "flipHolecardsAllIn\0triggerVoteOnKick\0"
    "id\0handSwitchRounds\0startNewHand\0"
    "stopTimer\0nextRoundCleanGui\0"
    "breakButtonClicked\0keyPressEvent\0"
    "QKeyEvent*\0eventFilter\0obj\0QEvent*\0"
    "event\0switchChatWindow\0switchHelpWindow\0"
    "switchLogWindow\0switchAwayWindow\0"
    "switchChanceWindow\0switchFullscreen\0"
    "sendChatMessage\0checkChatInputLength\0"
    "tabSwitchAction\0leaveCurrentNetworkGame\0"
    "localGameModification\0networkGameModification\0"
    "mouseOverFlipCards\0front\0updateMyButtonsState\0"
    "uncheckMyButtons\0resetMyButtonsCheckStateMemory\0"
    "clearMyButtons\0myButtonsCheckable\0"
    "state\0changePlayingMode\0changeSpinBoxBetValue\0"
    "spinBoxBetValueChanged\0showMaximized\0"
    "closeGameTable\0startVoteOnKick\0"
    "changeVoteOnKickButtonsState\0endVoteOnKick\0"
    "voteOnKickYes\0voteOnKickNo\0"
    "startVoteOnKickTimeout\0stopVoteOnKickTimeout\0"
    "nextVoteOnKickTimeoutAnimationFrame\0"
    "refreshVotesMonitor\0currentVotes\0"
    "refreshGameTableStyle\0saveGameTableGeometry\0"
    "restoreGameTableGeometry\0netClientPlayerLeft\0"
    "netClientSpectatorLeft\0netClientSpectatorJoined\0"
    "registeredUserMode\0guestUserMode\0"
    "showShowMyCardsButton\0sendShowMyCardsSignal\0"
    "closeMessageBoxes\0hide\0soundEvent_blindsWereSet\0"
    "enableCallCheckPushButton\0"
    "checkActionLabelPosition\0"
    "refreshSpectatorsDisplay\0pingUpdate\0"
    "getAndroidApiVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameTableImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     201,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      51,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1, 1019,    2, 0x06 /* Public */,
       4,    0, 1022,    2, 0x06 /* Public */,
       5,    0, 1023,    2, 0x06 /* Public */,
       6,    0, 1024,    2, 0x06 /* Public */,
       7,    2, 1025,    2, 0x06 /* Public */,
       7,    1, 1030,    2, 0x26 /* Public | MethodCloned */,
       7,    0, 1033,    2, 0x26 /* Public | MethodCloned */,
       8,    0, 1034,    2, 0x06 /* Public */,
       9,    0, 1035,    2, 0x06 /* Public */,
      10,    2, 1036,    2, 0x06 /* Public */,
      10,    1, 1041,    2, 0x26 /* Public | MethodCloned */,
      10,    0, 1044,    2, 0x26 /* Public | MethodCloned */,
      11,    0, 1045,    2, 0x06 /* Public */,
      12,    0, 1046,    2, 0x06 /* Public */,
      13,    0, 1047,    2, 0x06 /* Public */,
      14,    1, 1048,    2, 0x06 /* Public */,
      15,    0, 1051,    2, 0x06 /* Public */,
      16,    2, 1052,    2, 0x06 /* Public */,
      17,    0, 1057,    2, 0x06 /* Public */,
      18,    0, 1058,    2, 0x06 /* Public */,
      19,    0, 1059,    2, 0x06 /* Public */,
      20,    0, 1060,    2, 0x06 /* Public */,
      21,    2, 1061,    2, 0x06 /* Public */,
      24,    1, 1066,    2, 0x06 /* Public */,
      25,    1, 1069,    2, 0x06 /* Public */,
      27,    0, 1072,    2, 0x06 /* Public */,
      28,    0, 1073,    2, 0x06 /* Public */,
      29,    0, 1074,    2, 0x06 /* Public */,
      30,    0, 1075,    2, 0x06 /* Public */,
      31,    0, 1076,    2, 0x06 /* Public */,
      32,    1, 1077,    2, 0x06 /* Public */,
      33,    0, 1080,    2, 0x06 /* Public */,
      34,    0, 1081,    2, 0x06 /* Public */,
      35,    0, 1082,    2, 0x06 /* Public */,
      36,    0, 1083,    2, 0x06 /* Public */,
      37,    0, 1084,    2, 0x06 /* Public */,
      38,    0, 1085,    2, 0x06 /* Public */,
      39,    0, 1086,    2, 0x06 /* Public */,
      40,    0, 1087,    2, 0x06 /* Public */,
      41,    0, 1088,    2, 0x06 /* Public */,
      42,    0, 1089,    2, 0x06 /* Public */,
      43,    1, 1090,    2, 0x06 /* Public */,
      44,    0, 1093,    2, 0x06 /* Public */,
      45,    0, 1094,    2, 0x06 /* Public */,
      46,    4, 1095,    2, 0x06 /* Public */,
      49,    1, 1104,    2, 0x06 /* Public */,
      51,    0, 1107,    2, 0x06 /* Public */,
      52,    1, 1108,    2, 0x06 /* Public */,
      53,    1, 1111,    2, 0x06 /* Public */,
      54,    1, 1114,    2, 0x06 /* Public */,
      55,    3, 1117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      59,    1, 1124,    2, 0x0a /* Public */,
      60,    0, 1127,    2, 0x0a /* Public */,
      61,    0, 1128,    2, 0x0a /* Public */,
      62,    2, 1129,    2, 0x0a /* Public */,
      62,    1, 1134,    2, 0x2a /* Public | MethodCloned */,
      62,    0, 1137,    2, 0x2a /* Public | MethodCloned */,
      63,    0, 1138,    2, 0x0a /* Public */,
      64,    0, 1139,    2, 0x0a /* Public */,
      65,    2, 1140,    2, 0x0a /* Public */,
      65,    1, 1145,    2, 0x2a /* Public | MethodCloned */,
      65,    0, 1148,    2, 0x2a /* Public | MethodCloned */,
      66,    0, 1149,    2, 0x0a /* Public */,
      67,    0, 1150,    2, 0x0a /* Public */,
      68,    1, 1151,    2, 0x0a /* Public */,
      69,    0, 1154,    2, 0x0a /* Public */,
      70,    0, 1155,    2, 0x0a /* Public */,
      71,    1, 1156,    2, 0x0a /* Public */,
      71,    0, 1159,    2, 0x2a /* Public | MethodCloned */,
      72,    2, 1160,    2, 0x0a /* Public */,
      75,    1, 1165,    2, 0x0a /* Public */,
      78,    0, 1168,    2, 0x0a /* Public */,
      79,    0, 1169,    2, 0x0a /* Public */,
      80,    0, 1170,    2, 0x0a /* Public */,
      81,    1, 1171,    2, 0x0a /* Public */,
      81,    0, 1174,    2, 0x2a /* Public | MethodCloned */,
      83,    0, 1175,    2, 0x0a /* Public */,
      84,    0, 1176,    2, 0x0a /* Public */,
      85,    2, 1177,    2, 0x0a /* Public */,
      87,    1, 1182,    2, 0x0a /* Public */,
      88,    1, 1185,    2, 0x0a /* Public */,
      90,    0, 1188,    2, 0x0a /* Public */,
      91,    1, 1189,    2, 0x0a /* Public */,
      93,    1, 1192,    2, 0x0a /* Public */,
      95,    1, 1195,    2, 0x0a /* Public */,
      96,    1, 1198,    2, 0x0a /* Public */,
      97,    1, 1201,    2, 0x0a /* Public */,
      98,    0, 1204,    2, 0x0a /* Public */,
      99,    0, 1205,    2, 0x0a /* Public */,
     100,    0, 1206,    2, 0x0a /* Public */,
     101,    0, 1207,    2, 0x0a /* Public */,
     102,    0, 1208,    2, 0x0a /* Public */,
     103,    0, 1209,    2, 0x0a /* Public */,
     104,    0, 1210,    2, 0x0a /* Public */,
     105,    0, 1211,    2, 0x0a /* Public */,
     106,    0, 1212,    2, 0x0a /* Public */,
     107,    0, 1213,    2, 0x0a /* Public */,
     108,    1, 1214,    2, 0x0a /* Public */,
     109,    0, 1217,    2, 0x0a /* Public */,
     110,    0, 1218,    2, 0x0a /* Public */,
     111,    0, 1219,    2, 0x0a /* Public */,
     112,    0, 1220,    2, 0x0a /* Public */,
     113,    0, 1221,    2, 0x0a /* Public */,
     114,    0, 1222,    2, 0x0a /* Public */,
     115,    0, 1223,    2, 0x0a /* Public */,
     116,    0, 1224,    2, 0x0a /* Public */,
     117,    0, 1225,    2, 0x0a /* Public */,
     118,    0, 1226,    2, 0x0a /* Public */,
     119,    0, 1227,    2, 0x0a /* Public */,
     120,    0, 1228,    2, 0x0a /* Public */,
     121,    0, 1229,    2, 0x0a /* Public */,
     122,    0, 1230,    2, 0x0a /* Public */,
     123,    1, 1231,    2, 0x0a /* Public */,
     124,    0, 1234,    2, 0x0a /* Public */,
     125,    0, 1235,    2, 0x0a /* Public */,
     126,    0, 1236,    2, 0x0a /* Public */,
     127,    0, 1237,    2, 0x0a /* Public */,
     128,    0, 1238,    2, 0x0a /* Public */,
     129,    0, 1239,    2, 0x0a /* Public */,
     130,    0, 1240,    2, 0x0a /* Public */,
     131,    0, 1241,    2, 0x0a /* Public */,
     132,    0, 1242,    2, 0x0a /* Public */,
     133,    0, 1243,    2, 0x0a /* Public */,
     134,    0, 1244,    2, 0x0a /* Public */,
     135,    0, 1245,    2, 0x0a /* Public */,
     136,    0, 1246,    2, 0x0a /* Public */,
     137,    0, 1247,    2, 0x0a /* Public */,
     138,    0, 1248,    2, 0x0a /* Public */,
     139,    0, 1249,    2, 0x0a /* Public */,
     140,    0, 1250,    2, 0x0a /* Public */,
     141,    0, 1251,    2, 0x0a /* Public */,
     142,    0, 1252,    2, 0x0a /* Public */,
     143,    0, 1253,    2, 0x0a /* Public */,
     144,    0, 1254,    2, 0x0a /* Public */,
     145,    0, 1255,    2, 0x0a /* Public */,
     146,    0, 1256,    2, 0x0a /* Public */,
     147,    0, 1257,    2, 0x0a /* Public */,
     148,    2, 1258,    2, 0x0a /* Public */,
     148,    1, 1263,    2, 0x2a /* Public | MethodCloned */,
     150,    1, 1266,    2, 0x0a /* Public */,
     152,    0, 1269,    2, 0x0a /* Public */,
     153,    0, 1270,    2, 0x0a /* Public */,
     154,    1, 1271,    2, 0x0a /* Public */,
     156,    0, 1274,    2, 0x0a /* Public */,
     157,    0, 1275,    2, 0x0a /* Public */,
     158,    0, 1276,    2, 0x0a /* Public */,
     159,    0, 1277,    2, 0x0a /* Public */,
     160,    0, 1278,    2, 0x0a /* Public */,
     161,    1, 1279,    2, 0x0a /* Public */,
     163,    2, 1282,    2, 0x0a /* Public */,
     167,    0, 1287,    2, 0x0a /* Public */,
     168,    0, 1288,    2, 0x0a /* Public */,
     169,    0, 1289,    2, 0x0a /* Public */,
     170,    0, 1290,    2, 0x0a /* Public */,
     171,    0, 1291,    2, 0x0a /* Public */,
     172,    0, 1292,    2, 0x0a /* Public */,
     173,    0, 1293,    2, 0x0a /* Public */,
     174,    1, 1294,    2, 0x0a /* Public */,
     175,    0, 1297,    2, 0x0a /* Public */,
     176,    0, 1298,    2, 0x0a /* Public */,
     177,    0, 1299,    2, 0x0a /* Public */,
     178,    0, 1300,    2, 0x0a /* Public */,
     179,    1, 1301,    2, 0x0a /* Public */,
     181,    1, 1304,    2, 0x0a /* Public */,
     181,    0, 1307,    2, 0x2a /* Public | MethodCloned */,
     182,    0, 1308,    2, 0x0a /* Public */,
     183,    0, 1309,    2, 0x0a /* Public */,
     184,    0, 1310,    2, 0x0a /* Public */,
     185,    1, 1311,    2, 0x0a /* Public */,
     187,    0, 1314,    2, 0x0a /* Public */,
     188,    1, 1315,    2, 0x0a /* Public */,
     189,    1, 1318,    2, 0x0a /* Public */,
     190,    0, 1321,    2, 0x0a /* Public */,
     191,    0, 1322,    2, 0x0a /* Public */,
     192,    4, 1323,    2, 0x0a /* Public */,
     193,    1, 1332,    2, 0x0a /* Public */,
     194,    0, 1335,    2, 0x0a /* Public */,
     195,    0, 1336,    2, 0x0a /* Public */,
     196,    0, 1337,    2, 0x0a /* Public */,
     197,    0, 1338,    2, 0x0a /* Public */,
     198,    0, 1339,    2, 0x0a /* Public */,
     199,    0, 1340,    2, 0x0a /* Public */,
     200,    2, 1341,    2, 0x0a /* Public */,
     202,    0, 1346,    2, 0x0a /* Public */,
     203,    0, 1347,    2, 0x0a /* Public */,
     204,    0, 1348,    2, 0x0a /* Public */,
     205,    1, 1349,    2, 0x0a /* Public */,
     206,    1, 1352,    2, 0x0a /* Public */,
     207,    1, 1355,    2, 0x0a /* Public */,
     208,    0, 1358,    2, 0x0a /* Public */,
     209,    0, 1359,    2, 0x0a /* Public */,
     210,    0, 1360,    2, 0x0a /* Public */,
     211,    0, 1361,    2, 0x0a /* Public */,
     212,    0, 1362,    2, 0x0a /* Public */,
     213,    0, 1363,    2, 0x0a /* Public */,
     214,    1, 1364,    2, 0x0a /* Public */,
     215,    0, 1367,    2, 0x0a /* Public */,
     216,    0, 1368,    2, 0x0a /* Public */,
     217,    0, 1369,    2, 0x0a /* Public */,
     218,    3, 1370,    2, 0x0a /* Public */,
     219,    0, 1377,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::Int,   22,   47,   23,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   56,   57,   58,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   73,   74,
    0x80000000 | 76, 0x80000000 | 77,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   86,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 92,    2,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   22,  149,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, 0x80000000 | 151,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  155,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 162,    2,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 165,  164,  166,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  180,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  186,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::Int,   22,   47,   23,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  201,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,
    QMetaType::Int,

       0        // eod
};

void gameTableImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gameTableImpl *_t = static_cast<gameTableImpl *>(_o);
        switch (_id) {
        case 0: _t->signalInitGui((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalShowClientDialog(); break;
        case 2: _t->signalRefreshSet(); break;
        case 3: _t->signalRefreshCash(); break;
        case 4: _t->signalRefreshAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->signalRefreshAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->signalRefreshAction(); break;
        case 7: _t->signalRefreshChangePlayer(); break;
        case 8: _t->signalRefreshPot(); break;
        case 9: _t->signalRefreshGroupbox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->signalRefreshGroupbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->signalRefreshGroupbox(); break;
        case 12: _t->signalRefreshAll(); break;
        case 13: _t->signalRefreshPlayerName(); break;
        case 14: _t->signalRefreshButton(); break;
        case 15: _t->signalRefreshGameLabels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->signalRefreshSpectatorsDisplay(); break;
        case 17: _t->signalSetPlayerAvatar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->signalGuiUpdateDone(); break;
        case 19: _t->signalMeInAction(); break;
        case 20: _t->signalUpdateMyButtonsState(); break;
        case 21: _t->signalDisableMyButtons(); break;
        case 22: _t->signalStartTimeoutAnimation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->signalStopTimeoutAnimation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->signalDealBeRoCards((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->signalDealHoleCards(); break;
        case 26: _t->signalDealFlopCards0(); break;
        case 27: _t->signalDealTurnCards0(); break;
        case 28: _t->signalDealRiverCards0(); break;
        case 29: _t->signalNextPlayerAnimation(); break;
        case 30: _t->signalBeRoAnimation2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->signalPreflopAnimation1(); break;
        case 32: _t->signalPreflopAnimation2(); break;
        case 33: _t->signalFlopAnimation1(); break;
        case 34: _t->signalFlopAnimation2(); break;
        case 35: _t->signalTurnAnimation1(); break;
        case 36: _t->signalTurnAnimation2(); break;
        case 37: _t->signalRiverAnimation1(); break;
        case 38: _t->signalRiverAnimation2(); break;
        case 39: _t->signalPostRiverAnimation1(); break;
        case 40: _t->signalPostRiverRunAnimation1(); break;
        case 41: _t->signalPostRiverShowCards((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 42: _t->signalFlipHolecardsAllIn(); break;
        case 43: _t->signalNextRoundCleanGui(); break;
        case 44: _t->signalStartVoteOnKick((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 45: _t->signalChangeVoteOnKickButtonsState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->signalEndVoteOnKick(); break;
        case 47: _t->signalNetClientPlayerLeft((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 48: _t->signalNetClientSpectatorLeft((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 49: _t->signalNetClientSpectatorJoined((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 50: _t->signalNetClientPingUpdate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 51: _t->initGui((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->refreshSet(); break;
        case 53: _t->refreshCash(); break;
        case 54: _t->refreshAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->refreshAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->refreshAction(); break;
        case 57: _t->refreshChangePlayer(); break;
        case 58: _t->refreshPot(); break;
        case 59: _t->refreshGroupbox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->refreshGroupbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->refreshGroupbox(); break;
        case 62: _t->refreshAll(); break;
        case 63: _t->refreshPlayerName(); break;
        case 64: _t->refreshGameLabels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->refreshButton(); break;
        case 66: _t->refreshPlayerAvatar(); break;
        case 67: _t->refreshActionButtonFKeyIndicator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->refreshActionButtonFKeyIndicator(); break;
        case 69: _t->setPlayerAvatar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 70: { SeatState _r = _t->getCurrentSeatState((*reinterpret_cast< boost::shared_ptr<PlayerInterface>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SeatState*>(_a[0]) = _r; }  break;
        case 71: _t->guiUpdateDone(); break;
        case 72: _t->waitForGuiUpdateDone(); break;
        case 73: _t->dealHoleCards(); break;
        case 74: _t->provideMyActions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->provideMyActions(); break;
        case 76: _t->meInAction(); break;
        case 77: _t->disableMyButtons(); break;
        case 78: _t->startTimeoutAnimation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 79: _t->stopTimeoutAnimation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->setGameSpeed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 81: _t->callSettingsDialog(); break;
        case 82: _t->applySettings((*reinterpret_cast< settingsDialogImpl*(*)>(_a[1]))); break;
        case 83: _t->pushButtonBetRaiseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->pushButtonCallCheckClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->pushButtonFoldClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->pushButtonAllInClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->myCallCheck(); break;
        case 88: _t->myFold(); break;
        case 89: _t->myCheck(); break;
        case 90: { int _r = _t->getMyCallAmount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 91: { int _r = _t->getBetRaisePushButtonValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 92: { int _r = _t->getMyBetAmount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 93: _t->myCall(); break;
        case 94: _t->mySet(); break;
        case 95: _t->myAllIn(); break;
        case 96: _t->myActionDone(); break;
        case 97: _t->dealBeRoCards((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->dealFlopCards0(); break;
        case 99: _t->dealFlopCards1(); break;
        case 100: _t->dealFlopCards2(); break;
        case 101: _t->dealFlopCards3(); break;
        case 102: _t->dealFlopCards4(); break;
        case 103: _t->dealFlopCards5(); break;
        case 104: _t->dealFlopCards6(); break;
        case 105: _t->dealTurnCards0(); break;
        case 106: _t->dealTurnCards1(); break;
        case 107: _t->dealTurnCards2(); break;
        case 108: _t->dealRiverCards0(); break;
        case 109: _t->dealRiverCards1(); break;
        case 110: _t->dealRiverCards2(); break;
        case 111: _t->nextPlayerAnimation(); break;
        case 112: _t->beRoAnimation2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->preflopAnimation1(); break;
        case 114: _t->preflopAnimation1Action(); break;
        case 115: _t->preflopAnimation2(); break;
        case 116: _t->preflopAnimation2Action(); break;
        case 117: _t->flopAnimation1(); break;
        case 118: _t->flopAnimation1Action(); break;
        case 119: _t->flopAnimation2(); break;
        case 120: _t->flopAnimation2Action(); break;
        case 121: _t->turnAnimation1(); break;
        case 122: _t->turnAnimation1Action(); break;
        case 123: _t->turnAnimation2(); break;
        case 124: _t->turnAnimation2Action(); break;
        case 125: _t->riverAnimation1(); break;
        case 126: _t->riverAnimation1Action(); break;
        case 127: _t->riverAnimation2(); break;
        case 128: _t->riverAnimation2Action(); break;
        case 129: _t->postRiverAnimation1(); break;
        case 130: _t->postRiverAnimation1Action(); break;
        case 131: _t->postRiverRunAnimation1(); break;
        case 132: _t->postRiverRunAnimation2(); break;
        case 133: _t->postRiverRunAnimation3(); break;
        case 134: _t->postRiverRunAnimation4(); break;
        case 135: _t->postRiverRunAnimation5(); break;
        case 136: _t->postRiverRunAnimation6(); break;
        case 137: _t->showHoleCards((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 138: _t->showHoleCards((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 139: _t->refreshCardsChance((*reinterpret_cast< GameState(*)>(_a[1]))); break;
        case 140: _t->blinkingStartButtonAnimationAction(); break;
        case 141: _t->flipHolecardsAllIn(); break;
        case 142: _t->triggerVoteOnKick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: _t->handSwitchRounds(); break;
        case 144: _t->startNewHand(); break;
        case 145: _t->stopTimer(); break;
        case 146: _t->nextRoundCleanGui(); break;
        case 147: _t->breakButtonClicked(); break;
        case 148: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 149: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 150: _t->switchChatWindow(); break;
        case 151: _t->switchHelpWindow(); break;
        case 152: _t->switchLogWindow(); break;
        case 153: _t->switchAwayWindow(); break;
        case 154: _t->switchChanceWindow(); break;
        case 155: _t->switchFullscreen(); break;
        case 156: _t->sendChatMessage(); break;
        case 157: _t->checkChatInputLength((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 158: _t->tabSwitchAction(); break;
        case 159: _t->leaveCurrentNetworkGame(); break;
        case 160: _t->localGameModification(); break;
        case 161: _t->networkGameModification(); break;
        case 162: _t->mouseOverFlipCards((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 163: _t->updateMyButtonsState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 164: _t->updateMyButtonsState(); break;
        case 165: _t->uncheckMyButtons(); break;
        case 166: _t->resetMyButtonsCheckStateMemory(); break;
        case 167: _t->clearMyButtons(); break;
        case 168: _t->myButtonsCheckable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 169: _t->changePlayingMode(); break;
        case 170: _t->changeSpinBoxBetValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 171: _t->spinBoxBetValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 172: _t->showMaximized(); break;
        case 173: _t->closeGameTable(); break;
        case 174: _t->startVoteOnKick((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 175: _t->changeVoteOnKickButtonsState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 176: _t->endVoteOnKick(); break;
        case 177: _t->voteOnKickYes(); break;
        case 178: _t->voteOnKickNo(); break;
        case 179: _t->startVoteOnKickTimeout(); break;
        case 180: _t->stopVoteOnKickTimeout(); break;
        case 181: _t->nextVoteOnKickTimeoutAnimationFrame(); break;
        case 182: _t->refreshVotesMonitor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 183: _t->refreshGameTableStyle(); break;
        case 184: _t->saveGameTableGeometry(); break;
        case 185: _t->restoreGameTableGeometry(); break;
        case 186: _t->netClientPlayerLeft((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 187: _t->netClientSpectatorLeft((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 188: _t->netClientSpectatorJoined((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 189: _t->registeredUserMode(); break;
        case 190: _t->guestUserMode(); break;
        case 191: _t->showShowMyCardsButton(); break;
        case 192: _t->sendShowMyCardsSignal(); break;
        case 193: _t->closeMessageBoxes(); break;
        case 194: _t->hide(); break;
        case 195: _t->soundEvent_blindsWereSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 196: _t->enableCallCheckPushButton(); break;
        case 197: _t->checkActionLabelPosition(); break;
        case 198: _t->refreshSpectatorsDisplay(); break;
        case 199: _t->pingUpdate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 200: { int _r = _t->getAndroidApiVersion();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (gameTableImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalInitGui)) {
                *result = 0;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalShowClientDialog)) {
                *result = 1;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshSet)) {
                *result = 2;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshCash)) {
                *result = 3;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshAction)) {
                *result = 4;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshChangePlayer)) {
                *result = 7;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshPot)) {
                *result = 8;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshGroupbox)) {
                *result = 9;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshAll)) {
                *result = 12;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshPlayerName)) {
                *result = 13;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshButton)) {
                *result = 14;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshGameLabels)) {
                *result = 15;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRefreshSpectatorsDisplay)) {
                *result = 16;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalSetPlayerAvatar)) {
                *result = 17;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalGuiUpdateDone)) {
                *result = 18;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalMeInAction)) {
                *result = 19;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalUpdateMyButtonsState)) {
                *result = 20;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDisableMyButtons)) {
                *result = 21;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalStartTimeoutAnimation)) {
                *result = 22;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalStopTimeoutAnimation)) {
                *result = 23;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDealBeRoCards)) {
                *result = 24;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDealHoleCards)) {
                *result = 25;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDealFlopCards0)) {
                *result = 26;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDealTurnCards0)) {
                *result = 27;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalDealRiverCards0)) {
                *result = 28;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNextPlayerAnimation)) {
                *result = 29;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalBeRoAnimation2)) {
                *result = 30;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalPreflopAnimation1)) {
                *result = 31;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalPreflopAnimation2)) {
                *result = 32;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalFlopAnimation1)) {
                *result = 33;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalFlopAnimation2)) {
                *result = 34;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalTurnAnimation1)) {
                *result = 35;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalTurnAnimation2)) {
                *result = 36;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRiverAnimation1)) {
                *result = 37;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalRiverAnimation2)) {
                *result = 38;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalPostRiverAnimation1)) {
                *result = 39;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalPostRiverRunAnimation1)) {
                *result = 40;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalPostRiverShowCards)) {
                *result = 41;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalFlipHolecardsAllIn)) {
                *result = 42;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNextRoundCleanGui)) {
                *result = 43;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  , unsigned  , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalStartVoteOnKick)) {
                *result = 44;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalChangeVoteOnKickButtonsState)) {
                *result = 45;
            }
        }
        {
            typedef void (gameTableImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalEndVoteOnKick)) {
                *result = 46;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNetClientPlayerLeft)) {
                *result = 47;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNetClientSpectatorLeft)) {
                *result = 48;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNetClientSpectatorJoined)) {
                *result = 49;
            }
        }
        {
            typedef void (gameTableImpl::*_t)(unsigned  , unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameTableImpl::signalNetClientPingUpdate)) {
                *result = 50;
            }
        }
    }
}

const QMetaObject gameTableImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gameTableImpl.data,
      qt_meta_data_gameTableImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gameTableImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameTableImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gameTableImpl.stringdata))
        return static_cast<void*>(const_cast< gameTableImpl*>(this));
    if (!strcmp(_clname, "Ui::gameTable"))
        return static_cast< Ui::gameTable*>(const_cast< gameTableImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gameTableImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 201)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 201;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 201)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 201;
    }
    return _id;
}

// SIGNAL 0
void gameTableImpl::signalInitGui(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gameTableImpl::signalShowClientDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gameTableImpl::signalRefreshSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gameTableImpl::signalRefreshCash()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gameTableImpl::signalRefreshAction(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 7
void gameTableImpl::signalRefreshChangePlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void gameTableImpl::signalRefreshPot()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void gameTableImpl::signalRefreshGroupbox(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 12
void gameTableImpl::signalRefreshAll()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void gameTableImpl::signalRefreshPlayerName()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void gameTableImpl::signalRefreshButton()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void gameTableImpl::signalRefreshGameLabels(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void gameTableImpl::signalRefreshSpectatorsDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void gameTableImpl::signalSetPlayerAvatar(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void gameTableImpl::signalGuiUpdateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void gameTableImpl::signalMeInAction()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void gameTableImpl::signalUpdateMyButtonsState()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void gameTableImpl::signalDisableMyButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void gameTableImpl::signalStartTimeoutAnimation(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void gameTableImpl::signalStopTimeoutAnimation(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void gameTableImpl::signalDealBeRoCards(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void gameTableImpl::signalDealHoleCards()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void gameTableImpl::signalDealFlopCards0()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void gameTableImpl::signalDealTurnCards0()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}

// SIGNAL 28
void gameTableImpl::signalDealRiverCards0()
{
    QMetaObject::activate(this, &staticMetaObject, 28, Q_NULLPTR);
}

// SIGNAL 29
void gameTableImpl::signalNextPlayerAnimation()
{
    QMetaObject::activate(this, &staticMetaObject, 29, Q_NULLPTR);
}

// SIGNAL 30
void gameTableImpl::signalBeRoAnimation2(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void gameTableImpl::signalPreflopAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 31, Q_NULLPTR);
}

// SIGNAL 32
void gameTableImpl::signalPreflopAnimation2()
{
    QMetaObject::activate(this, &staticMetaObject, 32, Q_NULLPTR);
}

// SIGNAL 33
void gameTableImpl::signalFlopAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 33, Q_NULLPTR);
}

// SIGNAL 34
void gameTableImpl::signalFlopAnimation2()
{
    QMetaObject::activate(this, &staticMetaObject, 34, Q_NULLPTR);
}

// SIGNAL 35
void gameTableImpl::signalTurnAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 35, Q_NULLPTR);
}

// SIGNAL 36
void gameTableImpl::signalTurnAnimation2()
{
    QMetaObject::activate(this, &staticMetaObject, 36, Q_NULLPTR);
}

// SIGNAL 37
void gameTableImpl::signalRiverAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 37, Q_NULLPTR);
}

// SIGNAL 38
void gameTableImpl::signalRiverAnimation2()
{
    QMetaObject::activate(this, &staticMetaObject, 38, Q_NULLPTR);
}

// SIGNAL 39
void gameTableImpl::signalPostRiverAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 39, Q_NULLPTR);
}

// SIGNAL 40
void gameTableImpl::signalPostRiverRunAnimation1()
{
    QMetaObject::activate(this, &staticMetaObject, 40, Q_NULLPTR);
}

// SIGNAL 41
void gameTableImpl::signalPostRiverShowCards(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void gameTableImpl::signalFlipHolecardsAllIn()
{
    QMetaObject::activate(this, &staticMetaObject, 42, Q_NULLPTR);
}

// SIGNAL 43
void gameTableImpl::signalNextRoundCleanGui()
{
    QMetaObject::activate(this, &staticMetaObject, 43, Q_NULLPTR);
}

// SIGNAL 44
void gameTableImpl::signalStartVoteOnKick(unsigned  _t1, unsigned  _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void gameTableImpl::signalChangeVoteOnKickButtonsState(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void gameTableImpl::signalEndVoteOnKick()
{
    QMetaObject::activate(this, &staticMetaObject, 46, Q_NULLPTR);
}

// SIGNAL 47
void gameTableImpl::signalNetClientPlayerLeft(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void gameTableImpl::signalNetClientSpectatorLeft(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void gameTableImpl::signalNetClientSpectatorJoined(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void gameTableImpl::signalNetClientPingUpdate(unsigned  _t1, unsigned  _t2, unsigned  _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}
QT_END_MOC_NAMESPACE
