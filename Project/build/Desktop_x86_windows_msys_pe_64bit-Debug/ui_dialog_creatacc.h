/********************************************************************************
** Form generated from reading UI file 'dialog_creatacc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREATACC_H
#define UI_DIALOG_CREATACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_CreatAcc
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_CreatAcc)
    {
        if (Dialog_CreatAcc->objectName().isEmpty())
            Dialog_CreatAcc->setObjectName("Dialog_CreatAcc");
        Dialog_CreatAcc->resize(541, 386);
        Dialog_CreatAcc->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 11, 80);"));
        buttonBox = new QDialogButtonBox(Dialog_CreatAcc);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 280, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(Dialog_CreatAcc);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 70, 411, 198));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox);


        retranslateUi(Dialog_CreatAcc);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_CreatAcc, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_CreatAcc, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_CreatAcc);
    } // setupUi

    void retranslateUi(QDialog *Dialog_CreatAcc)
    {
        Dialog_CreatAcc->setWindowTitle(QCoreApplication::translate("Dialog_CreatAcc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_CreatAcc", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_CreatAcc", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_CreatAcc", "Full Name:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_CreatAcc", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_CreatAcc", "Age:", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_CreatAcc", "Gender:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog_CreatAcc", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog_CreatAcc", "Female", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog_CreatAcc: public Ui_Dialog_CreatAcc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREATACC_H
