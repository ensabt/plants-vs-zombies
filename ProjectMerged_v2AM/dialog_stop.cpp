#include "dialog_stop.h"
#include "ui_dialog_stop.h"
#include"mainwindow.h"
Dialog_stop::Dialog_stop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dialog_stop)
{
    ui->setupUi(this);
}

Dialog_stop::~Dialog_stop()
{
    delete ui;
}


void Dialog_stop::on_toolButton_clicked()
{
    this->close();

}


void Dialog_stop::on_toolButton_2_clicked()
{
    emit go_tomain();

}

