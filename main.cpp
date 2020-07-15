#include "mainwindow.h"
#include <QApplication>
#include <QApplication>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("实习挣扎组");  // 加上一个标题
    w.resize(250,150); // 设定尺
    QLabel* labelTemperatureText = new QLabel(&w);
    labelTemperatureText->setText("T-");
    labelTemperatureText->setGeometry(0, 50, 50, 50);
    labelTemperatureText->setStyleSheet("font-size: 66px; color: rgb(255,0,255)");
    QLabel* labelTemperatureData = new QLabel(&w);
    labelTemperatureData->setText("36.5°C");
    labelTemperatureData->setGeometry(50,0,150,150);
    labelTemperatureData->setStyleSheet("font-size:66px;color:rgb(255,0,255)");
    w.setStyleSheet("background-color: black");
    w.show();
    return a.exec();
}
