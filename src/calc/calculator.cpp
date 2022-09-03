#include "calculator.h"
#include "./ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);

    ui->Display->setText("");

    QPushButton *button = (QPushButton *)sender();

    QPushButton *numBut[10];
    for (int i = 0; i < 10; i++) {
        QString butName = "Button" + QString::number(i);
        numBut[i] = calculator::findChild<QPushButton *>(butName);
        connect(numBut[i], SIGNAL(released()), this,
            SLOT(OperChange()));
    }

    connect(ui->ButtonAdd, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonSub, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonMul, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonDiv, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonMod, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonOpenBr, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonCloseBr, SIGNAL(released()), this,
            SLOT(OperChange()));
    connect(ui->ButtonDel, SIGNAL(released()), this,
            SLOT(DelButton()));
    connect(ui->ButtonEqual, SIGNAL(released()), this,
            SLOT(Equal()));

    connect(ui->ButtonClear, SIGNAL(released()), this,
            SLOT(ClearDisplay()));
}

calculator::~calculator()
{
    delete ui;
}

void calculator::ClearDisplay() {
    ui->Display->setText("");
}

void calculator::DelButton() {
    QString DisplayText = ui->Display->text();
    size_t len = DisplayText.length();
    QString copyVal = DisplayText.left(len - 1);
    ClearDisplay();
    ui->Display->setText(copyVal);
}

void calculator::OperChange() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "/");
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "*");
    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "+");
    } else if (QString::compare(butVal, "-", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "-");
    } else if (QString::compare(butVal, "%", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "%");
    } else if (QString::compare(butVal, "(", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "(");
    } else if (QString::compare(butVal, ")", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + ")");
    } else if (QString::compare(butVal, "0", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "0");
    } else if (QString::compare(butVal, "1", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "1");
    } else if (QString::compare(butVal, "2", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "2");
    } else if (QString::compare(butVal, "3", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "3");
    } else if (QString::compare(butVal, "4", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "4");
    } else if (QString::compare(butVal, "5", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "5");
    } else if (QString::compare(butVal, "6", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "6");
    } else if (QString::compare(butVal, "7", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "7");
    } else if (QString::compare(butVal, "8", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "8");
    } else if (QString::compare(butVal, "9", Qt::CaseInsensitive) == 0) {
        ui->Display->setText(ui->Display->text() + "9");
    }
}

void calculator::Equal() {
    ClearDisplay();
    QString DisText = ui->Display->text();
}
