
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainplanwindow.h"
#include "createplanwindow.h"



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

    void on_create_new_clicked();

    void on_load_clicked();

private:
    Ui::MainWindow *ui;
    MainPlanWindow *mainPlanWindow;
    CreatePlanWindow *createPlanWindow;

signals:
    void give_name(QString);
    void give_program(QString);
    void give_days(int);
};

#endif // MAINWINDOW_H
