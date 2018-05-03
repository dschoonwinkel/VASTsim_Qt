#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include <QPainter>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSettings settings("/home/daniel/Development/VAST-0.4.6/Demo/VASTsim_Qt/VASTsim.INI",
                       QSettings::IniFormat);
    std::cout << "MOVE_MODEL: " << settings.value("MOVE_MODEL").toInt() << std::endl;
}

void MainWindow::paintEvent(QPaintEvent *event) {

    QPainter painter(this);

    painter.setWindow(QRect(-50, -50, 100, 100));

    QRect rect(-40,-40,80,80);
    painter.drawRect(rect);



}

MainWindow::~MainWindow()
{
    delete ui;
}
