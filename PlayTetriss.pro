QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG += precompiledheader.h
PRECOMPILED_HEADER = precompiledheader.h


SOURCES += \
    main.cpp \
    mainWindowTetris.cpp \
    tetriswindow.cpp \
    tetrixboard.cpp \
    tetrixpiece.cpp

HEADERS += \
    mainWindowTetris.h \
    precompiledheader.h \
    tetriswindow.h \
    tetrixboard.h \
    tetrixpiece.h

FORMS += \
    mainWindowTetris.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
