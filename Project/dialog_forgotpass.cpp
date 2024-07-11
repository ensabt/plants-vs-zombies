#include "dialog_forgotpass.h"
#include "ui_dialog_forgotpass.h"
#include"hash.h"
Dialog_ForgotPass::Dialog_ForgotPass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_ForgotPass)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(1);
}

Dialog_ForgotPass::~Dialog_ForgotPass()
{
    delete ui;
}

void Dialog_ForgotPass::checked_from_server(bool b)
{
    if (b){
        //it's mean that you're right
        ui->stackedWidget->setCurrentIndex(3);

    }
}

void Dialog_ForgotPass::on_buttonBox_2_accepted()
{
    emit userPhoneToServer(ui->lineEdit_5->text(), ui->lineEdit_6->text());
    ui->stackedWidget->setCurrentIndex(0);

}

void Dialog_ForgotPass::on_pushButton_clicked()
{
    //if passowrd is ok send it to server.
    //emit to send to server
    if (ui->lineEdit->text() == ui->lineEdit_2->text() && CheckPasswordStrong(ui->lineEdit->text()))
        emit forgotPassToServer(HashedPass(ui->lineEdit->text()));
    //now we should back to login page.

}

