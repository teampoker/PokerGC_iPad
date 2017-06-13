# QMake pro-file for PokerTH game

# Hack around https://bugreports.qt-project.org/browse/QTBUG-22829
QMAKE_MOC = $$QMAKE_MOC -DBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

isEmpty( PREFIX ){
	PREFIX =/usr
}

TEMPLATE = app
CODECFORSRC = UTF-8
CONFIG += qt \
	thread \
	embed_manifest_exe \
	exceptions \
	rtti \
	stl \
	warn_on
include(src/third_party/qtsingleapplication/qtsingleapplication.pri)
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
UI_DIR = uics
MOC_DIR = mocs
OBJECTS_DIR = obj
DEFINES += ENABLE_IPV6 TIXML_USE_STL BOOST_FILESYSTEM_DEPRECATED
DEFINES += PREFIX=\"$${PREFIX}\"
TARGET = pokerth

# PRECOMPILED_HEADER = src/pch_game.h

android{
    RESOURCES = src/gui/qt/resources/pokerth_android.qrc
}
!android{
    RESOURCES = src/gui/qt/resources/pokerth.qrc
}

INCLUDEPATH += . \
	src \
	src/engine \
	src/gui \
	src/net \
	src/engine/local_engine \
	src/engine/network_engine \
	src/config \
	src/gui/qt \
	src/gui/qt/connecttoserverdialog \
	src/core \
	src/gui/qt/sound \
	src/gui/qt/qttools \
	src/gui/qt/chattools \
	src/gui/qt/qttools/qthelper \
	src/gui/qt/gametable \
	src/gui/qt/gametable/startsplash \
	src/gui/qt/gametable/log \
	src/gui/qt/aboutpokerth \
	src/gui/qt/createnetworkgamedialog \
	src/gui/qt/createinternetgamedialog \
	src/gui/qt/joinnetworkgamedialog \
	src/gui/qt/newlocalgamedialog \
	src/gui/qt/settingsdialog \
	src/gui/qt/settingsdialog/selectavatardialog \
	src/gui/qt/settingsdialog/manualblindsorderdialog \
	src/gui/qt/startnetworkgamedialog \
	src/gui/qt/startwindow \
	src/gui/qt/serverlistdialog \
	src/gui/qt/styles \
	src/gui/qt/changecontentdialog \
	src/gui/qt/changecompleteblindsdialog \
	src/gui/qt/internetgamelogindialog \
	src/gui/qt/mymessagedialog \
	src/gui/qt/gamelobbydialog \
	src/gui/qt/timeoutmsgbox \
	src/gui/qt/logfiledialog \
	src/gui/qt/mymessagebox

DEPENDPATH += . \
	src \
	src/config \
	src/core \
	src/engine \
	src/gui \
	src/net \
	src/core/common \
	src/engine/local_engine \
	src/engine/network_engine \
	src/gui/qt \
	src/net/common \
	src/gui/qt/sound \
	src/gui/qt/chattools \
	src/gui/qt/gametable \
	src/gui/qt/gametable/startsplash \
	src/gui/qt/gametable/log \
	src/gui/qt/aboutpokerth \
	src/gui/qt/connecttoserverdialog \
	src/gui/qt/createinternetgamedialog \
	src/gui/qt/createnetworkgamedialog \
	src/gui/qt/joinnetworkgamedialog \
	src/gui/qt/qttools \
	src/gui/qt/qttools/qthelper \
	src/gui/qt/newlocalgamedialog \
	src/gui/qt/settingsdialog \
	src/gui/qt/settingsdialog/selectavatardialog \
	src/gui/qt/settingsdialog/manualblindsorderdialog \
	src/gui/qt/startnetworkgamedialog \
	src/gui/qt/startwindow \
	src/gui/qt/serverlistdialog \
	src/gui/qt/styles \
	src/gui/qt/changecontentdialog \
	src/gui/qt/internetgamelogindialog \
	src/gui/qt/changecompleteblindsdialog \
	src/gui/qt/mymessagedialog \
	src/gui/qt/gamelobbydialog \
	src/gui/qt/timeoutmsgbox \
	src/gui/qt/logfiledialog \
	src/gui/qt/mymessagebox

