
SOURCES     =../jack_client.cpp \
../presetbox.cpp \
../vumeter.cpp \
#../volume_meter.cpp \
../osc.cpp \
../timebase_widget.cpp \
../metronom.cpp \
../audio_tools.cpp \
../midi_widgets.cpp \
../qvumeter.cpp \
../rhdz_meter.cpp \
main.cpp

HEADERS     = ../jack_client.h \
../vumeter.h \
#../volume_meter.h \
../midi_widgets.h \
../osc.h \
../timebase_widget.h \
../metronom.h \
../audio_tools.h \
../presetbox.h \
../libqjack.h \
../qvumeter.h \
../rhdz_meter.h


LIBS += -ljack
QT += core gui widgets
QT += xml

RESOURCES= ../resources_qjack.qrc


DESTDIR=bin
MOC_DIR = build
OBJECTS_DIR = build
UI_DIR = build

