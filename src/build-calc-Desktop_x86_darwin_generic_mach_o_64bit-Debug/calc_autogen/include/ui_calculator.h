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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *bottom_clear;
    QPushButton *plus;
    QPushButton *bottom_6;
    QPushButton *bottom_8;
    QPushButton *tan;
    QPushButton *bottom_7;
    QPushButton *answer;
    QPushButton *sqrt;
    QPushButton *pow;
    QPushButton *open_br;
    QPushButton *sin;
    QPushButton *bottom_5;
    QPushButton *close_br;
    QPushButton *div;
    QPushButton *bottom_2;
    QPushButton *backspace;
    QLineEdit *Display;
    QPushButton *atan;
    QPushButton *bottom_x;
    QPushButton *asin;
    QPushButton *mull;
    QPushButton *cos;
    QPushButton *acos;
    QPushButton *bottom_4;
    QPushButton *bottom_9;
    QPushButton *minus;
    QPushButton *bottom_0;
    QPushButton *bottom_1;
    QPushButton *bottom_dot;
    QPushButton *bottom_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(580, 423);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottom_clear = new QPushButton(centralwidget);
        bottom_clear->setObjectName(QString::fromUtf8("bottom_clear"));

        gridLayout->addWidget(bottom_clear, 7, 0, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(plus, 1, 3, 1, 1);

        bottom_6 = new QPushButton(centralwidget);
        bottom_6->setObjectName(QString::fromUtf8("bottom_6"));
        bottom_6->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_6, 4, 5, 1, 1);

        bottom_8 = new QPushButton(centralwidget);
        bottom_8->setObjectName(QString::fromUtf8("bottom_8"));
        bottom_8->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_8, 3, 4, 1, 1);

        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(tan, 1, 2, 1, 1);

        bottom_7 = new QPushButton(centralwidget);
        bottom_7->setObjectName(QString::fromUtf8("bottom_7"));
        bottom_7->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_7, 3, 3, 1, 1);

        answer = new QPushButton(centralwidget);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(answer, 1, 5, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(sqrt, 3, 0, 1, 1);

        pow = new QPushButton(centralwidget);
        pow->setObjectName(QString::fromUtf8("pow"));
        pow->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(pow, 4, 2, 1, 1);

        open_br = new QPushButton(centralwidget);
        open_br->setObjectName(QString::fromUtf8("open_br"));
        open_br->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(open_br, 3, 1, 1, 1);

        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(sin, 1, 0, 1, 1);

        bottom_5 = new QPushButton(centralwidget);
        bottom_5->setObjectName(QString::fromUtf8("bottom_5"));
        bottom_5->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_5, 4, 4, 1, 1);

        close_br = new QPushButton(centralwidget);
        close_br->setObjectName(QString::fromUtf8("close_br"));
        close_br->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(close_br, 3, 2, 1, 1);

        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(div, 2, 4, 1, 1);

        bottom_2 = new QPushButton(centralwidget);
        bottom_2->setObjectName(QString::fromUtf8("bottom_2"));
        bottom_2->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_2, 5, 4, 1, 1);

        backspace = new QPushButton(centralwidget);
        backspace->setObjectName(QString::fromUtf8("backspace"));
        backspace->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(backspace, 2, 5, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("q_display_edit {\n"
"	backgounf-color: gray;\n"
"	border: 1px solid silver;\n"
"	collor: white;\n"
"}"));
        Display->setMaxLength(255);
        Display->setCursorPosition(3);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 6);

        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(atan, 2, 2, 1, 1);

        bottom_x = new QPushButton(centralwidget);
        bottom_x->setObjectName(QString::fromUtf8("bottom_x"));
        bottom_x->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_x, 7, 5, 1, 1);

        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(asin, 2, 0, 1, 1);

        mull = new QPushButton(centralwidget);
        mull->setObjectName(QString::fromUtf8("mull"));
        mull->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(mull, 2, 3, 1, 1);

        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(cos, 1, 1, 1, 1);

        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(acos, 2, 1, 1, 1);

        bottom_4 = new QPushButton(centralwidget);
        bottom_4->setObjectName(QString::fromUtf8("bottom_4"));
        bottom_4->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_4, 4, 3, 1, 1);

        bottom_9 = new QPushButton(centralwidget);
        bottom_9->setObjectName(QString::fromUtf8("bottom_9"));
        bottom_9->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_9, 3, 5, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #FF0000;\n"
"	border: 1px solid red;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(minus, 1, 4, 1, 1);

        bottom_0 = new QPushButton(centralwidget);
        bottom_0->setObjectName(QString::fromUtf8("bottom_0"));
        bottom_0->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_0, 7, 4, 1, 1);

        bottom_1 = new QPushButton(centralwidget);
        bottom_1->setObjectName(QString::fromUtf8("bottom_1"));
        bottom_1->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_1, 5, 3, 1, 1);

        bottom_dot = new QPushButton(centralwidget);
        bottom_dot->setObjectName(QString::fromUtf8("bottom_dot"));
        bottom_dot->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_dot, 7, 3, 1, 1);

        bottom_3 = new QPushButton(centralwidget);
        bottom_3->setObjectName(QString::fromUtf8("bottom_3"));
        bottom_3->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
"	backgounf-color: #D3D3D3;\n"
"	border: 1px solid silver;\n"
"	padding: 5px\n"
"}\n"
"\n"
"q_push_bottom_press {\n"
"	backgounf-color: #0000FF;\n"
"	border: 1px solid blue;\n"
"	padding: 5px\n"
"}"));

        gridLayout->addWidget(bottom_3, 5, 5, 1, 1);

        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 580, 22));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        bottom_clear->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        plus->setText(QCoreApplication::translate("calculator", "+", nullptr));
        bottom_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        bottom_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        tan->setText(QCoreApplication::translate("calculator", "tan(x)", nullptr));
        bottom_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        answer->setText(QCoreApplication::translate("calculator", "=", nullptr));
        sqrt->setText(QCoreApplication::translate("calculator", "sqrt(x)", nullptr));
        pow->setText(QCoreApplication::translate("calculator", "^", nullptr));
        open_br->setText(QCoreApplication::translate("calculator", "(", nullptr));
        sin->setText(QCoreApplication::translate("calculator", "sin(x)", nullptr));
        bottom_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        close_br->setText(QCoreApplication::translate("calculator", ")", nullptr));
        div->setText(QCoreApplication::translate("calculator", "/", nullptr));
        bottom_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        backspace->setText(QCoreApplication::translate("calculator", "\342\214\253", nullptr));
        Display->setText(QCoreApplication::translate("calculator", "3*5", nullptr));
        atan->setText(QCoreApplication::translate("calculator", "atan(x)", nullptr));
        bottom_x->setText(QCoreApplication::translate("calculator", "x", nullptr));
        asin->setText(QCoreApplication::translate("calculator", "asin(x)", nullptr));
        mull->setText(QCoreApplication::translate("calculator", "*", nullptr));
        cos->setText(QCoreApplication::translate("calculator", "cos(x)", nullptr));
        acos->setText(QCoreApplication::translate("calculator", "acos(x)", nullptr));
        bottom_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        bottom_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        minus->setText(QCoreApplication::translate("calculator", "-", nullptr));
        bottom_0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        bottom_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        bottom_dot->setText(QCoreApplication::translate("calculator", ".", nullptr));
        bottom_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
