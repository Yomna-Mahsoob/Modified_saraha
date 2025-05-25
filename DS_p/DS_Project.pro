QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SearchSort.cpp \
    authmanager.cpp \
    contact.cpp \
    favoriatemessages.cpp \
    filemanager.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    registerationwindow.cpp \
    sendmessage.cpp \
    user.cpp \
    viewcontacts.cpp \
    viewreceivedmessages.cpp \
    viewsendmessages.cpp \
    welcomewindow.cpp

HEADERS += \
    SearchSort.h \
    authmanager.h \
    contact.h \
    favoriatemessages.h \
    filemanager.h \
    login.h \
    mainwindow.h \
    message.h \
    registerationwindow.h \
    sendmessage.h \
    user.h \
    viewcontacts.h \
    viewreceivedmessages.h \
    viewsendmessages.h \
    welcomewindow.h

FORMS += \
    favoriatemessages.ui \
    login.ui \
    mainwindow.ui \
    registerationwindow.ui \
    sendmessage.ui \
    viewcontacts.ui \
    viewreceivedmessages.ui \
    viewsendmessages.ui \
    welcomewindow.ui

OTHER_FILES+
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    contacts.txt \
    messages.txt \
    users.txt \
  removed_contacts.txt
