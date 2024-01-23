QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #checkbox.cpp \
    #main_combobox.cpp \
    ##############
    #listwidget.cpp \
    #main_listwidget.cpp
    #######
    #main_progressbar.cpp \
    #progressbar.cpp
    ##########
    #main_pixmap.cpp \
    #pixmap.cpp
    #########
    #main_splitter.cpp \
 \    #splitter.cpp
    main_table.cpp \
    table.cpp

HEADERS += \
    #checkbox.h \
    ##############
    #listwidget.h
    ########
    #progressbar.h
    #######
    #pixmap.h
    #########
 \    #splitter.h
    table.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