# Input
HEADERS += src/engine/game.h \
	src/session.h \
	src/playerdata.h \
	src/gamedata.h \
	src/config/configfile.h \
	src/core/thread.h \
	src/core/loghelper.h \
	src/engine/boardinterface.h \
	src/engine/enginefactory.h \
	src/engine/handinterface.h \
	src/engine/playerinterface.h \
	src/engine/berointerface.h \
	src/gui/guiinterface.h \
	src/net/clientcallback.h \
	src/net/clientcontext.h \
	src/net/clientexception.h \
	src/net/clientstate.h \
	src/net/clientthread.h \
	src/net/genericsocket.h \
	src/net/netpacket.h \
	src/net/senderhelper.h \
	src/net/serveraccepthelper.h \
	src/net/serverlobbythread.h \
	src/net/socket_helper.h \
	src/net/socket_msg.h \
	src/net/socket_startup.h \
	src/net/net_helper.h \
	src/engine/local_engine/cardsvalue.h \
	src/engine/local_engine/localboard.h \
	src/engine/local_engine/localenginefactory.h \
	src/engine/local_engine/localhand.h \
	src/engine/local_engine/localplayer.h \
	src/engine/local_engine/localberopreflop.h \
	src/engine/local_engine/localberoflop.h \
	src/engine/local_engine/localberoturn.h \
	src/engine/local_engine/localberoriver.h \
	src/engine/local_engine/localberopostriver.h \
	src/engine/local_engine/tools.h \
	src/engine/local_engine/localbero.h \
	src/engine/network_engine/clientboard.h \
	src/engine/network_engine/clientenginefactory.h \
	src/engine/network_engine/clienthand.h \
	src/engine/network_engine/clientplayer.h \
	src/engine/network_engine/clientbero.h \
	src/gui/qt/chattools/chattools.h \
	src/gui/qt/gametable/gametableimpl.h \
	src/gui/qt/gametable/mycardspixmaplabel.h \
	src/gui/qt/gametable/mysetlabel.h \
	src/gui/qt/gametable/myactionbutton.h \
	src/gui/qt/gametable/mystatuslabel.h \
	src/gui/qt/gametable/myavatarlabel.h \
	src/gui/qt/gametable/myrighttabwidget.h \
	src/gui/qt/gametable/mylefttabwidget.h \
	src/gui/qt/gametable/startsplash/startsplash.h \
	src/gui/qt/gametable/log/guilog.h \
	src/gui/qt/guiwrapper.h \
	src/gui/qt/aboutpokerth/aboutpokerthimpl.h \
	src/gui/qt/connecttoserverdialog/connecttoserverdialogimpl.h \
	src/gui/qt/createnetworkgamedialog/createnetworkgamedialogimpl.h \
	src/gui/qt/createinternetgamedialog/createinternetgamedialogimpl.h \
	src/gui/qt/joinnetworkgamedialog/joinnetworkgamedialogimpl.h \
	src/gui/qt/newlocalgamedialog/newgamedialogimpl.h \
	src/gui/qt/settingsdialog/settingsdialogimpl.h \
	src/gui/qt/settingsdialog/myavatarbutton.h \
	src/gui/qt/settingsdialog/myhpavatarbutton.h \
	src/gui/qt/settingsdialog/selectavatardialog/selectavatardialogimpl.h \
	src/gui/qt/settingsdialog/selectavatardialog/myavatarlistitem.h \
	src/gui/qt/settingsdialog/manualblindsorderdialog/manualblindsorderdialogimpl.h \
	src/gui/qt/startnetworkgamedialog/startnetworkgamedialogimpl.h \
	src/gui/qt/startwindow/startwindowimpl.h \
	src/gui/qt/styles/gametablestylereader.h \
	src/gui/qt/styles/carddeckstylereader.h \
	src/gui/qt/changecontentdialog/changecontentdialogimpl.h \
	src/gui/qt/changecompleteblindsdialog/changecompleteblindsdialogimpl.h \
	src/gui/qt/gamelobbydialog/gamelobbydialogimpl.h \
	src/gui/qt/gamelobbydialog/mygamelisttreewidget.h \
	src/gui/qt/timeoutmsgbox/timeoutmsgboximpl.h \
	src/gui/qt/mymessagedialog/mymessagedialogimpl.h \
	src/gui/qttoolsinterface.h \
	src/gui/qt/qttools/qttoolswrapper.h \
	src/gui/qt/qttools/qthelper/qthelper.h \
	src/gui/generic/serverguiwrapper.h \
	src/gui/qt/gametable/mychancelabel.h \
	src/gui/qt/serverlistdialog/serverlistdialogimpl.h \
	src/gui/qt/gametable/mytimeoutlabel.h \
	src/gui/qt/gametable/mynamelabel.h \
	src/gui/qt/settingsdialog/mystylelistitem.h \
	src/gui/qt/gamelobbydialog/mygamelistsortfilterproxymodel.h \
	src/gui/qt/internetgamelogindialog/internetgamelogindialogimpl.h \
	src/engine/local_engine/replay.h \
	src/gui/qt/gamelobbydialog/mynicklistsortfilterproxymodel.h \
	src/gui/qt/gametable/myslider.h \
	src/gui/qt/gametable/mycashlabel.h \
	src/gui/qt/sound/soundevents.h \
	src/gui/qt/mymessagebox/mymessagebox.h \
	src/gui/qt/logfiledialog/logfiledialog.h \
	src/tinyxml/tinystr.h \
	src/tinyxml/tinyxml.h

