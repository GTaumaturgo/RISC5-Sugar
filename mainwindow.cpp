#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registerbank.h"
#include <QDebug>
#include <QDate>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);


}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    RegisterBank* reg = new RegisterBank();
    for(auto& p: reg->ids){
        ui->plainTextEdit->insertPlainText(" ");
        ui->plainTextEdit->insertPlainText(p.first.c_str());
        ui->plainTextEdit->insertPlainText(" ");
        ui->plainTextEdit->insertPlainText(std::to_string(p.second).c_str());
        ui->plainTextEdit->insertPlainText("\n");
    }


}

