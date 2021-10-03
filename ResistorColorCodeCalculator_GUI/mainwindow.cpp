#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),item(0,0,240,280,600,40)
{
    ui->setupUi(this);

    scene=new CustomScene(this);
    ui->resistorDisplay->setScene(scene);
    scene->addItem(&item);
    scene->setSceneRect(item.boundingRect());
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
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_about_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::onTimer()
{
    ui->resistorDisplay->fitInView(scene->sceneRect(),Qt::KeepAspectRatio);
    ui->lineEdit->setText(item.getStringResistorValue());
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    //when user select first band color
    item.setFirstBand(index);
    ui->lineEdit->setText(item.getStringResistorValue());
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    //when user select second band color
    item.setSecondBand(index);
    ui->lineEdit->setText(item.getStringResistorValue());
}


void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    //when user select third band color
    item.setThirdBand(index);
    ui->lineEdit->setText(item.getStringResistorValue());
}


void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    //when user select fourth band color
    item.setFourthBand(index);
    ui->lineEdit->setText(item.getStringResistorValue());
}


void MainWindow::on_home_clicked()
{
 ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_about_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_home_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_home_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_resistorColorComboBox_currentIndexChanged(int index)
{
    item.resistorColorType=index;
}

