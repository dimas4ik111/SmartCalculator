#ifndef GRAFIC_H
#define GRAFIC_H

#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class grafic;
}

class grafic : public QDialog
{
    Q_OBJECT

public:
    explicit grafic(QWidget *parent = nullptr);
    int graphWrite(double x, int xMin, int xMax);
    ~grafic();

private:
    Ui::grafic *ui;
    QGraphicsScene *scene;
};

#endif // GRAFIC_H
