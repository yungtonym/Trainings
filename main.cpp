
#include "mainwindow.h"

#include <QApplication>
#include "QSqlDatabase"
#include "QDebug"
#include "QSqlQuery"

QString exers[25];
QString duration[25];
QString path[25];

//void createDataBase()
//{
//    int i;
//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    QSqlQuery query;
//    db.setDatabaseName("./database/programs.db");
//    if (db.open())
//    {
//        qDebug("open");
//        query.exec("SELECT Exercise FROM program5_mid_light");
//        i = 0;
//        while (query.next()) {
//            exers5_beg_light[i] = query.value(0).toString();
////            qDebug() << exers5_beg_light[i];
//            i++;
//        }
//        query.exec("SELECT Duration FROM program5_mid_light");
//        i = 0;
//        while (query.next()) {
//            duration5_beg_light[i] = query.value(0).toString();
//            //            qDebug() << exers5_beg_light[i];
//            i++;
//        }
//        query.exec("SELECT Path FROM program5_mid_light");
//        i = 0;
//        while (query.next()) {
//            path5_beg_light[i] = query.value(0).toString();
//            //            qDebug() << exers5_beg_light[i];
//            i++;
//        }
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_mid_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_pro_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_beg_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_mid_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_pro_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_beg_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_mid_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program5_pro_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_beg_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_mid_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_pro_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_beg_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_mid_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_pro_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_beg_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_mid_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program4_pro_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_beg_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_mid_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_pro_light.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_beg_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_mid_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_pro_mid.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_beg_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_mid_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//    db.setDatabaseName("./program3_pro_rare.db");
//    if (db.open())
//    {
//        qDebug("open");
//    } else
//    {
//        qDebug("no open");
//    }
//}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    createDataBase();
    return a.exec();
}
