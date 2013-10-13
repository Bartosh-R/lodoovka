#-------------------------------------------------
#
# Project created by QtCreator 2013-10-13T14:01:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lodoovka
TEMPLATE = app


SOURCES += main.cpp\
    WindowManager.c \
    Window.c \
    mainwindow.cpp \
    Lodoovka.c \
    Geometry.c \
    Drawing.cpp

HEADERS  += mainwindow.h \
    WindowManager.h \
    Window.h \
    Lodoovka.h \
    Geometry.h \
    Event.h \
    Drawing.h

FORMS    += mainwindow.ui

OTHER_FILES +=
