TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname

TARGET = ../../../plugins/a
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += a.h
SOURCES += a.cpp
