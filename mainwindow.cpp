#include "mainwindow.h"
#include "ui_mainwindow.h"

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
int percent = 0;
QString IP;
void MainWindow::UpdateProgress()
{
    ui->progressBar->setValue(percent);
    if(percent > 100){
        t->stop();
        //ui->stackedWidget->setCurrentIndex(1);
        ui->pushButton_continue->setVisible(true);

    }
    percent++;
}

void MainWindow::on_pushButton_continue_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}




