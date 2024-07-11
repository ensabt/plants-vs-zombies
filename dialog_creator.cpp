#include "dialog_creator.h"
#include "ui_dialog_creator.h"

Dialog_creator::Dialog_creator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dialog_creator)
{
    ui->setupUi(this);
}

Dialog_creator::~Dialog_creator()
{
    delete ui;
}

void Dialog_creator::on_pushButton_clicked()
{
    this->close();
}

