#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register_bank.h"
#include <QtWidgets>
#include <QDebug>
#include <QDate>
#include <QFile>
#include <QFileDialog>

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

void MainWindow::loadFromFile() {
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open .r5s"), "",
            tr("RISC5Sugar (*.r5s);;All Files (*)"));
    if (fileName.isEmpty())
            return;
        else {

            QFile file(fileName);

            if (!file.open(QIODevice::ReadOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }

            QDataStream in(&file);
            in.setVersion(QDataStream::Qt_4_5);
            ui->plainTextEdit->insertPlainText("lido");
            qDebug() << in;
    }
}
