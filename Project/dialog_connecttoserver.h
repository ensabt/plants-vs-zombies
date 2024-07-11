#ifndef DIALOG_CONNECTTOSERVER_H
#define DIALOG_CONNECTTOSERVER_H

#include <QDialog>

namespace Ui {
class Dialog_ConnectToServer;
}

class Dialog_ConnectToServer : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ConnectToServer(QWidget *parent = nullptr);
    ~Dialog_ConnectToServer();


signals:
    void senderConnect(QString);

private slots:
    void on_buttonBox_accepted();


private:
    Ui::Dialog_ConnectToServer *ui;
};

#endif // DIALOG_CONNECTTOSERVER_H
