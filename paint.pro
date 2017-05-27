TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# openGL include
QT += gl
LIBS += /usr/lib/libglut.so /usr/lib/libGL.so

SOURCES += main.c \
    paint_graphics.c \
    paint_memory.c \
    paint_callbacks.c \
    paint_system.c

HEADERS += \
    paint_graphics.h \
    types.h \
    paint_memory.h \
    paint_callbacks.h \
    paint_system.h
