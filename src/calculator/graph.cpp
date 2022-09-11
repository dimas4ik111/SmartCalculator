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

int Graph::graphView(QString qstr, double X, int xMin, int xMax) {
    qDebug() << qstr;
//    QByteArray ba = qstr.toLatin1();
    qDebug() << X << xMin << xMax;
    return 0;
}
