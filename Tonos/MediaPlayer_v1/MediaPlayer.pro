#-------------------------------------------------
#
# Project created by QtCreator 2017-05-10T15:52:01
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MediaPlayer
TEMPLATE = app

LIBS += -lfftw3f -ljack -lsndfile -lGL

INCLUDEPATH += /usr/include

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    jack.cpp \
    controlvolume.cpp \
    dspsystem.cpp

HEADERS  += mainwindow.h \
            jack.h \
            processor.h \
    controlvolume.h

FORMS    += mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
