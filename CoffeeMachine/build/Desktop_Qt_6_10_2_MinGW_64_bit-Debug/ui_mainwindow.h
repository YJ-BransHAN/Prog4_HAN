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
#include <QtWidgets/QButtonGroup>
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
    QPushButton *SugarButton;
    QPushButton *SweetnerButton;
    QLabel *MenuLabel;
    QPushButton *LatteMacchiatoButton;
    QPushButton *HotChocolateButton;
    QPushButton *MochaButton;
    QPushButton *AmericanoButton;
    QPushButton *EspressoButton;
    QPushButton *NoneButton;
    QPushButton *CappucinoButton;
    QLabel *InvisibleLabel;
    QLabel *OptionsLabel;
    QPushButton *SecundairyButton;
    QPushButton *PrimaryButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *OutputLayout;
    QLabel *OutputSubLabel;
    QLabel *OutputLabel;
    QButtonGroup *OptionsGroup;
    QButtonGroup *CoffeeGroup;

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
        SugarButton = new QPushButton(gridLayoutWidget);
        OptionsGroup = new QButtonGroup(MainWindow);
        OptionsGroup->setObjectName("OptionsGroup");
        OptionsGroup->setExclusive(false);
        OptionsGroup->addButton(SugarButton);
        SugarButton->setObjectName("SugarButton");
        SugarButton->setEnabled(false);
        SugarButton->setCheckable(false);
        SugarButton->setAutoExclusive(false);

        MenuLayout->addWidget(SugarButton, 1, 3, 1, 1);

        SweetnerButton = new QPushButton(gridLayoutWidget);
        OptionsGroup->addButton(SweetnerButton);
        SweetnerButton->setObjectName("SweetnerButton");
        SweetnerButton->setEnabled(false);
        SweetnerButton->setCheckable(false);
        SweetnerButton->setAutoExclusive(false);

        MenuLayout->addWidget(SweetnerButton, 2, 3, 1, 1);

        MenuLabel = new QLabel(gridLayoutWidget);
        MenuLabel->setObjectName("MenuLabel");
        MenuLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        MenuLayout->addWidget(MenuLabel, 0, 0, 1, 1);

        LatteMacchiatoButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup = new QButtonGroup(MainWindow);
        CoffeeGroup->setObjectName("CoffeeGroup");
        CoffeeGroup->setExclusive(false);
        CoffeeGroup->addButton(LatteMacchiatoButton);
        LatteMacchiatoButton->setObjectName("LatteMacchiatoButton");
        LatteMacchiatoButton->setEnabled(false);
        LatteMacchiatoButton->setCheckable(false);
        LatteMacchiatoButton->setAutoRepeat(false);
        LatteMacchiatoButton->setAutoExclusive(false);

        MenuLayout->addWidget(LatteMacchiatoButton, 2, 1, 1, 1);

        HotChocolateButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup->addButton(HotChocolateButton);
        HotChocolateButton->setObjectName("HotChocolateButton");
        HotChocolateButton->setEnabled(false);
        HotChocolateButton->setCheckable(false);
        HotChocolateButton->setAutoRepeat(false);
        HotChocolateButton->setAutoExclusive(false);

        MenuLayout->addWidget(HotChocolateButton, 3, 0, 1, 1);

        MochaButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup->addButton(MochaButton);
        MochaButton->setObjectName("MochaButton");
        MochaButton->setEnabled(false);
        MochaButton->setCheckable(false);
        MochaButton->setAutoRepeat(false);
        MochaButton->setAutoExclusive(false);

        MenuLayout->addWidget(MochaButton, 3, 1, 1, 1);

        AmericanoButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup->addButton(AmericanoButton);
        AmericanoButton->setObjectName("AmericanoButton");
        AmericanoButton->setEnabled(false);
        AmericanoButton->setCheckable(false);
        AmericanoButton->setAutoRepeat(false);
        AmericanoButton->setAutoExclusive(false);

        MenuLayout->addWidget(AmericanoButton, 1, 1, 1, 1);

        EspressoButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup->addButton(EspressoButton);
        EspressoButton->setObjectName("EspressoButton");
        EspressoButton->setEnabled(false);
        EspressoButton->setCheckable(false);
        EspressoButton->setAutoRepeat(false);
        EspressoButton->setAutoExclusive(false);

        MenuLayout->addWidget(EspressoButton, 1, 0, 1, 1);

        NoneButton = new QPushButton(gridLayoutWidget);
        OptionsGroup->addButton(NoneButton);
        NoneButton->setObjectName("NoneButton");
        NoneButton->setEnabled(false);
        NoneButton->setCheckable(false);
        NoneButton->setAutoExclusive(false);

        MenuLayout->addWidget(NoneButton, 3, 3, 1, 1);

        CappucinoButton = new QPushButton(gridLayoutWidget);
        CoffeeGroup->addButton(CappucinoButton);
        CappucinoButton->setObjectName("CappucinoButton");
        CappucinoButton->setEnabled(false);
        CappucinoButton->setCheckable(false);
        CappucinoButton->setAutoRepeat(false);
        CappucinoButton->setAutoExclusive(false);

        MenuLayout->addWidget(CappucinoButton, 2, 0, 1, 1);

        InvisibleLabel = new QLabel(gridLayoutWidget);
        InvisibleLabel->setObjectName("InvisibleLabel");

        MenuLayout->addWidget(InvisibleLabel, 0, 2, 1, 1);

        OptionsLabel = new QLabel(gridLayoutWidget);
        OptionsLabel->setObjectName("OptionsLabel");
        OptionsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        MenuLayout->addWidget(OptionsLabel, 0, 3, 1, 1);

        SecundairyButton = new QPushButton(centralwidget);
        SecundairyButton->setObjectName("SecundairyButton");
        SecundairyButton->setGeometry(QRect(320, 50, 121, 31));
        PrimaryButton = new QPushButton(centralwidget);
        PrimaryButton->setObjectName("PrimaryButton");
        PrimaryButton->setGeometry(QRect(320, 10, 121, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 291, 121));
        OutputLayout = new QVBoxLayout(verticalLayoutWidget);
        OutputLayout->setSpacing(0);
        OutputLayout->setObjectName("OutputLayout");
        OutputLayout->setContentsMargins(0, 0, 0, 0);
        OutputSubLabel = new QLabel(verticalLayoutWidget);
        OutputSubLabel->setObjectName("OutputSubLabel");
        QFont font;
        font.setPointSize(8);
        OutputSubLabel->setFont(font);
        OutputSubLabel->setStyleSheet(QString::fromUtf8("color: white; background-color: black; padding-left: 10px ;"));
        OutputSubLabel->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        OutputSubLabel->setMargin(0);
        OutputSubLabel->setIndent(0);

        OutputLayout->addWidget(OutputSubLabel);

        OutputLabel = new QLabel(verticalLayoutWidget);
        OutputLabel->setObjectName("OutputLabel");
        QFont font1;
        font1.setPointSize(15);
        OutputLabel->setFont(font1);
        OutputLabel->setToolTipDuration(-1);
        OutputLabel->setStyleSheet(QString::fromUtf8("color: white; background-color: black; padding-left: 10px ;"));
        OutputLabel->setTextFormat(Qt::TextFormat::AutoText);
        OutputLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        OutputLabel->setIndent(0);

        OutputLayout->addWidget(OutputLabel);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SugarButton->setText(QCoreApplication::translate("MainWindow", "Sugar", nullptr));
        SweetnerButton->setText(QCoreApplication::translate("MainWindow", "Sweetner", nullptr));
        MenuLabel->setText(QCoreApplication::translate("MainWindow", "Coffee Menu", nullptr));
        LatteMacchiatoButton->setText(QCoreApplication::translate("MainWindow", "Latte Macchiato", nullptr));
        HotChocolateButton->setText(QCoreApplication::translate("MainWindow", "Hot Chocolate", nullptr));
        MochaButton->setText(QCoreApplication::translate("MainWindow", "Mocha", nullptr));
        AmericanoButton->setText(QCoreApplication::translate("MainWindow", "Americano", nullptr));
        EspressoButton->setText(QCoreApplication::translate("MainWindow", "Espresso", nullptr));
        NoneButton->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        CappucinoButton->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        InvisibleLabel->setText(QString());
        OptionsLabel->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        SecundairyButton->setText(QCoreApplication::translate("MainWindow", "Secundairy Button", nullptr));
        PrimaryButton->setText(QCoreApplication::translate("MainWindow", "Primary Button", nullptr));
        OutputSubLabel->setText(QCoreApplication::translate("MainWindow", "Output SubLabel", nullptr));
        OutputLabel->setText(QCoreApplication::translate("MainWindow", "Output Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
