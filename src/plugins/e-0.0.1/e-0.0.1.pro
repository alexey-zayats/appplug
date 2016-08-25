TEMPLATE = lib
CONFIG += shared
CONFIG += plugin plugin_with_soname
TARGET = ../../../plugins/e-0.0.1
INCLUDEPATH += . ../../libs

LIBS += -L../../../lib
LIBS += -lcore

# Input
HEADERS += e.h
SOURCES += e.cpp
