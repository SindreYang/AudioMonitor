


LIBS += -ljack
QT += core gui widgets
QT += xml

RESOURCES= ../../resources_qjack.qrc


DESTDIR=bin
MOC_DIR = build
OBJECTS_DIR = build
UI_DIR = build

HEADERS += \
    ../../algorithms_sever/audio_tools.h \
    ../../algorithms_sever/osc.h \
    ../Integration/qv.h \
    ../meter/qvumeter.h \
    ../midi/midi_widgets.h \
    ../other/presetbox.h \
    ../other/timebase_widget.h

SOURCES += \
    ../../algorithms_sever/audio_tools.cpp \
    ../../algorithms_sever/osc.cpp \
    ../Integration/qv.cpp \
    ../meter/qvumeter.cpp \
    ../midi/midi_widgets.cpp \
    ../other/presetbox.cpp \
    ../other/timebase_widget.cpp \
    main.cpp

