QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customgraphicsitem.cpp \
    customscene.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    customgraphicsitem.h \
    customscene.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

RC_FILE = resistor_app.rc
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

DISTFILES += \
    icons/home.png \
    icons/home_hovered.png \
    icons/square_0.png \
    icons/square_1.png \
    icons/square_10.png \
    icons/square_11.png \
    icons/square_2.png \
    icons/square_3.png \
    icons/square_4.png \
    icons/square_5.png \
    icons/square_6.png \
    icons/square_7.png \
    icons/square_8.png \
    icons/square_9.png \
    icons/square_beige.png \
    icons/square_blue.png \
    icons/square_grey.png
