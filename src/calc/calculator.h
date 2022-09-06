#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QWidget>
#include <QtGui>
#include <grafic.h>

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
    grafic graf;
    void EqualButton(QString str);

private slots:
    void OperChange();
    void ClearDisplay();
    void DelButton();
    void Equal();
    void on_ButtonGraf_clicked();
};
#endif // CALCULATOR_H
