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
    QByteArray ba = str.toLatin1();
    double yMin = 0, yMax = 0;
    s21_polish_notation(ba.data(), &yMin, xMin);
    s21_polish_notation(ba.data(), &yMax, xMin);

    for (double X = xMin; X <= xMax; X += h) {
        double res = 0;
        s21_polish_notation(ba.data(), &res, X);
        if (res <= yMin) {
            yMin = res;
        }
        if (res >= yMax) {
            yMax = res;
        }
    }

    ui->widget->xAxis->setRange(xMin, xMax);
    ui->widget->yAxis->setRange(yMin, yMax);
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
