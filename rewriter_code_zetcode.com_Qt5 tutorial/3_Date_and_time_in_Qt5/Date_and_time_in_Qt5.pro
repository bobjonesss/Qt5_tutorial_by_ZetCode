QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    #compare_dates.cpp \
    #current_datetime.cpp \
    #init.cpp \
    #main.cpp \
    #leapyear.cpp \
    #custom_date_formats.cpp \
    #predefined_date_formats.cpp \
    #custom_time_formats.cpp \
 \    #predefined_time_formats.cpp
    #nofdays.cpp \
 \    #weekday.cpp
    #datetime.cpp \
    #daystofrom.cpp \
 \    #validity.cpp
    #battles.cpp \
 \    #julianday.cpp
    unix_epoch.cpp \
    #utc_local.cpp


HEADERS += \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
