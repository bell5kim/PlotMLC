#ifndef PLOTMLC_H
#define PLOTMLC_H

#include <QMainWindow>

namespace Ui {
class PlotMLC;
}

class PlotMLC : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlotMLC(QWidget *parent = 0);
    ~PlotMLC();

private:
    Ui::PlotMLC *ui;
};

#endif // PLOTMLC_H
