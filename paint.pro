TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# openGL include
QT += gl
##for ubuntu
#LIBS += /usr/lib/x86_64-linux-gnu/libglut.so /usr/lib/x86_64-linux-gnu/libGL.so
## for arch
LIBS += /usr/lib/libglut.so /usr/lib/libGL.so

SOURCES += main.c \
    paint_graphics.c \
    paint_memory.c \
    paint_system.c

HEADERS += \
    paint_graphics.h \
    types.h \
    paint_memory.h \
    paint_system.h
