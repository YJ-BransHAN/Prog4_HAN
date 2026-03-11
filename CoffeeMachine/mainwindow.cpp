#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QState>
#include <QPushButton>
#include <QTimer> //added for the timer in the "enjoy your coffee" state.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    coinWallet = 1; //Gives the user "x" coin(s)

    ui->setupUi(this);

//---------------------------------------------------------------------------------------------------------------------------------------// Configure StateMachine (CoffeeMachine)

    //Create QState objects for the StateMachine
    QState *s1 = new QState();
    QState *s2 = new QState();
    QState *s3 = new QState();
    QState *sFinalMessage = new QState();
    QState *sRestart = new QState();

    // Add states to the StateMachine
    CoffeeMachine.addState(sRestart);
    CoffeeMachine.addState(s1);
    CoffeeMachine.addState(s2);
    CoffeeMachine.addState(s3);
    CoffeeMachine.addState(sFinalMessage);

    // Set the starting state for the StateMachine
    CoffeeMachine.setInitialState(s1);

    // State transitions
    s1->addTransition(ui->PrimaryButton,&QPushButton::released, s2);
    s2->addTransition(ui->PrimaryButton,&QPushButton::released,s3);
    s2->addTransition(ui->SecundairyButton,&QPushButton::released,sRestart);
    s3->addTransition(ui->PrimaryButton,&QPushButton::released,sFinalMessage);
    s3->addTransition(ui->SecundairyButton,&QPushButton::released,sRestart);

    sFinalMessage->addTransition(this,&MainWindow::finalMessage,s1);
    sRestart->addTransition(ui->SecundairyButton,&QPushButton::released,s1);

    // State connections (main and exit)
    connect(s1,&QState::entered,this,&MainWindow::s1_main);
    connect(s1,&QState::exited,this,&MainWindow::s1_exit);
    connect(s2,&QState::entered,this,&MainWindow::s2_main);
    connect(s2,&QState::exited,this,&MainWindow::s2_exit);
    connect(s3,&QState::entered,this,&MainWindow::s3_main);
    connect(s3,&QState::exited,this,&MainWindow::s3_exit);

    connect(sFinalMessage,&QState::entered,this,&MainWindow::sFinalMessage_main);
    connect(sFinalMessage,&QState::exited,this,&MainWindow::sFinalMessage_exit);
    connect(sRestart,&QState::entered,this,&MainWindow::sRestart_main);
    connect(sRestart,&QState::exited,this,&MainWindow::sRestart_exit);

    //Start the StateMachine with configuration above.
    CoffeeMachine.start();
//---------------------------------------------------------------------------------------------------------------------------------------// END

//---------------------------------------------------------------------------------------------------------------------------------------// LIVE coffee/option selection logic

    // Coffee Selection
    for(QAbstractButton* button : ui->CoffeeGroup->buttons())
    {
        connect(button,&QAbstractButton::clicked,[this,button]()
                {
                    coffeePressed = button->text();
                    ui->OutputSubLabel->setText(QString("Coffee Selected: %1").arg(coffeePressed));
                    ui->PrimaryButton->setEnabled(true);
                });
    }

    // LIVE Option selection
    for(QAbstractButton* button : ui->OptionsGroup->buttons())
    {
        connect(button,&QAbstractButton::clicked,[this,button]()
                {
                    optionPressed = button->text();
                    ui->OutputSubLabel->setText(QString("Option Selected: %1").arg(optionPressed));
                    ui->PrimaryButton->setEnabled(true);
                });
    }

//---------------------------------------------------------------------------------------------------------------------------------------// END

}

MainWindow::~MainWindow()
{
    delete ui;
}

//---------------------------------------------------------------------------------------------------------------------------------------// Logic in each state (main and exit)

//STATE 1 - Start (Insert a coin)
void MainWindow::s1_main()
{
    ui->PrimaryButton->setEnabled(true);

    ui->OutputSubLabel->setText("Welcome!");
    ui->OutputLabel->setText("Insert a Coin to start...");

    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(coinWallet));
    ui->SecundairyButton->setText(QString("Collect Coin (%1)").arg(coinCollect));

    if(coinWallet <= 0)
    {
        ui->PrimaryButton->setEnabled(false);
        ui->SecundairyButton->setEnabled(false);

        ui->OutputSubLabel->setText("You have no coins left.");
        ui->OutputLabel->setText("Please exit the program");
    }
}

void MainWindow::s1_exit()
{
    ui->PrimaryButton->setText("OK");
    ui->SecundairyButton->setText("Restart");

    coinWallet--;
}

// STATE 2 - Select coffee
void MainWindow::s2_main()
{
    for(QAbstractButton* button : ui->CoffeeGroup->buttons())
        button->setEnabled(true);

    ui->PrimaryButton->setEnabled(false);

    ui->OutputSubLabel->setText("Coffee Selected:");
    ui->OutputLabel->setText("Select coffee and press OK");
}

void MainWindow::s2_exit()
{
    for(QAbstractButton* button : ui->CoffeeGroup->buttons())
        button->setEnabled(false);
}

// STATE 3 - Select option
void MainWindow::s3_main()
{
    for(QAbstractButton* button : ui->OptionsGroup->buttons())
        button->setEnabled(true);

    ui->PrimaryButton->setEnabled(false);

    ui->OutputSubLabel->setText("Option Selected:");
    ui->OutputLabel->setText("Select option and press OK");
}

void MainWindow::s3_exit()
{
    for(QAbstractButton* button : ui->OptionsGroup->buttons())
        button->setEnabled(false);
}

// STATE Enjoy (timed message as a finish)
void MainWindow::sFinalMessage_main()
{
    QString message;

    ui->PrimaryButton->setEnabled(false);
    ui->SecundairyButton->setEnabled(false);

    if(optionPressed == "None")
        message = QString("Enjoy your %1!").arg(coffeePressed);
    else
        message = QString("Enjoy your %1 with %2!").arg(coffeePressed, optionPressed);

    ui->OutputSubLabel->setText(message);
    ui->OutputLabel->setText("Thank you!");

    // 3 second timer using <QTimer> library before going back to s1 state
    QTimer::singleShot(3000,this,[this]()
                       {
                           emit finalMessage();
                       });
}

void MainWindow::sFinalMessage_exit()
{
    ui->PrimaryButton->setEnabled(true);
    ui->SecundairyButton->setEnabled(true);
}

// STATE Restart
void MainWindow::sRestart_main()
{
    ui->PrimaryButton->setEnabled(true);
    coinCollect = 1;

    ui->OutputSubLabel->setText("Aborted!");
    ui->OutputLabel->setText("Take back your coin");

    ui->PrimaryButton->setText(QString("Insert Coin (%1)").arg(coinWallet));
    ui->SecundairyButton->setText(QString("Collect Coin (%1)").arg(coinCollect));

}

void MainWindow::sRestart_exit()
{
    coinCollect = 0;
    coinWallet++;
}

//---------------------------------------------------------------------------------------------------------------------------------------// END
