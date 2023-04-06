
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "QSqlDatabase"

QString p;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainPlanWindow = new MainPlanWindow;
    createPlanWindow = new CreatePlanWindow;
    connect(createPlanWindow, &CreatePlanWindow::firstWindow, this, &MainWindow::show);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    db.setDatabaseName("./database/programs.db");
    if (db.open())
    {
        qDebug("open");
        query.exec("SELECT name FROM users");
        while (query.next()) {
            ui->user_menu->addItem(query.value(0).toString());
        }
    } else
    {
        qDebug("no open");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_create_new_clicked()
{
    ui->user_menu->addItem(ui->user_name->text());
    this->close();
    createPlanWindow->show();
    connect(this, &MainWindow::give_name, createPlanWindow, &CreatePlanWindow::get_name_slot);
    emit give_name(ui->user_name->text());
}


void MainWindow::on_load_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    db.setDatabaseName("./database/programs.db");
    if (db.open())
    {
//        qDebug() << "SELECT program FROM users WHERE name = " << ui->user_menu->currentText();
        QString quer = "SELECT program FROM users WHERE name = '" + ui->user_menu->currentText() + "'";
//        qDebug() << quer;
        query.exec(quer);
        while (query.next()) {
            p =query.value(0).toString();
        }
    } else
    {
        qDebug("no open");
    }
    this->close();
    mainPlanWindow->show();
    connect(this, &MainWindow::give_name, mainPlanWindow, &MainPlanWindow::get_name_slot);
    connect(this, &MainWindow::give_program, mainPlanWindow, &MainPlanWindow::get_program_slot);
    emit give_name(ui->user_menu->currentText());
//    qDebug() << p;
    emit give_program(p);
}

