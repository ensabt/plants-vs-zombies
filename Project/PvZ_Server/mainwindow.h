#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QList>
#include <QVector>
#include <QDebug>
#include <QTimer>
#include <QFile>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SendData (QString data);
    void importFromFileUsers();
    void saveToFileUserInformation();
    void saveToFileUPP();//user passsword phone

private:
    Ui::MainWindow *ui;
    QTcpServer *server = nullptr;
    int server_port;
    QList<QTcpSocket*> clients;
    QVector<QString> Messages;
    QTimer* t;
    QMap <QString, QString> UserPasses;
    QMap <QString, QString> UserPhones;

private slots:
    void updateProgress();

public slots:
    void server_newConnection();
    void socket_connected();
    void socket_readyRead(QTcpSocket *_socket);
    void socket_bytesWritten(QTcpSocket *_socket);
    void socket_disconnected(QTcpSocket *_socket);
};
#endif // MAINWINDOW_H
