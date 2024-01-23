QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    click.cpp \
    main_for_click.cpp
###########
    #keypress.cpp \
    #main_keypress.cpp
###########
    #main_moveevent.cpp \
    #move.cpp
###########
#    disconnect.cpp \
#    main_disconeckt_signal_event.cpp
 \############
    #main_time.cpp \
    #timer.cpp

HEADERS += \
    click.h
############
    #keypress.h
############
    #move.h
############
#     disconnect.h
 \############
    #timer.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
