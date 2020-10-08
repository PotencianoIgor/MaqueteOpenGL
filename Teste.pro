QT += core
QT -= gui

TARGET = Teste
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

LIBS += -lglut -lGL -lGLU

HEADERS += \
    funcoes.h
