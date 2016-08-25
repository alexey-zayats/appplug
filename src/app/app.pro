
TEMPLATE = app
TARGET = ../../bin/appplug

macx:CONFIG -= app_bundle

LIBS += -L../../lib
LIBS += -lcore

SOURCES += \
	main.cpp \

INCLUDEPATH = ../libs
