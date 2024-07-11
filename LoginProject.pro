QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialod_setting.cpp \
    dialog_connecttoserver.cpp \
    dialog_creatacc.cpp \
    dialog_creator.cpp \
    dialog_forgotpass.cpp \
    dialog_help.cpp \
    dialog_stop.cpp \
    main.cpp \
    mainwindow.cpp \
    plants.cpp \
    zombies.cpp

HEADERS += \
    Headers.h \
    dialod_setting.h \
    dialog_connecttoserver.h \
    dialog_creatacc.h \
    dialog_creator.h \
    dialog_forgotpass.h \
    dialog_help.h \
    dialog_stop.h \
    mainwindow.h \
    plants.h \
    zombies.h

FORMS += \
    dialod_setting.ui \
    dialog_connecttoserver.ui \
    dialog_creatacc.ui \
    dialog_creator.ui \
    dialog_forgotpass.ui \
    dialog_help.ui \
    dialog_stop.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
