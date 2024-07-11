QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Headers.cpp \
    dialog_connecttoserver.cpp \
    dialog_creatacc.cpp \
    dialog_forgotpass.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Headers.h \
    dialog_connecttoserver.h \
    dialog_creatacc.h \
    dialog_forgotpass.h \
    mainwindow.h

FORMS += \
    dialog_connecttoserver.ui \
    dialog_creatacc.ui \
    dialog_forgotpass.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
