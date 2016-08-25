TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname

TARGET = ../../../plugins/b
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += b.h
SOURCES += b.cpp
