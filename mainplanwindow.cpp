#include "mainplanwindow.h"
#include "ui_mainplanwindow.h"
#include "QDialog"
#include "exercise.h"
#include <QPixmap>
#include "QSqlDatabase"
#include "QDebug"
#include "QSqlQuery"
#include <QDir>
#include <QStandardPaths>

int w = 200;
int h = 200;

extern QString exers[25];
extern QString duration[25];
extern QString path[25];

QString loc_name;
QString loc_program;
QString temp;

void createDataBase()
{
    int i;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    db.setDatabaseName("./database/programs.db");
    if (db.open())
    {
        temp = "SELECT Exercise FROM " + loc_program;
        qDebug("open");
        query.exec(temp);
        qDebug() << temp;
        i = 0;
        while (query.next()) {
            exers[i] = query.value(0).toString();
            //            qDebug() << exers5_beg_light[i];
            i++;
        }
        temp = "SELECT Duration FROM " + loc_program;
        query.exec(temp);
        i = 0;
        while (query.next()) {
            duration[i] = query.value(0).toString();
            //            qDebug() << exers5_beg_light[i];
            i++;
        }
        temp = "SELECT Path FROM " + loc_program;
        query.exec(temp);
        i = 0;
        while (query.next()) {
            path[i] = query.value(0).toString();
            //            qDebug() << exers5_beg_light[i];
            i++;
        }
    } else
    {
        qDebug("no open");
    }
}

MainPlanWindow::MainPlanWindow (QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPlanWindow)
{
    ui->setupUi(this);
}

MainPlanWindow::~MainPlanWindow()
{
    delete ui;
}

void MainPlanWindow::on_monday_1_clicked()
{
//    qDebug() << path5_beg_light[0];
    Exercise ex1(exers[0], duration[0], path[0]);
    Exercise ex2(exers[1], duration[1], path[1]);
    Exercise ex3(exers[2], duration[2], path[2]);
    Exercise ex4(exers[3], duration[3], path[3]);
    Exercise ex5(exers[4], duration[4], path[4]);
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}


void MainPlanWindow::on_thirthday_1_clicked()
{
    Exercise ex1(exers[5], duration[5], path[5]);
    Exercise ex2(exers[6], duration[6], path[6]);
    Exercise ex3(exers[7], duration[7], path[7]);
    Exercise ex4(exers[8], duration[8], path[8]);
    Exercise ex5(exers[9], duration[9], path[9]);
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}


void MainPlanWindow::on_friday_1_clicked()
{
    Exercise ex1(exers[10], duration[10], path[10]);
    Exercise ex2(exers[11], duration[11], path[11]);
    Exercise ex3(exers[12], duration[12], path[12]);
    Exercise ex4(exers[13], duration[13], path[13]);
    Exercise ex5(exers[14], duration[14], path[14]);
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}


void MainPlanWindow::on_saturday_1_clicked()
{
    Exercise ex1(exers[15], duration[15], path[15]);
    Exercise ex2(exers[16], duration[16], path[16]);
    Exercise ex3(exers[17], duration[17], path[17]);
    Exercise ex4(exers[18], duration[18], path[18]);
    Exercise ex5(exers[19], duration[19], path[19]);
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}


void MainPlanWindow::on_sunday_1_clicked()
{
    Exercise ex1(exers[20], duration[20], path[20]);
    Exercise ex2(exers[21], duration[21], path[21]);
    Exercise ex3(exers[22], duration[22], path[22]);
    Exercise ex4(exers[23], duration[23], path[23]);
    Exercise ex5(exers[24], duration[24], path[24]);
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}

void MainPlanWindow::get_name_slot(QString a)
{
    ui->label->setText("Здравствуйте, " + a);
    loc_name = a;
}

void MainPlanWindow::get_program_slot(QString a)
{
    loc_program = a;
    qDebug() << a;
    createDataBase();
}


void MainPlanWindow::on_tuesday_1_clicked()
{
    Exercise ex1("", "", "E:/TrainImg/empty.png");
    Exercise ex2("", "", "E:/TrainImg/empty.png");
    Exercise ex3("День отдыха", "", "E:/TrainImg/empty.png");
    Exercise ex4("", "", "E:/TrainImg/empty.png");
    Exercise ex5("", "", "E:/TrainImg/empty.png");
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1);
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2);
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3);
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4);
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5);
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}


void MainPlanWindow::on_wednsday_1_clicked()
{
    Exercise ex1("", "", "E:/TrainImg/empty.png");
    Exercise ex2("", "", "E:/TrainImg/empty.png");
    Exercise ex3("День отдыха", "", "E:/TrainImg/empty.png");
    Exercise ex4("", "", "E:/TrainImg/empty.png");
    Exercise ex5("", "", "E:/TrainImg/empty.png");
    QPixmap pix1(ex1.path);
    QPixmap pix2(ex2.path);
    QPixmap pix3(ex3.path);
    QPixmap pix4(ex4.path);
    QPixmap pix5(ex5.path);
    ui->first_ex_img->setPixmap(pix1);
    ui->first_ex_title->setText(ex1.nameOfEx);
    ui->first_ex_time->setText(ex1.time);
    ui->second_ex_img->setPixmap(pix2);
    ui->second_ex_title->setText(ex2.nameOfEx);
    ui->second_ex_time->setText(ex2.time);
    ui->third_ex_img->setPixmap(pix3);
    ui->third_ex_title->setText(ex3.nameOfEx);
    ui->third_ex_time->setText(ex3.time);
    ui->fourth_ex_img->setPixmap(pix4);
    ui->fourth_ex_title->setText(ex4.nameOfEx);
    ui->fourth_ex_time->setText(ex4.time);
    ui->fifth_ex_img->setPixmap(pix5);
    ui->fifth_ex_title->setText(ex5.nameOfEx);
    ui->fifth_ex_time->setText(ex5.time);
}

