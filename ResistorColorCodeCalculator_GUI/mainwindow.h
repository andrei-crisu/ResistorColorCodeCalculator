#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"customscene.h"

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

public slots:
    void onTimer();

private:
    Ui::MainWindow *ui;
    CustomScene *scene;
};
#endif // MAINWINDOW_H
