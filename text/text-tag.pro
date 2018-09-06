VERSION = 1.0.0.0
QMAKE_TARGET_PRODUCT = Text tag adapter
QMAKE_TARGET_DESCRIPTION = Adapter for binding text tags to Total Test Integrator
QMAKE_TARGET_COPYRIGHT = Copyright\xA9 Oleg Kopyev 2016-2017

QT       -= gui
QT       += widgets xml

TARGET = text-tag
TEMPLATE = lib

DEFINES += TAG_LIBRARY

SOURCES += text-tag.cpp \
        text-tag-main.cpp \
    text-tag-edit-widget.cpp \
    text-tag-view-widget.cpp \
    text-tag-create-widget.cpp

HEADERS += text-tag.h\
    text-tag-edit-widget.h \
    ../../common/itagadapter.h \
    text-tag-global.h \
    text-tag-view-widget.h \
    text-tag-create-widget.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES +=

FORMS += \
    text-tag-edit-widget.ui \
    text-tag-view-widget.ui \
    text-tag-create-widget.ui
