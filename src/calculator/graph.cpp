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

int Graph::graphView(QString qstr) {
    qDebug() << qstr;
    QByteArray ba = qstr.toLatin1();
    qDebug() << ba;
    return 0;
}
