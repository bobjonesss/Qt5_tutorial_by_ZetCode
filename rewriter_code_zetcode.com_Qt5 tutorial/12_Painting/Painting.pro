QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #lines.cpp \
    #main_painting.cpp \
    ###########
    #colours.cpp \
    #main_color.cpp
    ##########
    #main_patterns.cpp \
    #patterns.cpp
    ##########
    #main_transporent_rectqangle.cpp \
    #transparent_rectangles.cpp
    ##############
    #donut.cpp \
    #main_domut.cpp
    ##############
    #main_shapes.cpp \
    #shapes.cpp
    ##############
    #linear_gradients.cpp \
    #main_gradients.cpp
 \    ##############
    #main_radiel_gradient.cpp \
    #radial_gradient.cpp
 \    #######
    main_puff.cpp \
    puff.cpp



HEADERS += \
    #lines.h \
    ###########
    #colours.h
    ########
    #patterns.h
    #########
    #transparent_rectangles.h
    ###########
    #donut.h
    ###########
    #shapes.h
    ###########
    #linear_gradients.h
 \    ###########
    #radial_gradient.h
    #############
    puff.h \



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
