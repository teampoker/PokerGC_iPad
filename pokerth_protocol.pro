# QMake pro-file for PokerTH common library
TEMPLATE = lib
CODECFORSRC = UTF-8
CONFIG += staticlib \
	thread \
	exceptions \
	rtti \
	stl \
	warn_on
UI_DIR = uics
TARGET = lib/pokerth_protocol
QMAKE_CLEAN += ./lib/libpokerth_protocol.a
MOC_DIR = mocs
OBJECTS_DIR = obj
DEFINES += ENABLE_IPV6
QT -= core \
	gui
# PRECOMPILED_HEADER = src/pch_lib.h

INCLUDEPATH += . \
	src
DEPENDPATH += . \
	src

# Input

HEADERS += src/third_party/protobuf/pokerth.pb.h \
	src/third_party/protobuf/chatcleaner.pb.h
SOURCES += src/third_party/protobuf/pokerth.pb.cc \
	src/third_party/protobuf/chatcleaner.pb.cc

ios{
	CONFIG += qtquickcompiler
	QMAKE_IOS_DEPLOYMENT_TARGET=8.0
	QMAKE_IOS_TARGETED_DEVICE_FAMILY=1,2
	INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/boost/boost155/ios/prefix/include
	INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL/include
	INCLUDEPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL_mixer
	LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL/lib
	LIBPATH += /Users/espir/Desktop/development/pokerth/iOS_Libs/SDL/SDL_mixer/lib
	#INCLUDEPATH += /usr/local/lib
	INCLUDEPATH +=/Users/espir/Desktop/development/pokerth/iOS_Libs/build-protobuf/protobuf-master/include
}
