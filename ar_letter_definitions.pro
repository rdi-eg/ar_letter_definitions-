TEMPLATE = lib
CONFIG += staticlib c++11
CONFIG -= qt
QMAKE_CXXFLAGS += -fopenmp

SOURCES += buckwalter_conversions.cpp \
    buckwalter_transliteration.cpp \
    ar_letter_definitions.cpp

INCLUDEPATH += $$PWD/../include

HEADERS += \
    rdi_ar_letter_definitions.h \
    rdi_buckwalter_conversions.h \
    rdi_buckwalter_transliteration.h
