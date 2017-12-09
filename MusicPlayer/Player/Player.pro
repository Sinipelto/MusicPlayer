#-------------------------------------------------
#
# Project created by QtCreator 2017-12-09T14:05:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Player
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        playerwindow.cpp

HEADERS += \
        playerwindow.hh

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../PlayerLibrary/release/ -lPlayerLibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../PlayerLibrary/debug/ -lPlayerLibrary
else:unix:!macx: LIBS += -L$$OUT_PWD/../../PlayerLibrary/ -lPlayerLibrary

INCLUDEPATH += $$PWD/../../PlayerLibrary
DEPENDPATH += $$PWD/../../PlayerLibrary

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../../PlayerLibrary/release/libPlayerLibrary.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../../PlayerLibrary/debug/libPlayerLibrary.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../../PlayerLibrary/release/PlayerLibrary.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../../PlayerLibrary/debug/PlayerLibrary.lib
else:unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../../PlayerLibrary/libPlayerLibrary.a
