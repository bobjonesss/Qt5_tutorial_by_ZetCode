# link: https://zetcode.com/gui/qt5/firstprograms/

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
##########
    #simple.cpp \
##########
    #tooltip.cpp    \
##########
    #cursors.cpp
##########
    pushbutton.cpp
##########
    #main.cpp \
    #plusminus.cpp \

HEADERS += \
   #plusminus.h

FORMS += \
    # qt5_tutorial_6_first_programs.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
