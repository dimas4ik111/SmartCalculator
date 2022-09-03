/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ButtonAsin;
    QPushButton *ButtonMod;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button2;
    QPushButton *ButtonEqual;
    QLineEdit *Display;
    QPushButton *Button0;
    QPushButton *ButtonSqrt;
    QPushButton *ButtonMul;
    QPushButton *ButtonCos;
    QPushButton *Button5;
    QPushButton *ButtonDel;
    QPushButton *ButtonAcos;
    QPushButton *Button4;
    QPushButton *ButtonSub;
    QPushButton *ButtonSin;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *ButtonDot;
    QPushButton *ButtonAtan;
    QPushButton *ButtonTan;
    QPushButton *ButtonAdd;
    QPushButton *Button1;
    QPushButton *ButtonPow;
    QPushButton *Button6;
    QPushButton *ButtonClear;
    QPushButton *ButtonDiv;
    QPushButton *ButtonOpenBr;
    QPushButton *ButtonCloseBr;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(507, 334);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ButtonAsin = new QPushButton(centralwidget);
        ButtonAsin->setObjectName(QString::fromUtf8("ButtonAsin"));
        ButtonAsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAsin, 2, 1, 1, 1);

        ButtonMod = new QPushButton(centralwidget);
        ButtonMod->setObjectName(QString::fromUtf8("ButtonMod"));
        ButtonMod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonMod, 1, 0, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 4, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 3, 1, 1);

        ButtonEqual = new QPushButton(centralwidget);
        ButtonEqual->setObjectName(QString::fromUtf8("ButtonEqual"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonEqual->sizePolicy().hasHeightForWidth());
        ButtonEqual->setSizePolicy(sizePolicy);
        ButtonEqual->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #000000;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonEqual, 3, 5, 3, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 6);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 3, 1, 2);

        ButtonSqrt = new QPushButton(centralwidget);
        ButtonSqrt->setObjectName(QString::fromUtf8("ButtonSqrt"));
        ButtonSqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonSqrt, 5, 0, 1, 1);

        ButtonMul = new QPushButton(centralwidget);
        ButtonMul->setObjectName(QString::fromUtf8("ButtonMul"));
        ButtonMul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonMul, 1, 1, 1, 1);

        ButtonCos = new QPushButton(centralwidget);
        ButtonCos->setObjectName(QString::fromUtf8("ButtonCos"));
        ButtonCos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonCos, 3, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 3, 1, 1);

        ButtonDel = new QPushButton(centralwidget);
        ButtonDel->setObjectName(QString::fromUtf8("ButtonDel"));
        sizePolicy.setHeightForWidth(ButtonDel->sizePolicy().hasHeightForWidth());
        ButtonDel->setSizePolicy(sizePolicy);
        ButtonDel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonDel, 1, 5, 1, 1);

        ButtonAcos = new QPushButton(centralwidget);
        ButtonAcos->setObjectName(QString::fromUtf8("ButtonAcos"));
        ButtonAcos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAcos, 3, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 2, 1, 1);

        ButtonSub = new QPushButton(centralwidget);
        ButtonSub->setObjectName(QString::fromUtf8("ButtonSub"));
        ButtonSub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonSub, 1, 3, 1, 1);

        ButtonSin = new QPushButton(centralwidget);
        ButtonSin->setObjectName(QString::fromUtf8("ButtonSin"));
        ButtonSin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonSin, 2, 0, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 4, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 2, 1, 1);

        ButtonDot = new QPushButton(centralwidget);
        ButtonDot->setObjectName(QString::fromUtf8("ButtonDot"));
        ButtonDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonDot, 5, 2, 1, 1);

        ButtonAtan = new QPushButton(centralwidget);
        ButtonAtan->setObjectName(QString::fromUtf8("ButtonAtan"));
        ButtonAtan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAtan, 4, 1, 1, 1);

        ButtonTan = new QPushButton(centralwidget);
        ButtonTan->setObjectName(QString::fromUtf8("ButtonTan"));
        ButtonTan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonTan, 4, 0, 1, 1);

        ButtonAdd = new QPushButton(centralwidget);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        ButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAdd, 1, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 2, 1, 1);

        ButtonPow = new QPushButton(centralwidget);
        ButtonPow->setObjectName(QString::fromUtf8("ButtonPow"));
        ButtonPow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonPow, 5, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #696969;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 4, 1, 1);

        ButtonClear = new QPushButton(centralwidget);
        ButtonClear->setObjectName(QString::fromUtf8("ButtonClear"));
        sizePolicy.setHeightForWidth(ButtonClear->sizePolicy().hasHeightForWidth());
        ButtonClear->setSizePolicy(sizePolicy);
        ButtonClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #4B0082;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonClear, 2, 5, 1, 1);

        ButtonDiv = new QPushButton(centralwidget);
        ButtonDiv->setObjectName(QString::fromUtf8("ButtonDiv"));
        ButtonDiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonDiv, 1, 2, 1, 1);

        ButtonOpenBr = new QPushButton(centralwidget);
        ButtonOpenBr->setObjectName(QString::fromUtf8("ButtonOpenBr"));
        ButtonOpenBr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonOpenBr, 6, 0, 1, 1);

        ButtonCloseBr = new QPushButton(centralwidget);
        ButtonCloseBr->setObjectName(QString::fromUtf8("ButtonCloseBr"));
        ButtonCloseBr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D2691E;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid #696969;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonCloseBr, 6, 1, 1, 1);

        calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        ButtonAsin->setText(QCoreApplication::translate("calculator", "asin", nullptr));
        ButtonMod->setText(QCoreApplication::translate("calculator", "%", nullptr));
        Button8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        Button9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        Button2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        ButtonEqual->setText(QCoreApplication::translate("calculator", "=", nullptr));
        Display->setText(QString());
        Button0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        ButtonSqrt->setText(QCoreApplication::translate("calculator", "sqrt", nullptr));
        ButtonMul->setText(QCoreApplication::translate("calculator", "*", nullptr));
        ButtonCos->setText(QCoreApplication::translate("calculator", "cos", nullptr));
        Button5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        ButtonDel->setText(QCoreApplication::translate("calculator", "<-", nullptr));
        ButtonAcos->setText(QCoreApplication::translate("calculator", "acos", nullptr));
        Button4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        ButtonSub->setText(QCoreApplication::translate("calculator", "-", nullptr));
        ButtonSin->setText(QCoreApplication::translate("calculator", "sin", nullptr));
        Button3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        Button7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        ButtonDot->setText(QCoreApplication::translate("calculator", ".", nullptr));
        ButtonAtan->setText(QCoreApplication::translate("calculator", "atan", nullptr));
        ButtonTan->setText(QCoreApplication::translate("calculator", "tan", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("calculator", "+", nullptr));
        Button1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        ButtonPow->setText(QCoreApplication::translate("calculator", "^", nullptr));
        Button6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        ButtonClear->setText(QCoreApplication::translate("calculator", "A/C", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("calculator", "/", nullptr));
        ButtonOpenBr->setText(QCoreApplication::translate("calculator", "(", nullptr));
        ButtonCloseBr->setText(QCoreApplication::translate("calculator", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
