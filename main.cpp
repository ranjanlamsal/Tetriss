#include "precompiledheader.h"
#include "tetriswindow.h"
#include "ui_tetriswindow.h"
#include <QApplication>


class TetrisWindow;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TetrisWindow w;
    w.show();
    return a.exec();
}
