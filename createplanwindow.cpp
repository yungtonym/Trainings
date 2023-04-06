#include "createplanwindow.h"
#include "ui_createplanwindow.h"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QDebug"

QString name;
QString program;
int days;

void createDB()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    db.setDatabaseName("./database/programs.db");
    if (db.open())
    {
        qDebug("open");
        query.prepare("INSERT INTO users (name, program, days) VALUES (?, ?, ?)");
        query.addBindValue(name);
        query.addBindValue(program);
        query.addBindValue(days);
        query.exec();
    } else
    {
        qDebug("no open");
    }
}

CreatePlanWindow::CreatePlanWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreatePlanWindow)
{
    ui->setupUi(this);
    ui->goal_menu->addItem("Похудеть");
    ui->goal_menu->addItem("Мышечная масса и сила");
    ui->goal_menu->addItem("Рельеф");
    ui->physical_level->addItem("Минимальный");
    ui->physical_level->addItem("Средний");
    ui->physical_level->addItem("Повышенный");
    ui->number_of_trainings->addItem("3");
    ui->number_of_trainings->addItem("4");
    ui->number_of_trainings->addItem("5");
}

CreatePlanWindow::~CreatePlanWindow()
{
    delete ui;
}

void CreatePlanWindow::on_create_button_clicked()
{
    if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_beg_light";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_mid_light";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_pro_light";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_beg_light";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_beg_light";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_mid_light";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_pro_light";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_beg_mid";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_mid_light";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 0 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_pro_light";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_beg_mid";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_beg_mid";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_mid_mid";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_mid_mid";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_mid_mid";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_pro_mid";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_pro_mid";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 1 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_pro_mid";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_beg_rare";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_beg_rare";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 0 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_beg_rare";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_mid_rare";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_mid_rare";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 1 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_mid_rare";
        days = 5;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 0)
    {
        program = "program5_pro_rare";
        days = 3;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 1)
    {
        program = "program5_pro_rare";
        days = 4;
        qDebug() << program;
    }
    else if (ui->goal_menu->currentIndex() == 2 && ui->physical_level->currentIndex() == 2 && ui->number_of_trainings->currentIndex() == 2)
    {
        program = "program5_pro_rare";
        days = 5;
        qDebug() << program;
    }
    createDB();
    this->close();
    emit firstWindow();
}

void CreatePlanWindow::get_name_slot(QString a)
{
    ui->label_4->setText("Заполните поля, " + a);
    name = a;
}

