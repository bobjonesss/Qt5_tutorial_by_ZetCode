QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #main.cpp \
    #mainwindow.cpp
#################
    #main.cpp \
    #simple_menu.cpp
###################
    #another_menu.cpp \
    #main_another_menu.cpp \
###########
    #main_checkable.cpp \
    #checkable.cpp \
###########
    #main_tyoolbar.cpp \
    #toolbar.cpp
###########
    main_skeletomn.cpp \
    skeleton.cpp


HEADERS += \
    #mainwindow.h
    #simple_menu.h
    ##################
    #another_menu.h \
    ##################
    #checkable.h \
    #############
    #toolbar.h
    #############
    skeleton.h \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
