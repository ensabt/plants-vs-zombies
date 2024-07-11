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
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushBtn_CreatAcc_clicked();
    void on_pushBtn_Forgot_clicked();

    void Receiver_Connectdialog (QString);
    void Reciever_CreatAcc(QString, QString, QString, QString, QString, int);
    //ResultOfCheckCreatAcc.
    void home();
    //for sockets:
    void socket_readyRead();
    void socket_connected();
    void socket_disconnected();
    void socket_bytesWritten();

    void on_pushBtn_Login_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_toolButton_clicked();

public slots:

signals:
    void check_CreatAcc(QString, QString, QString, QString, QString, int);

private:
    Ui::MainWindow *ui;
    QTimer *t;
    QTcpSocket *socket = nullptr;
};


#endif // MAINWINDOW_H
