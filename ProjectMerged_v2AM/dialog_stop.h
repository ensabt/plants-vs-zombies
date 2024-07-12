#ifndef DIALOG_STOP_H
#define DIALOG_STOP_H

#include <QWidget>

namespace Ui {
class Dialog_stop;
}

class Dialog_stop : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog_stop(QWidget *parent = nullptr);
    ~Dialog_stop();

private slots:
    //void on_toolButton_triggered(QAction *arg1);

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();
signals:

    void go_tomain();
private:
    Ui::Dialog_stop *ui;
};

#endif // DIALOG_STOP_H
