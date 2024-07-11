#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTcpSocket>
#include <QMessageBox>
#include "Headers.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connecting(QString ip, int port);
    void disconnecting();
    void sendData(QString);


private slots:
    void UpdateProgress();
    void on_pushButton_continue_clicked();
    void on_pushBtn_CreatAcc_clicked();
    void on_pushBtn_Forgot_clicked();
    void on_pushBtn_Login_clicked();

    void Receiver_Connectdialog (QString);
    void Reciever_CreatAcc(QString, QString, QString, QString, QString, int);
    void Reseiver1_Forgot(QString user, QString phone);
    void Receiver2_Forgot (QString pass);

    //ResultOfCheckCreatAcc.

    //for sockets:
    void socket_readyRead();
    void socket_connected();
    void socket_disconnected();
    void socket_bytesWritten();



public slots:

signals:
    void check_CreatAcc(QString, QString, QString, QString, QString, int);
    void ResultForgotCheckD(bool c);

private:
    Ui::MainWindow *ui;
    QTimer *t;
    QTcpSocket *socket = nullptr;
};


#endif // MAINWINDOW_H
