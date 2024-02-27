#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGameInfoText("Select playtime and press START GAME", 10);
    player1Time = 100;
    player2Time = 100;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameInfoText(QString teksti, short fontti)
{
    ui->label->setText(teksti);
    QFont font;
    font.setPointSize(fontti);
    font.setBold(true);
    ui->label->setFont(font);
}

void MainWindow::updateProgressBar(){
    pQTimer->start(1000);

    switch (gameTime) {
    case 1:
        pQTimer->start(1200);
        break;
    case 2:
        pQTimer->start(3000);
        break;
    }
}

void MainWindow::timeout()
{
    switch (currentPlayer) {
    case 1:
            player1Time--;
            ui->progressBar_1->setValue(player1Time);
            if(player1Time==0)
            {
                setGameInfoText("Player 2 won!!", 15);
            }
        break;
    case 2:
            player2Time--;
            ui->progressBar_2->setValue(player2Time);
            if(player2Time==0)
            {
                setGameInfoText("Player 1 won!!", 15);
            }
        break;
    }
}

void MainWindow::on_switchPlayerButton_1_clicked()
{
    pQTimer->stop();
    currentPlayer = 2;
    updateProgressBar();
}


void MainWindow::on_switchPlayerButton_2_clicked()
{
    pQTimer->stop();
    currentPlayer = 1;
    updateProgressBar();
}


void MainWindow::on_timerButton_1_clicked()
{
    setGameInfoText("Ready to play", 10);

    ui->progressBar_1->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
    gameTime = 1;
}


void MainWindow::on_timerButton_2_clicked()
{
    setGameInfoText("Ready to play", 10);

    ui->progressBar_1->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
    gameTime = 2;
}


void MainWindow::on_startButton_clicked()
{
    setGameInfoText("Game ongoing", 10);
    pQTimer = new QTimer();
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    updateProgressBar();
}


void MainWindow::on_stopButton_clicked()
{
    pQTimer->stop();
    delete pQTimer;
    pQTimer = nullptr;
    setGameInfoText("Select time and press start to start new game", 10);
    player1Time = 100;
    player2Time = 100;
}
