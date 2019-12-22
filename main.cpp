#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    /* initialize random seed: */
    srand (time(NULL));

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