!gui_800x480 {
	FORMS += src/gui/qt/gametable.ui \
	src/gui/qt/aboutpokerth.ui \
	src/gui/qt/connecttoserverdialog.ui \
	src/gui/qt/createnetworkgamedialog.ui \
	src/gui/qt/createinternetgamedialog.ui \
	src/gui/qt/joinnetworkgamedialog.ui \
	src/gui/qt/newgamedialog.ui \
	src/gui/qt/settingsdialog.ui \
	src/gui/qt/selectavatardialog.ui \
	src/gui/qt/startnetworkgamedialog.ui \
	src/gui/qt/startwindow.ui \
	src/gui/qt/changecompleteblindsdialog.ui \
	src/gui/qt/gamelobbydialog.ui \
	src/gui/qt/mymessagedialog.ui \
	src/gui/qt/manualblindsorderdialog.ui \
	src/gui/qt/serverlistdialog.ui \
	src/gui/qt/internetgamelogindialog.ui \
	src/gui/qt/logfiledialog.ui \
	src/gui/qt/changecontentdialog.ui
}

SOURCES += src/pokerth.cpp \
	src/gui/qt/chattools/chattools.cpp \
	src/gui/qt/guiwrapper.cpp \
	src/gui/qt/qttools/qttoolswrapper.cpp \
	src/gui/qt/qttools/qthelper/qthelper.cpp \
	src/gui/qt/gametable/gametableimpl.cpp \
	src/gui/qt/gametable/mycardspixmaplabel.cpp \
	src/gui/qt/gametable/mysetlabel.cpp \
	src/gui/qt/gametable/myactionbutton.cpp \
	src/gui/qt/gametable/mystatuslabel.cpp \
	src/gui/qt/gametable/myavatarlabel.cpp \
	src/gui/qt/gametable/myrighttabwidget.cpp \
	src/gui/qt/gametable/mylefttabwidget.cpp \
	src/gui/qt/gametable/startsplash/startsplash.cpp \
	src/gui/qt/gametable/log/guilog.cpp \
	src/gui/qt/aboutpokerth/aboutpokerthimpl.cpp \
	src/gui/qt/connecttoserverdialog/connecttoserverdialogimpl.cpp \
	src/gui/qt/createnetworkgamedialog/createnetworkgamedialogimpl.cpp \
	src/gui/qt/createinternetgamedialog/createinternetgamedialogimpl.cpp \
	src/gui/qt/joinnetworkgamedialog/joinnetworkgamedialogimpl.cpp \
	src/gui/qt/newlocalgamedialog/newgamedialogimpl.cpp \
	src/gui/qt/settingsdialog/settingsdialogimpl.cpp \
	src/gui/qt/settingsdialog/myavatarbutton.cpp \
	src/gui/qt/settingsdialog/myhpavatarbutton.cpp \
	src/gui/qt/settingsdialog/selectavatardialog/selectavatardialogimpl.cpp \
	src/gui/qt/settingsdialog/selectavatardialog/myavatarlistitem.cpp \
	src/gui/qt/settingsdialog/manualblindsorderdialog/manualblindsorderdialogimpl.cpp \
	src/gui/qt/startnetworkgamedialog/startnetworkgamedialogimpl.cpp \
	src/gui/qt/startwindow/startwindowimpl.cpp \
	src/gui/qt/styles/gametablestylereader.cpp \
	src/gui/qt/styles/carddeckstylereader.cpp \
	src/gui/qt/changecontentdialog/changecontentdialogimpl.cpp \
	src/gui/qt/changecompleteblindsdialog/changecompleteblindsdialogimpl.cpp \
	src/gui/qt/mymessagedialog/mymessagedialogimpl.cpp \
	src/gui/qt/gamelobbydialog/gamelobbydialogimpl.cpp \
	src/gui/qt/gamelobbydialog/mygamelisttreewidget.cpp \
	src/gui/qt/timeoutmsgbox/timeoutmsgboximpl.cpp \
	src/net/common/net_helper_client.cpp \
	src/core/common/loghelper_client.cpp \
	src/gui/qt/gametable/mychancelabel.cpp \
	src/gui/qt/serverlistdialog/serverlistdialogimpl.cpp \
	src/gui/qt/gametable/mytimeoutlabel.cpp \
	src/gui/qt/gametable/mynamelabel.cpp \
	src/gui/qt/settingsdialog/mystylelistitem.cpp \
	src/gui/qt/gamelobbydialog/mygamelistsortfilterproxymodel.cpp \
	src/gui/qt/internetgamelogindialog/internetgamelogindialogimpl.cpp \
	src/engine/local_engine/replay.cpp \
	src/gui/qt/gamelobbydialog/mynicklistsortfilterproxymodel.cpp \
	src/net/common/servermanagerfactoryclient.cpp \
	src/gui/qt/gametable/mycashlabel.cpp \
	src/gui/qt/sound/soundevents.cpp \
	src/gui/qt/mymessagebox/mymessagebox.cpp \
	src/gui/qt/logfiledialog/logfiledialog.cpp \
	src/tinyxml/tinystr.cpp \
	src/tinyxml/tinyxml.cpp \
	src/tinyxml/tinyxmlerror.cpp \
	src/tinyxml/tinyxmlparser.cpp

