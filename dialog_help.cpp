#include "dialog_help.h"
#include "ui_dialog_help.h"

Dialog_Help::Dialog_Help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dialog_Help)
{
    ui->setupUi(this);
}

Dialog_Help::~Dialog_Help()
{
    delete ui;
}

void Dialog_Help::on_pushButton_clicked()
{
    this->close();
}

