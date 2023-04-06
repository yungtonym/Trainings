
#include "mainwindow.h"

#include <QApplication>
#include "QSqlDatabase"
#include "QDebug"
#include "QSqlQuery"

QString exers[25];
QString duration[25];
QString path[25];

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    createDataBase();
    return a.exec();
}
