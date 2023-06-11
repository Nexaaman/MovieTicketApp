QT       += core gui sql network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cancel.cpp \
    confirm.cpp \
    dashboard.cpp \
    login.cpp \
    main.cpp \
    interface.cpp \
    signup.cpp \
    ticket.cpp

HEADERS += \
    cancel.h \
    confirm.h \
    dashboard.h \
    interface.h \
    login.h \
    signup.h \
    ticket.h

FORMS += \
    cancel.ui \
    confirm.ui \
    dashboard.ui \
    interface.ui \
    login.ui \
    signup.ui \
    ticket.ui

TRANSLATIONS += \
    Instagram_clone_app_hi_IN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Files.qrc
