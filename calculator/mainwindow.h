#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digit_pressed();
    void on_pushButton_clear_clicked();
    void on_pushButton_equal_clicked();

private:
    Ui::MainWindow *ui;
    QString currentInput;
    double firstNum;
    QString operation;
};

#endif

