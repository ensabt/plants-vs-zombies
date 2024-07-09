#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_creatacc.h"
#include "dialog_forgotpass.h"
#include <QVector>
#include"hash.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    t = new QTimer(this);
    t->setInterval(250);
    t->start();
    connect(t, SIGNAL(timeout()), this, SLOT(UpdateProgress()));
    // ui->stackedWidget->setCurrentWidget();
    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_continue->setVisible(false);

}
MainWindow::~MainWindow()
{
    delete ui;
}

QVector<QString> receives;
int percent = 0;
QString IP;
int Port;


void MainWindow::UpdateProgress(){
    ui->progressBar->setValue(percent);
    if(percent > 100){
        t->stop();
        //ui->stackedWidget->setCurrentIndex(1);
        ui->pushButton_continue->setVisible(true);

    }
    percent++;
}




void MainWindow::on_pushButton_continue_clicked(){

    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushBtn_CreatAcc_clicked()
{
    Dialog_CreatAcc *d = new Dialog_CreatAcc(this);
    connect(d, SIGNAL(senderCreat(QString)), this, SLOT(Receiver_Connectdialog (QString)));
    d->show();
}
void MainWindow::on_pushBtn_Forgot_clicked()
{
    Dialog_ForgotPass *f = new Dialog_ForgotPass(this);
    connect (f, SIGNAL(), this, SLOT());
    f->show();
}
void MainWindow::on_pushBtn_Login_clicked(){
    //send the text of username & password

    //recieve true or false to continue
}

