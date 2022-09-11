#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QVector>

namespace Ui {
class Graph;
}

class Graph : public QWidget
{
    Q_OBJECT

public:
    explicit Graph(QWidget *parent = nullptr);
    ~Graph();

private:
    Ui::Graph *ui;
//    double h = 0.1;

public slots:
    void slot(QString str, double X, double xMin, double xMax);
};

#endif // GRAPH_H
