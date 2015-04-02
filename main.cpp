#include "plotmlc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlotMLC w;
    w.show();

    return a.exec();
}
