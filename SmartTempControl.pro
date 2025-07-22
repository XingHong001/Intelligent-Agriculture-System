#-------------------------------------------------
#
# Project created by QtCreator 2022-11-16T16:32:04
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartTempControl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
