TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname

TARGET = ../../../plugins/f
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += f.h
SOURCES += f.cpp