TRANSLATIONS = ts/pokerth_af.ts \
	ts/pokerth_bg.ts \
	ts/pokerth_zhcn.ts \
	ts/pokerth_ca.ts \
	ts/pokerth_cz.ts \
	ts/pokerth_dk.ts \
	ts/pokerth_nl.ts \
	ts/pokerth_fr.ts \
	ts/pokerth_fi.ts \
	ts/pokerth_de.ts \
	ts/pokerth_gd.ts \
	ts/pokerth_gl.ts \
	ts/pokerth_gr.ts \
	ts/pokerth_hu.ts \
	ts/pokerth_it.ts \
	ts/pokerth_jp.ts \
	ts/pokerth_lt.ts \
	ts/pokerth_no.ts \
	ts/pokerth_pl.ts \
	ts/pokerth_ptbr.ts \
	ts/pokerth_ptpt.ts \
	ts/pokerth_ru.ts \
	ts/pokerth_sk.ts \
	ts/pokerth_es.ts \
	ts/pokerth_sv.ts \
	ts/pokerth_ta.ts \
	ts/pokerth_tr.ts \
	ts/pokerth_vi.ts \
	ts/pokerth_START_HERE.ts




ios{
	CONFIG += qtquickcompiler
	QMAKE_IOS_DEPLOYMENT_TARGET=9.2
	QMAKE_IOS_TARGETED_DEVICE_FAMILY=1,2

INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/build-protobuf/protobuf-master/include
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL_mixer
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL/include
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/tinyxml
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/openssl/include
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/libgsasl/cmoss-RETIRED/tmp/build/ios/iPhoneOS-V7/include
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/libgsasl/cmoss-RETIRED/tmp/build/ios/iPhoneOS-V7-arm64/include
//INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/curl/include-32
//INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/curl/include-64
//LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/curl/lib
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/curlProva/curl-7.47.1/build
INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/curlProva/curl-7.47.1/include/
LIBPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/curlProva/curl-7.47.1/build
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/build-protobuf/protobuf-master/lib
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/openssl/lib/iOS
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL_mixer
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/libgsasl/cmoss-RETIRED/bin/ios//lib

#path for the pokerth db, lib, protocol
LIBPATH += /Users/espir/Desktop/development/pokerth/PokerTH-1.1-src_Client_prova-iOS_Per_IPAD2/lib

LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL/lib/libSDL2.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL_mixer/lib/libSDL2_mixer.a

LIBS += -lpokerth_lib \
-lpokerth_db \
-lpokerth_protocol \
-lcurl \
-lprotobuf \
-lssl \
-lsqlite3 \
-lz \
-lcrypto \
-lgsasl

# BOOST link frameworks
#LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/framework/boost.framework


#coremotion and gamecontroller
LIBS += /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/Frameworks/GameController.framework
LIBS += /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/Frameworks/CoreMotion.framework

LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_thread.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_filesystem.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_regex.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_random.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_system.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost_iostreams.a
LIBS += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib/libboost.a

LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/zlib/ios/prefix/iphone-build/lib/
INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/zlib/ios/prefix/iphone-build/include

INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/prefix/include
LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/build/genLib
INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/framework/boost.framework/Versions/A/Headers

#INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/downBin2/ofxiOSBoost/libs/boost/include
#LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/downBin2/ofxiOSBoost/libs/boost/ios

	
}

