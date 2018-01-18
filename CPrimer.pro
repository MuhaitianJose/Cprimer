TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ChapterTwo/firstsource.cpp \
    ChapterThree/ChapterThreeCpp.cpp

HEADERS += \
    ChapterTwo/firstsource.h \
    ChapterThree/chapterthreecpp.h

DISTFILES += \
    ChapterThree/Recode.txt
