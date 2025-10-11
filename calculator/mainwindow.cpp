#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QPushButton*> digits = {
        ui->pushButton_0, ui->pushButton_1, ui->pushButton_2,
        ui->pushButton_3, ui->pushButton_4, ui->pushButton_5,
        ui->pushButton_6, ui->pushButton_7, ui->pushButton_8,
        ui->pushButton_9
    };

    for (auto *btn : digits)
        connect(btn, &QPushButton::clicked, this, &MainWindow::digit_pressed);

    connect(ui->pushButton_plus, &QPushButton::clicked, [=](){
        firstNum = currentInput.toDouble();
        currentInput.clear();
        operation = "+";
    });

    connect(ui->pushButton_minus, &QPushButton::clicked, [=](){
        firstNum = currentInput.toDouble();
        currentInput.clear();
        operation = "-";
    });

    connect(ui->pushButton_mul, &QPushButton::clicked, [=](){
        firstNum = currentInput.toDouble();
        currentInput.clear();
        operation = "*";
    });

    connect(ui->pushButton_div, &QPushButton::clicked, [=](){
        firstNum = currentInput.toDouble();
        currentInput.clear();
        operation = "/";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton*)sender();
    currentInput += button->text();
    ui->lineEdit-setText(currentInput);
}

void MainWindow::on_pushButton_clear_clicked()
{
    currentInput.clear();
    ui->lineEdit-clear();
    operation.clear();
}

void MainWindow::on_pushButton_equal_clicked()
{
    double secondNum = currentInput.toDouble();
    double result = 0;

    if (operation == "+") result = firstNum + secondNum;
    else if (operation == "-") result = firstNum - secondNum;
    else if (operation == "*") result = firstNum * secondNum;
    else if (operation == "/") result = (secondNum != 0) ? firstNUm / secondNum;

    ui->lineEdit->setText(QString::number(result));
    currentInput = QString::number(result);
}
