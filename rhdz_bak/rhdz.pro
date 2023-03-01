TEMPLATE    = app

SOURCES     = jack_engine.cpp \
rhdz.cpp \
main.cpp

HEADERS     = jack_engine.h \
rhdz.h

LIBS += -ljack -L$$PWD/./ -lqjack
QT += core gui widgets
QT += xml

pics.files = ./pics/rhdz.png
INSTALLS += pics


CONFIG += release

DESTDIR=bin
MOC_DIR = build
OBJECTS_DIR = build
UI_DIR = build

RESOURCES= application.qrc

