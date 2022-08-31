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
    QPushButton *bottom_8;
    QPushButton *bottom_1;
    QPushButton *pushButton_34;
    QPushButton *bottom_2;
    QPushButton *bottom_7;
    QPushButton *pushButton_31;
    QPushButton *minus;
    QPushButton *div;
    QLineEdit *Display;
    QPushButton *pushButton_29;
    QPushButton *pushButton_24;
    QPushButton *pushButton_33;
    QPushButton *bottom_6;
    QPushButton *bottom_9;
    QPushButton *pushButton_21;
    QPushButton *pushButton_32;
    QPushButton *pushButton_2;
    QPushButton *pushButton_23;
    QPushButton *pushButton_22;
    QPushButton *answer;
    QPushButton *pushButton_20;
    QPushButton *pushButton;
    QPushButton *bottom_3;
    QPushButton *backspace;
    QPushButton *bottom_4;
    QPushButton *mull;
    QPushButton *pushButton_28;
    QPushButton *bottom_5;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *plus;
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

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));

        gridLayout->addWidget(pushButton_34, 4, 0, 1, 1);

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

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));

        gridLayout->addWidget(pushButton_31, 1, 0, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));

        gridLayout->addWidget(minus, 1, 4, 1, 1);

        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));

        gridLayout->addWidget(div, 2, 4, 1, 1);

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

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));

        gridLayout->addWidget(pushButton_29, 4, 1, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        gridLayout->addWidget(pushButton_24, 2, 2, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));

        gridLayout->addWidget(pushButton_33, 3, 0, 1, 1);

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

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));

        gridLayout->addWidget(pushButton_32, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
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

        gridLayout->addWidget(pushButton_2, 3, 2, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));

        gridLayout->addWidget(pushButton_23, 1, 2, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        gridLayout->addWidget(pushButton_22, 1, 1, 1, 1);

        answer = new QPushButton(centralwidget);
        answer->setObjectName(QString::fromUtf8("answer"));

        gridLayout->addWidget(answer, 1, 5, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
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

        gridLayout->addWidget(pushButton_20, 7, 5, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
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

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

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

        backspace = new QPushButton(centralwidget);
        backspace->setObjectName(QString::fromUtf8("backspace"));

        gridLayout->addWidget(backspace, 2, 5, 1, 1);

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

        mull = new QPushButton(centralwidget);
        mull->setObjectName(QString::fromUtf8("mull"));

        gridLayout->addWidget(mull, 2, 3, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));

        gridLayout->addWidget(pushButton_28, 4, 2, 1, 1);

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

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
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

        gridLayout->addWidget(pushButton_16, 7, 3, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setStyleSheet(QString::fromUtf8("q_push_bottom {\n"
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

        gridLayout->addWidget(pushButton_18, 7, 4, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));

        gridLayout->addWidget(plus, 1, 3, 1, 1);

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
        bottom_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        bottom_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        pushButton_34->setText(QString());
        bottom_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        bottom_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        pushButton_31->setText(QCoreApplication::translate("calculator", "sin(x)", nullptr));
        minus->setText(QCoreApplication::translate("calculator", "-", nullptr));
        div->setText(QCoreApplication::translate("calculator", "/", nullptr));
        Display->setText(QCoreApplication::translate("calculator", "3*5", nullptr));
        pushButton_29->setText(QString());
        pushButton_24->setText(QCoreApplication::translate("calculator", "atan(x)", nullptr));
        pushButton_33->setText(QCoreApplication::translate("calculator", "sqrt(x)", nullptr));
        bottom_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        bottom_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        pushButton_21->setText(QCoreApplication::translate("calculator", "acos(x)", nullptr));
        pushButton_32->setText(QCoreApplication::translate("calculator", "asin(x)", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calculator", ")", nullptr));
        pushButton_23->setText(QCoreApplication::translate("calculator", "tan(x)", nullptr));
        pushButton_22->setText(QCoreApplication::translate("calculator", "cos(x)", nullptr));
        answer->setText(QCoreApplication::translate("calculator", "=", nullptr));
        pushButton_20->setText(QCoreApplication::translate("calculator", "x", nullptr));
        pushButton->setText(QCoreApplication::translate("calculator", "(", nullptr));
        bottom_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        backspace->setText(QCoreApplication::translate("calculator", "\342\214\253", nullptr));
        bottom_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        mull->setText(QCoreApplication::translate("calculator", "*", nullptr));
        pushButton_28->setText(QCoreApplication::translate("calculator", "^", nullptr));
        bottom_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        pushButton_16->setText(QCoreApplication::translate("calculator", ".", nullptr));
        pushButton_18->setText(QCoreApplication::translate("calculator", "0", nullptr));
        plus->setText(QCoreApplication::translate("calculator", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
