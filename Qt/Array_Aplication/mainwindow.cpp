#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Arrays.h"
#include <QMessageBox>
#include <string>
using   namespace std;
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

int *arr=new int;
char *str=new char;
int sizeArr;
void MainWindow::on_pushButton_clicked()
{
   sizeArr=ui->lineEdit->text().toFloat();
    createArray(arr, sizeArr);

    QMessageBox::about(this, "", "Массив успешно создан");
}

void MainWindow::on_pushButton_2_clicked()
{
    printArray(arr,sizeArr,str);

    QMessageBox::about(this, "", str);
}

