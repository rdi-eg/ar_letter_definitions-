TEMPLATE = lib
CONFIG += staticlib c++11
CONFIG -= qt
QMAKE_CXXFLAGS += -fopenmp

SOURCES += buckwalter_conversions.cpp \
    buckwalter_transliteration.cpp \
    ar_letter_definitions.cpp

INCLUDEPATH += $$PWD/../include
unix:!macx: LIBS += -L$$PWD/../lib_debug -lwFileIO
unix:!macx: LIBS += -fPIC -fopenmp

HEADERS += \
    ar_letter_definitions.h \
    buckwalter_transliteration.h \
    buckwalter_conversions.h
