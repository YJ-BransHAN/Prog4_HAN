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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QLabel *label_2;
    QPlainTextEdit *userInfo;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pbExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(428, 377);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        pb1 = new QPushButton(groupBox);
        pb1->setObjectName("pb1");

        horizontalLayout->addWidget(pb1);

        pb2 = new QPushButton(groupBox);
        pb2->setObjectName("pb2");

        horizontalLayout->addWidget(pb2);

        pb3 = new QPushButton(groupBox);
        pb3->setObjectName("pb3");

        horizontalLayout->addWidget(pb3);


        verticalLayout->addWidget(groupBox);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        userInfo = new QPlainTextEdit(centralwidget);
        userInfo->setObjectName("userInfo");

        verticalLayout->addWidget(userInfo);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        pbExit = new QPushButton(centralwidget);
        pbExit->setObjectName("pbExit");

        verticalLayout->addWidget(pbExit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 428, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pbExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QStateMachine - example", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Generate transitions", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pb2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pb3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "User info", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "State logger", nullptr));
        pbExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
