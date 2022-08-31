#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculator w;
    // s21_polish_notation(argv[1]);
    w.show();
    return a.exec();
}
