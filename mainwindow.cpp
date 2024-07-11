#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "Headers.h"
#include "dialog_creatacc.h"
#include "dialog_connecttoserver.h"
#include "dialog_forgotpass.h"
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket();
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
    if(socket)
    {
        delete socket;
    }
    delete ui;
}

QVector<QString> receives;
int percent = 0;
QString IP;
int Port;

void MainWindow::connecting(QString ip, int port){
    socket->connectToHost(ip, port);
    if(socket->waitForConnected(5000)){
        connect(socket, &QTcpSocket::connected, this, &MainWindow::socket_connected);
        connect(socket, &QTcpSocket::readyRead, this, &MainWindow::socket_readyRead);
        connect(socket, &QTcpSocket::bytesWritten, this, &MainWindow::socket_bytesWritten);
        connect(socket, &QTcpSocket::disconnected, this, &MainWindow::socket_disconnected);
    }
}
void MainWindow::disconnecting()
{
    if (!socket)
    {
        qDebug("Not connected yet!");
    } else
    {
        delete socket;
        socket = nullptr;
        qDebug("Disconnected!");
    }
}
void MainWindow::sendData(QString str)
{
    if (socket && socket->isOpen())
    {
        socket->write(str.toStdString().c_str()); //or to utf8
        socket->flush();
        qDebug("Data was sent!");
    }
}
void MainWindow::socket_connected(){
    qDebug("Connected!");
}
void MainWindow::socket_readyRead(){
    ////////////
    QByteArray data = socket->readAll();
    receives.push_back(data);
}
void MainWindow::socket_bytesWritten()
{
    qDebug("Data was written!");
}
void MainWindow::socket_disconnected()
{
    qDebug("Disconnected!");
}

void MainWindow::UpdateProgress(){
    ui->progressBar->setValue(percent);
    if(percent > 100){
        t->stop();
        //ui->stackedWidget->setCurrentIndex(1);
        ui->pushButton_continue->setVisible(true);

    }
    percent++;
}

void MainWindow::Receiver_Connectdialog(QString ip){
    socket = new QTcpSocket();
    socket->connectToHost(ip, 2000);
    if (socket->waitForConnected(3000)){
        QMessageBox::information(this, "Success", "Connecting to seerver is finished successfully.");
        connect(socket, &QTcpSocket::connected, this, &MainWindow::socket_connected);
        connect(socket, &QTcpSocket::readyRead, this, &MainWindow::socket_readyRead);
        connect(socket, &QTcpSocket::bytesWritten, this, &MainWindow::socket_bytesWritten);
        connect(socket, &QTcpSocket::disconnected, this, &MainWindow::socket_disconnected);

        ui->stackedWidget->setCurrentIndex(1);
    }
    else{
        QMessageBox::information(this, "Fail", "Connecting to seerver is finished with Errors!\n plese enter the IP again.");

        Dialog_ConnectToServer *d = new Dialog_ConnectToServer(this);
        connect(d, SIGNAL(sender(QString)), this, SLOT(Receiver_Connectdialog (QString)));
        d->show();
    }

}
void MainWindow::Reciever_CreatAcc(QString user, QString passHashed, QString name, QString email, QString address, int age){
    //send to server and check...
    socket->write("C"+ user.toUtf8()+ ","+ passHashed.toUtf8()+ ","+ name.toUtf8()+ ","+ email.toUtf8()+
                  ","+ address.toUtf8()+ ","+QString::number(age).toUtf8());

    // if(){ //to check parameters...
    // }
    // else ///emit a signal to check creat account.
    //     emit check_CreatAcc(user, pass, name, email, address, age);
}

void MainWindow::Reseiver1_Forgot(QString user, QString phone)
{
    sendData("F1" + user + "," + phone);
}

void MainWindow::Receiver2_Forgot(QString pass)
{
    sendData("F2" + pass);
}

void MainWindow::on_pushButton_continue_clicked(){
    //open connect_dialog
    Dialog_ConnectToServer *d = new Dialog_ConnectToServer(this);
    connect(d, SIGNAL(senderConnect(QString)), this, SLOT(Receiver_Connectdialog (QString)));
    d->show();
    //ui->stackedWidget->setCurrentIndex(1);
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
    connect (f, SIGNAL(userPhoneToServer(QString,QString)), this, SLOT(Receiver1_Forgot(QString, QString)));
    connect (f, SIGNAL(forgotPassToServer(QString)), this, SLOT(Receiver2_Forgot(QString)));
    connect (f, SIGNAL(ResultForgotCheckD(bool)), this, SLOT(Checked(bool)));
    f->show();
}
void MainWindow::on_pushBtn_Login_clicked(){
    //send the text of username & password
    socket->write("L"+ ui->In_username->text().toUtf8() + "," + HashedPass(ui->In_Password->text()).toUtf8());

    //recieve true or false to continue
}

