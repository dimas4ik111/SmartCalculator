#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "../headers/polish_notation.h"

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

private slots:
    void OperChange();
    void ClearDisplay();
    void DelButton();
    void Equal();
};
#endif // CALCULATOR_H
