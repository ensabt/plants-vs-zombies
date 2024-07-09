#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void UpdateProgress();
    void on_pushButton_continue_clicked();
    void on_pushBtn_CreatAcc_clicked();
    void on_pushBtn_Forgot_clicked();
    void on_pushBtn_Login_clicked();

public slots:

signals:
    void check_CreatAcc(QString, QString, QString, QString, QString, int);

private:
    Ui::MainWindow *ui;
    QTimer *t;
};



#endif // MAINWINDOW_H
