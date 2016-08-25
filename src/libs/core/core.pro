TEMPLATE = lib
DESTDIR = ../../../lib
TARGET = core

HEADERS = \
	plugin.h \
	pluginmanager.h \

SOURCES = \
	pluginmanager.cpp \

CONFIG += shared

DEFINES += CORE_LIBRARY

