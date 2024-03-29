#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_N1_clicked()
{
    switch (state)
    {
    case 0:
        number1+="1";
        break;
    case 1:
        number2+="1";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    switch (state)
    {
    case 0:
        number1+="2";
        break;
    case 1:
        number2+="2";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    switch (state)
    {
    case 0:
        number1+="3";
        break;
    case 1:
        number2+="3";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    switch (state)
    {
    case 0:
        number1+="4";
        break;
    case 1:
        number2+="4";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    switch (state)
    {
    case 0:
        number1+="5";
        break;
    case 1:
        number2+="5";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    switch (state)
    {
    case 0:
        number1+="6";
        break;
    case 1:
        number2+="6";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    switch (state)
    {
    case 0:
        number1+="7";
        break;
    case 1:
        number2+="7";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    switch (state)
    {
    case 0:
        number1+="8";
        break;
    case 1:
        number2+="8";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    switch (state)
    {
    case 0:
        number1+="9";
        break;
    case 1:
        number2+="9";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    switch (state)
    {
    case 0:
        number1+="0";
        break;
    case 1:
        number2+="0";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_add_clicked()
{
    if (number1 != "") {
        operand = 0;
        state = 1;
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    if (number1 != "") {
        operand = 1;
        state = 1;
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    if (number1 != "") {
        operand = 2;
        state = 1;
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    if (number1 != "") {
        operand = 3;
        state = 1;
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    switch (operand) {
    case 0:
        result = number1.toFloat() + number2.toFloat();
        break;
    case 1:
        result = number1.toFloat() - number2.toFloat();
        break;
    case 2:
        result = number1.toFloat() * number2.toFloat();
        break;
    case 3:
        result = number1.toFloat() / number2.toFloat();
        break;
    }
    clearAndEnterClickHandler();
}

void MainWindow::numberClickedHandler(){
    ui->num1->setText(number1);
    ui->num2->setText(number2);
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
}

void MainWindow::clearAndEnterClickHandler(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());

    if (button->objectName()=="clear"){
       number1 = "";
       number2 = "";
       result = 0;
       state = 0;
       resetLineEdits();
    }
    else
    {
    ui->result->setText(QString::number(result));
    ui->num1->setText(number1);
    ui->num2->setText(number2);
    }
}

void MainWindow::addSubMulDivClickHandler(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
}

void MainWindow::resetLineEdits(){
    ui->result->setText("");
    ui->num1->setText("");
    ui->num2->setText("");
}
