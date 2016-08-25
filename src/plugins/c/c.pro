TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname

TARGET = ../../../plugins/c
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += c.h
SOURCES += c.cpp
