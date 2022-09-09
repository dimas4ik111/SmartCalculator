#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QWidget>
#include <QtGui>
#include <qcustomplot.h>

extern "C" {
#include "../headers/polish_notation.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;
    void EqualButton(QString str);
    QCustomPlot *customplot;

private slots:
    void OperChange();
    void ClearDisplay();
    void DelButton();
    void Equal();
    void on_Button0_4_clicked();
};
#endif // CALCULATOR_H
