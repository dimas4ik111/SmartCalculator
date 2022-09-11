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

void Graph::slot(QString str, double X, double xMin, double xMax)
{
    qDebug() << str << X << xMin << xMax;
}
