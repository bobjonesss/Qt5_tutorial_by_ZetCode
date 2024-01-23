QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #label.cpp \
    #main_label.cpp
##############
    #main_clider.cpp \
    #slider.cpp
##############
    #combobox.cpp \
    #main_combox.cpp
##############
    #main_spinbox.cpp \
    #spinbox.cpp
##############
    #ledit.cpp \
    #main_lineedit.cpp
 \##############
    main_statusbart.cpp \
    statusbar.cpp

HEADERS += \
    #label.h
##############
    #slider.h
##############
    #combobox.h
##############
    #spinbox.h
##############
    #ledit.h
 \##############
    statusbar.h



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
