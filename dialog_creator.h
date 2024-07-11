#ifndef DIALOG_CREATOR_H
#define DIALOG_CREATOR_H

#include <QWidget>

namespace Ui {
class Dialog_creator;
}

class Dialog_creator : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog_creator(QWidget *parent = nullptr);
    ~Dialog_creator();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_creator *ui;
};

#endif // DIALOG_CREATOR_H
