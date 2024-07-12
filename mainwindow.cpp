#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    t = new QTimer(this);
    t->setInterval(1000);
    connect(t, SIGNAL(QTimer::timeout()), SLOT(mainWindow::updateProgress()));

    //qDebug() << ("Connecting...");
     server = new QTcpServer();
     server->listen(QHostAddress::Any, 2000);
     if (server->isListening())
    {
         connect(server, &QTcpServer::newConnection, this, &MainWindow::server_newConnection);
         //qDebug() << ("Connected!");
    }

}

MainWindow::~MainWindow()
{
    if (!server)
    {
        qDebug() << "Not connected yet!";
    } else
    {
        for (auto& _socket : clients) {//for 4client
            if (!_socket)
            {
                 delete _socket;
             }
            _socket = nullptr;
        }

        delete server;
        server = nullptr;
        qDebug() << "Disconnected!";
    }
    delete ui;
}

void MainWindow::SendData(QString data)
{
    for (auto& _socket : clients) {
        if (_socket)
        {
            _socket->write(data.toStdString().c_str());//ui->input->toplaintext().toutf8
            qDebug() << "Data was sent!";
        }
    }
}

void MainWindow::importFromFileUsers()
{
    QFile file("users.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split("\t");
            UserPasses.insert(data[0], data[1]); // Assuming data[0] is username and data[1] is hashed password
            UserPhones.insert(data[1], data[2]);
        }
        file.close();
    }
}

///save to file
// QFile file("users.txt");
// if(file.open(QIODevice::Append | QIODevice::Text)) {
//     QTextStream out(&file);
//     out << UserName << "\t" << HASHed << "\t" << FullName << "\t" << Email << "\t" << Age << "\t" << Gender << "\n";
//     file.close();
// }

///read and save
// QFile file("users.txt");
// if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
//     QTextStream in(&file);
//     while(!in.atEnd()) {
//         QString line = in.readLine();
//         QStringList data = line.split("\t");
//         UserPasses.insert(data[0], data[1]); // Assuming data[0] is username and data[1] is hashed password
//     }
//     file.close();
// }

// if(UserPasses.contains(ui->lineEdit->text())) {
//     QString storedPassword = UserPasses.value(ui->lineEdit->text());
//     QByteArray inputHash = QCryptographicHash::hash(ui->lineEdit->text().toUtf8(), QCryptographicHash::Sha256);

//     if(storedPassword == inputHash.toHex()) {
//         QMessageBox::information(this, "Success", "Username and Password are Correect.");
//     }
//     else {
//         QMessageBox::information(this, "Fail", "Username or Password is not correct!");
//     }
// }
// else
//     QMessageBox::information(this, "Fail", "Username or Password is not correct!");

void MainWindow::updateProgress()
{
    //every 1 sec:
    if (!Messages.empty()){
        for(auto m: Messages){
            if(m[0] == 'C'){ //creat acc
                //check the userpasses to it does'nt exist
                QRegularExpression separator("[,\\s]+"); // الگو برای جدا کردن بر اساس , و فاصله
                QStringList parts = m.split(separator);
                if(!UserPasses.contains(parts[0])){
                    //we can add
                    QFile file("users.txt");
                    if(file.open(QIODevice::Append | QIODevice::Text)) {
                        QTextStream out(&file);
                        for (int i=0; i<6; i++) {
                            out << parts[i];
                        }
                        out << "\n";
                        file.close();
                    }
                    importFromFileUsers();
                    SendData("R1");
                }
                else{
                    SendData("R0");
                }

            }
            else if(m[0] == 'L'){//login

            }
            else if(m[0] == 'F'){//forgot1
                if(m[1] == '1'){
                    //it's mean that username & phoneNum is received.
                    QRegularExpression separator("[,\\s]+"); // الگو برای جدا کردن بر اساس , و فاصله
                    QStringList parts = m.split(separator);
                    if(!UserPasses.contains(parts[0])){

                    }
                }
                else if(m[1] == '2'){//forgot2

                }
            }
        }
    }
}

void MainWindow::server_newConnection()
{
    QTcpSocket * new_client = server->nextPendingConnection();

    clients.append(new_client);
    connect(new_client, &QTcpSocket::connected, this, &MainWindow::socket_connected);
    connect(new_client, &QIODevice::readyRead, this, [this, new_client](){ socket_readyRead(new_client); });
    connect(new_client, &QIODevice::bytesWritten, this, [this, new_client](){ socket_bytesWritten(new_client); });
    connect(new_client, &QAbstractSocket::disconnected, this, [this, new_client](){ socket_disconnected(new_client); });
}
void MainWindow::socket_connected()
{
    qDebug() << ("Connected!");//ui->output->append("coected!"); ui->output->append
}
void MainWindow::socket_readyRead(QTcpSocket *_socket)
{
    QByteArray data = _socket->readAll();
    qDebug() << _socket->objectName() << ": " << data;
    Messages.push_back(data);

}
void MainWindow::socket_bytesWritten(QTcpSocket *_socket)
{
    qDebug() << "Data was written!\t" << _socket->isOpen();
}
void MainWindow::socket_disconnected(QTcpSocket *_socket)
{
    qDebug() << _socket->objectName() << " disconnected!";
    clients.removeOne(_socket);

    for (int var = 0; var < clients.size(); ++var)
    {
        clients[var]->setObjectName("Client " + QString::number(var + 1));
    }

    _socket->deleteLater();
}

