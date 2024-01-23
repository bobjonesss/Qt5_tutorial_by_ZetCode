QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #absolute.cpp \
    #########
    #main_QV_box.cpp \
    #vertical_box.cpp
    #########
    #main_botton.cpp \
    #buttons.cpp \
 \    #########
    #main_netsin.cpp \
    #nesting.cpp
 \    #########
    form.cpp \
    main_form.cpp
 \  #######
    #calculator.cpp \
    #main_GRID.cpp
 \  #######
    #masin_reviev.cpp \
    #review.cpp

HEADERS += \
######
    #vertical_box.h
######
    #buttons.h \
    ##########
    #nesting.h
    ########
    form.h \
    ########
    #calculator.h \
    #######
    #review.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
