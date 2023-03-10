QT          += core gui widgets opengl

TEMPLATE    = app
CONFIG      += c++17

TARGET      = 3D-programmering

SOURCES += main.cpp \
    camera.cpp \
    interactiveobject.cpp \
    logger.cpp \
    mainwindow.cpp \
    renderwindow.cpp \
    shader.cpp \
    vertex.cpp \
    visualobject.cpp

HEADERS += \
    camera.h \
    controller.h \
    interactiveobject.h \
    logger.h \
    mainwindow.h \
    renderwindow.h \
    shader.h \
    vertex.h \
    visualobject.h

FORMS += \
    mainwindow.ui

DISTFILES += \
    plainshader.frag \
    plainshader.vert
