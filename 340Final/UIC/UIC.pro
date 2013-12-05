#-------------------------------------------------
#
# Project created by QtCreator 2013-11-22T16:26:18
#
#-------------------------------------------------

QT       += core gui\
          webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets network widgets

TARGET = UIC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mypushbutton.cpp \
    myframe.cpp \
    coursedata.cpp \
    locationLoader.cpp

HEADERS  += mainwindow.h \
    ../mypushbutton.h \
    mypushbutton.h \
    myframe.h \
    coursedata.h \
    locationLoader.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
