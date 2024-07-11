#include "dialog_connecttoserver.h"
#include "ui_dialog_connecttoserver.h"
#include <QMessageBox>

Dialog_ConnectToServer::Dialog_ConnectToServer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_ConnectToServer)
{
    ui->setupUi(this);
}

Dialog_ConnectToServer::~Dialog_ConnectToServer()
{
    delete ui;
}

void Dialog_ConnectToServer::on_buttonBox_accepted()
{
    emit senderConnect(ui->lineEdit->text());

}


