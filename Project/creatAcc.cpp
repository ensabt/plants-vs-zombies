#include "creatAcc.h"
#include "ui_creatAcc.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

// void Form::on_pushButton_clicked()
// {
//     //send to server
//     //check in server
//     //receive yes/no from server
//     //creat acc / go to dashboard


//     if(UserPasses.contains(ui->lineEdit->text())) {
//         QString storedPassword = UserPasses.value(ui->lineEdit->text());
//         QByteArray inputHash = QCryptographicHash::hash(ui->lineEdit->text().toUtf8(), QCryptographicHash::Sha256);

//         if(storedPassword == inputHash.toHex()) {
//             QMessageBox::information(this, "Success", "Username and Password are Correect.");
//         }
//         else {
//             QMessageBox::information(this, "Fail", "Username or Password is not correct!");
//         }
//     }
//     else
//         QMessageBox::information(this, "Fail", "Username or Password is not correct!");

// }

