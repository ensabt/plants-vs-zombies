#ifndef DIALOG_CREATACC_H
#define DIALOG_CREATACC_H
#include <QDialog>
#include "Headers.h"
namespace Ui {
class Dialog_CreatAcc;
}

class Dialog_CreatAcc : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_CreatAcc(QWidget *parent = nullptr);
    ~Dialog_CreatAcc();

signals:
    void senderCreat(QString, QString, QString, QString, QString, int);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog_CreatAcc *ui;
};

#endif // DIALOG_CREATACC_H
