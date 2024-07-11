#include "dialod_setting.h"
#include "ui_dialod_setting.h"

Dialod_setting::Dialod_setting(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dialod_setting)
{
    ui->setupUi(this);
}

Dialod_setting::~Dialod_setting()
{
    delete ui;
}
