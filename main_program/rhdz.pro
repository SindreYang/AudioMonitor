TEMPLATE    = app

SOURCES     =src/jack_engine.cpp \
src/rhdz.cpp \
src/main.cpp

HEADERS     = src/jack_engine.h \
src/rhdz.h


QT += core gui widgets xml


INSTALLS += target resource/pics


CONFIG += release
DESTDIR=bin
MOC_DIR = build
OBJECTS_DIR = build
UI_DIR = build

RESOURCES= resource/application.qrc




unix:!macx: LIBS += -L$$PWD/lib/ -lqjack -ljack

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix:!macx: PRE_TARGETDEPS += $$PWD/lib/libqjack.a
