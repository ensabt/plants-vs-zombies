/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *p1_load;
    QProgressBar *progressBar;
    QPushButton *pushButton_continue;
    QFrame *frame_5;
    QWidget *p2_log1;
    QFrame *frame;
    QFrame *frame_2;
    QLineEdit *In_username;
    QLineEdit *In_Password;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QFrame *frame_3;
    QFrame *frame_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(938, 709);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(938, 709));
        MainWindow->setMaximumSize(QSize(938, 709));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 100, 801, 591));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        p1_load = new QWidget();
        p1_load->setObjectName("p1_load");
        p1_load->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/New folder/Background.jpg);"));
        progressBar = new QProgressBar(p1_load);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(440, 430, 271, 21));
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 0, 71);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
""));
        progressBar->setValue(1);
        progressBar->setInvertedAppearance(false);
        pushButton_continue = new QPushButton(p1_load);
        pushButton_continue->setObjectName("pushButton_continue");
        pushButton_continue->setGeometry(QRect(510, 460, 141, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Snap ITC")});
        font.setPointSize(10);
        pushButton_continue->setFont(font);
        pushButton_continue->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_continue->setMouseTracking(true);
        pushButton_continue->setTabletTracking(false);
        pushButton_continue->setFocusPolicy(Qt::StrongFocus);
        pushButton_continue->setStyleSheet(QString::fromUtf8(":hover {\n"
"  background-color: orange; /* \330\261\331\206\332\257 \331\207\331\206\332\257\330\247\331\205 hover */\n"
"}\n"
""));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-calculator")));
        pushButton_continue->setIcon(icon);
        pushButton_continue->setAutoDefault(false);
        pushButton_continue->setFlat(false);
        frame_5 = new QFrame(p1_load);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 811, 581));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(p1_load);
        frame_5->raise();
        progressBar->raise();
        pushButton_continue->raise();
        p2_log1 = new QWidget();
        p2_log1->setObjectName("p2_log1");
        frame = new QFrame(p2_log1);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(300, 30, 201, 131));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/New folder/Plants_vs_Zombies_logo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(p2_log1);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 90, 271, 441));
        frame_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/New folder/back2.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        In_username = new QLineEdit(p2_log1);
        In_username->setObjectName("In_username");
        In_username->setGeometry(QRect(330, 230, 211, 24));
        In_username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        In_Password = new QLineEdit(p2_log1);
        In_Password->setObjectName("In_Password");
        In_Password->setGeometry(QRect(330, 270, 211, 24));
        In_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(p2_log1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 420, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(10);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(8, 12, 255);"));
        pushButton_2->setFlat(true);
        label = new QLabel(p2_log1);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 230, 91, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(12);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(p2_log1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 270, 81, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(p2_log1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 400, 211, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(43, 43, 43);\n"
"color: rgb(58, 58, 58);"));
        pushButton_3 = new QPushButton(p2_log1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(390, 320, 80, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(170, 0, 0);"));
        frame_3 = new QFrame(p2_log1);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(520, 90, 281, 451));
        frame_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/New folder/back2-2.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(p2_log1);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-1, -10, 801, 501));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 234, 5);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(p2_log1);
        frame_4->raise();
        frame_3->raise();
        frame->raise();
        frame_2->raise();
        In_username->raise();
        In_Password->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton_3->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        pushButton_continue->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/new/prefix1/New folder/Background.jpg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_continue->setText(QCoreApplication::translate("MainWindow", "Press to continue", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Creat Account", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "If you don't have an accountClick Here!", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
