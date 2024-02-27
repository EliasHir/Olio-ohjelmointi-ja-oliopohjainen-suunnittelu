#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateProgressBar();
    void setGameInfoText(QString,short);

public slots:
    void timeout();

private slots:


    void on_switchPlayerButton_1_clicked();

    void on_switchPlayerButton_2_clicked();

    void on_timerButton_1_clicked();

    void on_timerButton_2_clicked();

    void on_startButton_clicked();

    void on_stopButton_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time = 1;
    short player2Time = 2;
    short currentPlayer = 1;
    short gameTime = 0;
    QTimer*pQTimer;
};
#endif // MAINWINDOW_H
