#include "precompiledheader.h"
#include "tetriswindow.h"
#include "mainWindowTetris.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowTetris w;
    w.show();
    return a.exec();
}
