#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>

namespace Ui {
class Graph;
}

class Graph : public QWidget
{
    Q_OBJECT

public:
    explicit Graph(QWidget *parent = nullptr);
    ~Graph();
    int graphView(QString qstr, double X, int xMIn, int xMax);

private:
    Ui::Graph *ui;
};

#endif // GRAPH_H
