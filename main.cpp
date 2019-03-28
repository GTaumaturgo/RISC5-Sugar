#include "mainwindow.h"
#include <QApplication>
#include "instruction_decoder.h"

int main(int argc, char *argv[]) {
    instruction_decoder::decode(17);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
