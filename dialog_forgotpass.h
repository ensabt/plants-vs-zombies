#ifndef DIALOG_FORGOTPASS_H
#define DIALOG_FORGOTPASS_H

#include <QDialog>
#include "Headers.h"

namespace Ui {
class Dialog_ForgotPass;
}

class Dialog_ForgotPass : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ForgotPass(QWidget *parent = nullptr);
    ~Dialog_ForgotPass();

private slots:
    void checked_from_server(bool b);
    void on_pushButton_clicked(); //ok pass
    void on_buttonBox_2_accepted(); //user/phone

signals:
    void userPhoneToServer(QString, QString);
    void forgotPassToServer (QString); //send username and phone to server for check


private:
    Ui::Dialog_ForgotPass *ui;
};

#endif // DIALOG_FORGOTPASS_H
