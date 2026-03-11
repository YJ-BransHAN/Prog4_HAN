/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *MenuLayout;
    QPushButton *CappucinoButton;
    QLabel *MenuLabel;
    QPushButton *EspressoButton;
    QPushButton *LatteMacchiatoButton;
    QLabel *OptionsLabel;
    QLabel *InvisibleLabel;
    QPushButton *AmericanoButton;
    QPushButton *DecafButton;
    QPushButton *HotChocolateButton;
    QPushButton *MochaButton;
    QPushButton *AddSugarButton;
    QPushButton *BothButton;
    QPushButton *SecundairyButton;
    QPushButton *PrimaryButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *OutputLayout;
    QLabel *OutputSubLabel;
    QLabel *OutputLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(455, 304);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 140, 431, 148));
        MenuLayout = new QGridLayout(gridLayoutWidget);
        MenuLayout->setObjectName("MenuLayout");
        MenuLayout->setContentsMargins(0, 0, 0, 0);
        CappucinoButton = new QPushButton(gridLayoutWidget);
        CappucinoButton->setObjectName("CappucinoButton");

        MenuLayout->addWidget(CappucinoButton, 2, 0, 1, 1);

        MenuLabel = new QLabel(gridLayoutWidget);
        MenuLabel->setObjectName("MenuLabel");
        MenuLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        MenuLayout->addWidget(MenuLabel, 0, 0, 1, 1);

        EspressoButton = new QPushButton(gridLayoutWidget);
        EspressoButton->setObjectName("EspressoButton");

        MenuLayout->addWidget(EspressoButton, 1, 0, 1, 1);

        LatteMacchiatoButton = new QPushButton(gridLayoutWidget);
        LatteMacchiatoButton->setObjectName("LatteMacchiatoButton");

        MenuLayout->addWidget(LatteMacchiatoButton, 2, 1, 1, 1);

        OptionsLabel = new QLabel(gridLayoutWidget);
        OptionsLabel->setObjectName("OptionsLabel");
        OptionsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        MenuLayout->addWidget(OptionsLabel, 0, 3, 1, 1);

        InvisibleLabel = new QLabel(gridLayoutWidget);
        InvisibleLabel->setObjectName("InvisibleLabel");

        MenuLayout->addWidget(InvisibleLabel, 0, 2, 1, 1);

        AmericanoButton = new QPushButton(gridLayoutWidget);
        AmericanoButton->setObjectName("AmericanoButton");

        MenuLayout->addWidget(AmericanoButton, 1, 1, 1, 1);

        DecafButton = new QPushButton(gridLayoutWidget);
        DecafButton->setObjectName("DecafButton");

        MenuLayout->addWidget(DecafButton, 1, 3, 1, 1);

        HotChocolateButton = new QPushButton(gridLayoutWidget);
        HotChocolateButton->setObjectName("HotChocolateButton");

        MenuLayout->addWidget(HotChocolateButton, 3, 0, 1, 1);

        MochaButton = new QPushButton(gridLayoutWidget);
        MochaButton->setObjectName("MochaButton");

        MenuLayout->addWidget(MochaButton, 3, 1, 1, 1);

        AddSugarButton = new QPushButton(gridLayoutWidget);
        AddSugarButton->setObjectName("AddSugarButton");

        MenuLayout->addWidget(AddSugarButton, 2, 3, 1, 1);

        BothButton = new QPushButton(gridLayoutWidget);
        BothButton->setObjectName("BothButton");

        MenuLayout->addWidget(BothButton, 3, 3, 1, 1);

        SecundairyButton = new QPushButton(centralwidget);
        SecundairyButton->setObjectName("SecundairyButton");
        SecundairyButton->setGeometry(QRect(320, 50, 121, 31));
        PrimaryButton = new QPushButton(centralwidget);
        PrimaryButton->setObjectName("PrimaryButton");
        PrimaryButton->setGeometry(QRect(320, 10, 121, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 291, 111));
        OutputLayout = new QVBoxLayout(verticalLayoutWidget);
        OutputLayout->setSpacing(0);
        OutputLayout->setObjectName("OutputLayout");
        OutputLayout->setContentsMargins(10, 0, 0, 0);
        OutputSubLabel = new QLabel(verticalLayoutWidget);
        OutputSubLabel->setObjectName("OutputSubLabel");
        QFont font;
        font.setPointSize(10);
        OutputSubLabel->setFont(font);
        OutputSubLabel->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        OutputLayout->addWidget(OutputSubLabel);

        OutputLabel = new QLabel(verticalLayoutWidget);
        OutputLabel->setObjectName("OutputLabel");
        QFont font1;
        font1.setPointSize(17);
        OutputLabel->setFont(font1);
        OutputLabel->setTextFormat(Qt::TextFormat::AutoText);
        OutputLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        OutputLayout->addWidget(OutputLabel);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CappucinoButton->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        MenuLabel->setText(QCoreApplication::translate("MainWindow", "Coffee Menu", nullptr));
        EspressoButton->setText(QCoreApplication::translate("MainWindow", "Espresso", nullptr));
        LatteMacchiatoButton->setText(QCoreApplication::translate("MainWindow", "Latte Macchiato", nullptr));
        OptionsLabel->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        InvisibleLabel->setText(QString());
        AmericanoButton->setText(QCoreApplication::translate("MainWindow", "Americano", nullptr));
        DecafButton->setText(QCoreApplication::translate("MainWindow", "Decaf", nullptr));
        HotChocolateButton->setText(QCoreApplication::translate("MainWindow", "Hot Chocolate", nullptr));
        MochaButton->setText(QCoreApplication::translate("MainWindow", "Mocha", nullptr));
        AddSugarButton->setText(QCoreApplication::translate("MainWindow", "Add Sugar", nullptr));
        BothButton->setText(QCoreApplication::translate("MainWindow", "Decaf + Sugar", nullptr));
        SecundairyButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        PrimaryButton->setText(QCoreApplication::translate("MainWindow", "Insert Coin (99)", nullptr));
        OutputSubLabel->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        OutputLabel->setText(QCoreApplication::translate("MainWindow", "Insert a Coin to start...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
