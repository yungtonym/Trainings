#ifndef MAINPLANWINDOW_H
#define MAINPLANWINDOW_H

#include <QWidget>
#include <QPixmap>
#include "QSqlDatabase"
#include "QDebug"
#include "QSqlQuery"

namespace Ui {
class MainPlanWindow;
}

class MainPlanWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainPlanWindow(QWidget *parent = nullptr);
    ~MainPlanWindow();

private slots:
    void on_monday_1_clicked();

    void on_tuesday_1_clicked();

    void on_thirthday_1_clicked();

    void on_wednsday_1_clicked();

    void on_friday_1_clicked();

    void on_saturday_1_clicked();

    void on_sunday_1_clicked();

public slots:

    void get_name_slot(QString a);
    void get_program_slot(QString a);

private:
    Ui::MainPlanWindow *ui;
};

#endif // MAINPLANWINDOW_H
