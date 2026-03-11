#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStateMachine>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // Main states
    void s1_main();
    void s1_exit();

    void s2_main();
    void s2_exit();

    void s3_main();
    void s3_exit();

    void sFinalMessage_main();
    void sFinalMessage_exit();

    // Sub states
    void sRestart_main();
    void sRestart_exit();

private:
    Ui::MainWindow *ui;

    QStateMachine CoffeeMachine;

    int coinWallet = 0; // Coin(s) the user has left
    int coinCollect = 0; // Coin waiting to be collected after cancelling

    QString coffeePressed; // Selected coffee button
    QString optionPressed; // Selected option button


signals:
    void finalMessage(); //Signal to go from STATE: "final message" to STATE: "s1" (after timer ends)
};

#endif
