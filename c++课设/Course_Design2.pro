QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administor.cpp \
    book_menu.cpp \
    form.cpp \
    login.cpp \
    main.cpp \
    print_menu.cpp \
    queue_manage.cpp \
    queue_print.cpp \
    reservation_print.cpp \
    reservationseat.cpp \
    widget.cpp

HEADERS += \
    administor.h \
    book_menu.h \
    form.h \
    login.h \
    print_menu.h \
    queue_manage.h \
    queue_print.h \
    reservation_print.h \
    reservationseat.h \
    widget.h

FORMS += \
    administor.ui \
    book_menu.ui \
    form.ui \
    login.ui \
    print_menu.ui \
    queue_manage.ui \
    queue_print.ui \
    reservation_print.ui \
    reservationseat.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc

