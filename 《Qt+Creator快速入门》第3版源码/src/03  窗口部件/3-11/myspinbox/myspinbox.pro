#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T16:22:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myspinbox
TEMPLATE = app



SOURCES += main.cpp\
        mywidget.cpp

HEADERS  += mywidget.h

FORMS    += mywidget.ui


win32 {
    src_dir = $$PWD\\config.ini
    CONFIG(debug, debug|release) {
        dst_dir = $$OUT_PWD\\debug\\
    } else {
        dst_dir = $$OUT_PWD\\release\\
    }

    # dst_dir 最后的 \\ 是必须的，用来标示 xcopy 到一个文件夹，若不存在，创建之
    # Replace slashes in paths with backslashes for Windows
    src_dir ~= s,/,\\,g
    dst_dir ~= s,/,\\,g

    system(del /f /s /q $$dst_dir\\config.ini)
    system(xcopy $$src_dir $$dst_dir /y /e)
}
