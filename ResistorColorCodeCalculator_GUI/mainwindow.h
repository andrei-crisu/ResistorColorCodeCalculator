#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"customscene.h"
#include"customgraphicsitem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void resizeEvent(QResizeEvent *event)override;
    void closeEvent(QCloseEvent *event)override;

private slots:
    void on_calculator_clicked();

    void on_settings_clicked();

    void on_about_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_home_clicked();

    void on_about_2_clicked();

    void on_home_2_clicked();

    void on_home_3_clicked();

    void on_resistorColorComboBox_currentIndexChanged(int index);

public slots:
    void onTimer();

private:
    Ui::MainWindow *ui;
    CustomScene *scene;
    CustomGraphicsItem item;
};
#endif // MAINWINDOW_H
