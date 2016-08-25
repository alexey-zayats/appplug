TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname

TARGET = ../../../plugins/d
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += d.h
SOURCES += d.cpp
