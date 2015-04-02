#include "plotmlc.h"
#include "ui_plotmlc.h"

PlotMLC::PlotMLC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlotMLC)
{
    ui->setupUi(this);
}

PlotMLC::~PlotMLC()
{
    delete ui;
}
