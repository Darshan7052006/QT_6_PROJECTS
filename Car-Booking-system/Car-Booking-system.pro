QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcar.cpp \
    bookcar.cpp \
    browsinglist.cpp \
    loginpage.cpp \
    main.cpp \
    carbookingsystem.cpp \
    mainmenu.cpp \
    viewallbookings.cpp

HEADERS += \
    addcar.h \
    bookcar.h \
    browsinglist.h \
    carbookingsystem.h \
    loginpage.h \
    mainmenu.h \
    viewallbookings.h

FORMS += \
    addcar.ui \
    bookcar.ui \
    browsinglist.ui \
    carbookingsystem.ui \
    loginpage.ui \
    mainmenu.ui \
    viewallbookings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
