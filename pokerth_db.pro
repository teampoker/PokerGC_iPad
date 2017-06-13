# QMake pro-file for PokerTH db library

isEmpty( PREFIX ){
	PREFIX =/usr
}

TEMPLATE = lib
CODECFORSRC = UTF-8

CONFIG += staticlib thread exceptions rtti stl warn_on
UI_DIR = uics
TARGET = lib/pokerth_db
QMAKE_CLEAN += ./lib/libpokerth_db.a
MOC_DIR = mocs
OBJECTS_DIR = obj
DEFINES += ENABLE_IPV6 TIXML_USE_STL
QT -= core gui
#PRECOMPILED_HEADER = src/pch_lib.h

INCLUDEPATH += . \
		src

DEPENDPATH += . \
		src

# Input
HEADERS += \
		src/db/serverdbcallback.h \
		src/db/serverdbfactory.h \
		src/db/serverdbinterface.h \
		src/db/serverdbgeneric.h \
		src/db/serverdbfactorygeneric.h \
		src/db/serverdbnoaction.h

SOURCES += \
		src/db/common/serverdbcallback.cpp \
		src/db/common/serverdbfactory.cpp \
		src/db/common/serverdbinterface.cpp \
		src/db/common/serverdbgeneric.cpp \
		src/db/common/serverdbfactorygeneric.cpp \
		src/db/common/serverdbnoaction.cpp

ios{
	CONFIG += qtquickcompiler
	QMAKE_IOS_DEPLOYMENT_TARGET=8.0
	QMAKE_IOS_TARGETED_DEVICE_FAMILY=1,2
	INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/prefix/include
}