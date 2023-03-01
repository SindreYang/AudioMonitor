#建立一个库的makefile
TEMPLATE    = lib
#可执行应用程序的名称
TARGET=qjack
#中所有源文件的列表
SOURCES     =jack2_sever/jack_client.cpp \
    algorithms_sever/audio_tools.cpp \
    algorithms_sever/osc.cpp \
    qt_module/Integration/qv.cpp \
    qt_module/meter/metronom.cpp \
    qt_module/meter/qvumeter.cpp \
    qt_module/midi/midi_widgets.cpp \
    qt_module/other/presetbox.cpp \
    qt_module/other/timebase_widget.cpp \

#中所有头文件的列表
HEADERS     = jack2_sever/jack_client.h \
    algorithms_sever/audio_tools.h \
    algorithms_sever/osc.h \
    qt_module/Integration/qv.h \
    qt_module/meter/metronom.h \
    qt_module/meter/qvumeter.h \
    qt_module/midi/midi_widgets.h \
    qt_module/other/presetbox.h \
    qt_module/other/timebase_widget.h \
libqjack.h

#额外的包含路径的列表
INCLUDEPATH += /usr/local/include/

#链接到项目中的库列表
LIBS += -ljack
QT += core gui widgets xml

#安装的文件
INSTALLS += target
INSTALLS += headers
#资源文件
RESOURCES= resources_qjack.qrc
#将以release模式连编,静态库
CONFIG += release staticlib
#放置可执行程序目标的目录
DESTDIR=$$PWD/../main_program/lib
#moc转换文件路径
MOC_DIR = build
#放置obj中间文件的目录
OBJECTS_DIR = build
#ui文件转换的路径
UI_DIR = build

