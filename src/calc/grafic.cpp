#include "grafic.h"
#include "ui_grafic.h"

grafic::grafic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grafic)
{
    ui->setupUi(this);
}

grafic::~grafic()
{
    delete ui;
}

int grafic::graphWrite(double x, int xMin, int xMax)
{
    qDebug() << "x =" << x << "min" << xMin << "max" << xMax;

    return 0;
}
