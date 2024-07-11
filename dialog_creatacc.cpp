#include "dialog_creatacc.h"
#include "ui_dialog_creatacc.h"

Dialog_CreatAcc::Dialog_CreatAcc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_CreatAcc)
{
    ui->setupUi(this);
}

Dialog_CreatAcc::~Dialog_CreatAcc()
{
    delete ui;
}

void Dialog_CreatAcc::on_buttonBox_accepted()
{
    emit senderCreat(ui->lineEdit->text(), HashedPass(ui->lineEdit_2->text()), ui->lineEdit_3->text(), ui->lineEdit_4->text(), ui->lineEdit_5->text(), ui->lineEdit_6->text().toInt());
}

