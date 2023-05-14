#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_ok_clicked();
    void on_btn_clear_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Secondwindow *Secondwindow;
};
#endif // MAINWINDOW_H
