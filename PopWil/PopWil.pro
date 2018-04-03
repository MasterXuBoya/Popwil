#-------------------------------------------------
#
# Project created by QtCreator 2018-03-25T13:17:26
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#the extern header file
INCLUDEPATH += ../include
INCLUDEPATH += ../Inc

#注： 1、-L 参数指定 .lib/.a 文件的位置
#        2、-l  参数指定导入库文件名(不要加扩展名)
#        3、另外，导入库文件的路径中，反斜杠用的是向右倾斜的
#        4、Qt要隐式调用DLL的话，须把dll文件放在程序的输出目录中，lib所存放的文件路径随便，但是须由上述.pro文件中的LIBS指定语句指定其所在文件夹，.h文件放在程序当前目录下即可。

LIBS += -lwinmm  #PerformanceTimer required
#Add the chartDirector .dll and .lib file.
win32:contains(QMAKE_HOST.arch, x86_64) {
  LIBS += ../lib64/chartdir60.lib#../../表示从当前文件目录向上两级
  LIBS += ../lib64/Enc7480.lib
  QMAKE_POST_LINK += copy /Y ..\\lib64\\chartdir60.dll $(DESTDIR) &
  QMAKE_POST_LINK = copy /Y ..\\lib64\\Enc7480.dll $(DESTDIR)
} else {
  LIBS += ../lib32/chartdir60.lib
  LIBS += ../lib32/Enc7480.lib
#Pay attention to the '&' sign
  QMAKE_POST_LINK += copy /Y ..\\lib32\\chartdir60.dll $(DESTDIR) &
  QMAKE_POST_LINK += copy /Y ..\\lib32\\Enc7480.dll $(DESTDIR)
}

TARGET = PopWil
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qchartviewer.cpp \
    performancetimer.cpp \
    iohelper.cpp \
    constvar.cpp \
    inihelper.cpp \
    randomwalk.cpp \
    testwindow.cpp \
    aboutform.cpp \
    configuredialog.cpp

HEADERS  += mainwindow.h \
    qchartviewer.h \
    qdoublebufferedqueue.h \
    performancetimer.h \
    iohelper.h \
    constvar.h \
    inihelper.h \
    randomwalk.h \
    testwindow.h \
    aboutform.h \
    configuredialog.h

FORMS    += mainwindow.ui \
    testwindow.ui \
    aboutform.ui \
    configuredialog.ui


QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wcomment


RESOURCES += \
    resource.qrc


