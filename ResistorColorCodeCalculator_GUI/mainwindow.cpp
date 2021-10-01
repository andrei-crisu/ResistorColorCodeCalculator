#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"customgraphicsitem.h"
#include<QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene=new CustomScene(this);
    ui->resistorDisplay->setScene(scene);
    CustomGraphicsItem *item=new CustomGraphicsItem();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
    QTimer timer(this);
    timer.singleShot(10,this,&MainWindow::onTimer);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}

void MainWindow::on_calculator_clicked()
{

}


void MainWindow::on_settings_clicked()
{

}


void MainWindow::on_about_clicked()
{

}

void MainWindow::onTimer()
{
    ui->resistorDisplay->fitInView(scene->sceneRect(),Qt::KeepAspectRatio);
}

