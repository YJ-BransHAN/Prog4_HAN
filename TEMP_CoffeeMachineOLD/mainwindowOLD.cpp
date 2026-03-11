#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //nvt
    QState *sRestart = new QState();
    QState *sNoCoins = new QState();

    QState *s1 = new QState();
    QState *s2 = new QState();
    QState *s3 = new QState();


    //Start (insert coin)
    if (CoinAmount < 0)
    {
        s1->addTransition(ui->PrimaryButton,  &QPushButton::released, s2);
        sNoCoins->addTransition(ui->SecundairyButton,  &QPushButton::released, s1);
    }
    else
    {
        s1->addTransition(ui->PrimaryButton,  &QPushButton::released, sNoCoins);
    }


    //Restart
    s2->addTransition(ui->SecundairyButton, &QPushButton::released, sRestart);
    s3->addTransition(ui->SecundairyButton, &QPushButton::released, sRestart);
    sRestart->addTransition(ui->SecundairyButton, &QPushButton::released, s1);



    //Coffee Selection
    connect(ui->EspressoButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    connect(ui->AmericanoButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    connect(ui->CappucinoButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    connect(ui->LatteMacchiatoButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    connect(ui->HotChocolateButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    connect(ui->MochaButton, &QPushButton::released, this, &MainWindow::CoffeeSelected());
    s2->addTransition(this, &MainWindow::CoffeeSelected(), s3);

    //Choose extra option
    connect(ui->DecafButton, &QPushButton::released, this, &MainWindow::OptionSelected());
    connect(ui->AddSugarButton, &QPushButton::released, this, &MainWindow::OptionSelected());
    connect(ui->BothButton, &QPushButton::released, this, &MainWindow::OptionSelected());
    s3->addTransition(this, &MainWindow:: OptionSelected(), s1);

    //nvt
    CoffeeMachine.addState(sRestart);
    CoffeeMachine.addState(sNoCoins);

    CoffeeMachine.addState(s1);
    CoffeeMachine.addState(s2);
    CoffeeMachine.addState(s3);
    CoffeeMachine.setInitialState(s1);

    //nvt
    connect(sRestart, &QState::entered, this, &MainWindow::sRestart_main);
    connect(sRestart, &QState::entered, this, &MainWindow::sRestart_exit);
    connect(sNoCoins, &QState::entered, this, &MainWindow::sNoCoins_main);
    connect(s1,&QState::entered, this, &MainWindow::s1_main);
    connect(s1, &QState::entered, this, &MainWindow::s1_exit);
    connect(s2, &QState::entered, this, &MainWindow::s2_main);
    connect(s3, &QState::entered, this, &MainWindow::s3_main);
    connect(s3, &QState::exited, this, &MainWindow::s3_exit);

    CoffeeMachine.start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sRestart_main(void)
{
    CoinToCollect = 1;
    ui->OutputSubLabel->setText("Aborted!");
    ui->OutputLabel->setText("Take back your coin");
    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(CoinAmount));
    ui->SecundairyButton->setText(QString("Collect Coin (%1)").arg(CoinToCollect));

}

void MainWindow::CoffeeSelected()
{
    QPushButton * button = (QPushButton*)sender();
    QString Coffee = button->text();
}

void MainWindow::OptionSelected()
{
    QPushButton * button = (QPushButton*)sender();
    QString Option = button->text();
}

void MainWindow::sRestart_exit(void)
{
    CoinToCollect = 0;
    CoinAmount += 1;
}

void MainWindow::sNoCoins_main(void)
{
    CoinToCollect = 99;
    ui->OutputSubLabel->setText("You have no coins left.");
    ui->OutputLabel->setText("Have some on the house! :)");
}

void MainWindow::sNoCoins_exit(void)
{
    CoinAmount += 99;
}

void MainWindow::s1_main(void)
{
    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(CoinAmount));
}

void MainWindow::s1_exit(void)
{
    CoinAmount -= 1;

}

void MainWindow::s2_main(void)
{

    ui->OutputSubLabel->setText("Coffee Selected: (choose)" );
    ui->OutputLabel->setText("Select an option...");
    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(CoinAmount));
}

void MainWindow::s3_main(void)
{

    ui->OutputSubLabel->setText(QString("Coffee Select: %1").arg(Coffee));
    ui->OutputLabel->setText("Select an option...");
    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(CoinAmount));
    ui->SecundairyButton->setText(QString("Collect Coin (%1)").arg(CoinToCollect));
}

void MainWindow::s3_exit(void)
{


    ui->OutputSubLabel->setText("f");
    ui->OutputLabel->setText("f");
}

