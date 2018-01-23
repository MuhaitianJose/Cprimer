TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ChapterTwo/firstsource.cpp \
    ChapterThree/ChapterThreeCpp.cpp \
    ChapterThree/chapterthreeexercises.cpp \
    ChapterFour/chapterfourcontentcode.cpp \
    ChapterFour/chapterfourexercises.cpp \
    ChapterFive/chapterfivecontentcode.cpp

HEADERS += \
    ChapterTwo/firstsource.h \
    ChapterThree/chapterthreecpp.h \
    ChapterThree/chapterthreeexercises.h \
    ChapterFour/chapterfourcontentcode.h \
    ChapterFour/chapterfourexercises.h \
    ChapterFive/chapterfivecontentcode.h

DISTFILES += \
    ChapterThree/Recode.txt \
    ChapterFour/Record.txt
