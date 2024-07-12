#include "dialog_forgotpass.h"
#include "mainwindow.h"
#include "ui_dialog_forgotpass.h"
#include <QMessageBox>

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
        ui->stackedWidget->setCurrentIndex(2);
        QWidget::setAttribute(Qt::WA_DeleteOnClose, true);
    }
}

void Dialog_ForgotPass::on_buttonBox_2_accepted()
{
    QWidget::setAttribute(Qt::WA_DeleteOnClose, false);
    emit userPhoneToServer(ui->lineEdit_5->text(), ui->lineEdit_6->text());
}

void Dialog_ForgotPass::Checked(bool c)
{
    if(c){//ok you can go.
        //now we should back to login page.
        ui->stackedWidget->setCurrentIndex(0);
    }
    else{
        //QMessageBox:
        QMessageBox::information(this, "Error", "Username and hone do not match.");
    }
}

void Dialog_ForgotPass::on_pushButton_clicked()
{
    //if passowrd is ok send it to server.
    //emit to send to server
    if (ui->lineEdit->text() == ui->lineEdit_2->text() && CheckPasswordStrong(ui->lineEdit->text()))
        emit forgotPassToServer(HashedPass(ui->lineEdit->text()));
    else if(ui->lineEdit->text() != ui->lineEdit_2->text())
        ui->label_5->setText("Two entered passwords are different!");
    else
        ui->label_5->setText("Password is not strong enough!");
}
