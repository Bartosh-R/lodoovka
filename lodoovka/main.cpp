#include "mainwindow.h"
#include <QApplication>
#include "Lodoovka.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow::singleton = &w;
    w.resize(800, 600);
    w.show();

    lodoovka_main();

    return a.exec();
}
