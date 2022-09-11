#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
}

Graph::~Graph()
{
    delete ui;
}

void Graph::slot(QString str, double xMin, double xMax)
{
    qDebug() << str << xMin << xMax;
    QByteArray ba = str.toLatin1();

    ui->widget->xAxis->setRange(xMin, xMax);
    ui->widget->yAxis->setRange(-100, 100);
    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
    for (double X = xMin; X <= xMax; X += h) {
        x.push_back(X);
        double res = 0;
        s21_polish_notation(ba.data(), &res, X);
        y.push_back(res);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
}
