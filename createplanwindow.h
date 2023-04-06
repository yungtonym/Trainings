#ifndef CREATEPLANWINDOW_H
#define CREATEPLANWINDOW_H

#include <QWidget>

namespace Ui {
class CreatePlanWindow;
}

class CreatePlanWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CreatePlanWindow(QWidget *parent = nullptr);
    ~CreatePlanWindow();

signals:
    void firstWindow();

private slots:
    void on_create_button_clicked();

public slots:
    void get_name_slot(QString a);

private:
    Ui::CreatePlanWindow *ui;
};

#endif // CREATEPLANWINDOW_H
