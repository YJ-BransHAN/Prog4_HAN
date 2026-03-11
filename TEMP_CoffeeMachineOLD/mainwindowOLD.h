#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStateMachine> //nvt

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:

    //add CoffeeSelected and OptionSelected signal to store and print to the widget
    //void CoffeeSelected();
    //void OptionSelected();

private slots:



    // Main States
    void sRestart_main(void);
    void sNoCoins_main(void);
    void s1_main(void);
    void s2_main(void);
    void s3_main(void);

    // add exit to send the message "Wait a moment.... Enjoy your coffee!"
    void sRestart_exit(void);
    void sNoCoins_exit(void);
    void s1_exit(void);
    void s3_exit(void);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //nvt
    QStateMachine CoffeeMachine;

    //mvt
    int CoinAmount = 99;
    int CoinToCollect = 0;

    QString Coffee;
    QString Option;
};

#endif // MAINWINDOW_H