gui_800x480 {

	DEFINES += GUI_800x480
	INCLUDEPATH +=  src/gui/qt/gui_800x480/
	DEPENDPATH += src/gui/qt/gui_800x480/
	FORMS +=  src/gui/qt/gui_800x480/startwindow_800x480.ui \
		src/gui/qt/gui_800x480/gametable_800x480.ui \
		src/gui/qt/gui_800x480/aboutpokerth_800x480.ui \
		src/gui/qt/gui_800x480/connecttoserverdialog_800x480.ui \
		src/gui/qt/gui_800x480/createnetworkgamedialog_800x480.ui \
		src/gui/qt/gui_800x480/createinternetgamedialog_800x480.ui \
		src/gui/qt/gui_800x480/joinnetworkgamedialog_800x480.ui \
		src/gui/qt/gui_800x480/newgamedialog_800x480.ui \
		src/gui/qt/gui_800x480/settingsdialog_800x480.ui \
		src/gui/qt/gui_800x480/selectavatardialog_800x480.ui \
		src/gui/qt/gui_800x480/startnetworkgamedialog_800x480.ui \
		src/gui/qt/gui_800x480/changecompleteblindsdialog_800x480.ui \
		src/gui/qt/gui_800x480/gamelobbydialog_800x480.ui \
		src/gui/qt/gui_800x480/mymessagedialog_800x480.ui \
		src/gui/qt/gui_800x480/manualblindsorderdialog_800x480.ui \
		src/gui/qt/gui_800x480/serverlistdialog_800x480.ui \
		src/gui/qt/gui_800x480/internetgamelogindialog_800x480.ui \
		src/gui/qt/gui_800x480/changecontentdialog_800x480.ui \
		src/gui/qt/gui_800x480/logfiledialog_800x480.ui \
		src/gui/qt/gui_800x480/tabs_800x480.ui
}


