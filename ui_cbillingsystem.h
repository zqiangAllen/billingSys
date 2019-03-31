/********************************************************************************
** Form generated from reading UI file 'cbillingsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBILLINGSYSTEM_H
#define UI_CBILLINGSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBillingSystem
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *cur_Total_electri;
    QLineEdit *pre_Total_electri;
    QLineEdit *total_electri;
    QLineEdit *nextDoor_cur_Total_elect;
    QLineEdit *nextdoor_pre_total_elect;
    QLineEdit *nextdoor_total_elect;
    QLineEdit *me_cur_total_elect;
    QLineEdit *me_pre_total_elect;
    QLineEdit *me_total_elect;
    QLineEdit *corridor_total_elect;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *all_money;
    QLineEdit *nextdoor_money;
    QLineEdit *me_money;
    QLineEdit *corridor_money;
    QPushButton *calc_data;

    void setupUi(QWidget *CBillingSystem)
    {
        if (CBillingSystem->objectName().isEmpty())
            CBillingSystem->setObjectName(QString::fromUtf8("CBillingSystem"));
        CBillingSystem->resize(652, 494);
        CBillingSystem->setMaximumSize(QSize(652, 494));
        CBillingSystem->setAutoFillBackground(false);
        groupBox = new QGroupBox(CBillingSystem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 561, 181));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 51, 17));
        cur_Total_electri = new QLineEdit(groupBox);
        cur_Total_electri->setObjectName(QString::fromUtf8("cur_Total_electri"));
        cur_Total_electri->setGeometry(QRect(90, 30, 113, 25));
        pre_Total_electri = new QLineEdit(groupBox);
        pre_Total_electri->setObjectName(QString::fromUtf8("pre_Total_electri"));
        pre_Total_electri->setGeometry(QRect(230, 30, 113, 25));
        total_electri = new QLineEdit(groupBox);
        total_electri->setObjectName(QString::fromUtf8("total_electri"));
        total_electri->setGeometry(QRect(390, 30, 113, 25));
        nextDoor_cur_Total_elect = new QLineEdit(groupBox);
        nextDoor_cur_Total_elect->setObjectName(QString::fromUtf8("nextDoor_cur_Total_elect"));
        nextDoor_cur_Total_elect->setGeometry(QRect(90, 70, 113, 25));
        nextdoor_pre_total_elect = new QLineEdit(groupBox);
        nextdoor_pre_total_elect->setObjectName(QString::fromUtf8("nextdoor_pre_total_elect"));
        nextdoor_pre_total_elect->setGeometry(QRect(230, 70, 113, 25));
        nextdoor_total_elect = new QLineEdit(groupBox);
        nextdoor_total_elect->setObjectName(QString::fromUtf8("nextdoor_total_elect"));
        nextdoor_total_elect->setGeometry(QRect(390, 70, 113, 25));
        me_cur_total_elect = new QLineEdit(groupBox);
        me_cur_total_elect->setObjectName(QString::fromUtf8("me_cur_total_elect"));
        me_cur_total_elect->setGeometry(QRect(90, 110, 113, 25));
        me_pre_total_elect = new QLineEdit(groupBox);
        me_pre_total_elect->setObjectName(QString::fromUtf8("me_pre_total_elect"));
        me_pre_total_elect->setGeometry(QRect(230, 110, 113, 25));
        me_total_elect = new QLineEdit(groupBox);
        me_total_elect->setObjectName(QString::fromUtf8("me_total_elect"));
        me_total_elect->setGeometry(QRect(390, 110, 113, 25));
        corridor_total_elect = new QLineEdit(groupBox);
        corridor_total_elect->setObjectName(QString::fromUtf8("corridor_total_elect"));
        corridor_total_elect->setGeometry(QRect(90, 150, 113, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 70, 51, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 51, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 51, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 30, 16, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 30, 16, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 70, 16, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 110, 16, 20));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(360, 70, 16, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(360, 110, 16, 17));
        groupBox_2 = new QGroupBox(CBillingSystem);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 220, 561, 191));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 30, 67, 17));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 70, 67, 17));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 150, 67, 17));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 110, 67, 17));
        all_money = new QLineEdit(groupBox_2);
        all_money->setObjectName(QString::fromUtf8("all_money"));
        all_money->setGeometry(QRect(90, 30, 113, 25));
        nextdoor_money = new QLineEdit(groupBox_2);
        nextdoor_money->setObjectName(QString::fromUtf8("nextdoor_money"));
        nextdoor_money->setGeometry(QRect(90, 70, 271, 25));
        me_money = new QLineEdit(groupBox_2);
        me_money->setObjectName(QString::fromUtf8("me_money"));
        me_money->setGeometry(QRect(90, 110, 271, 25));
        corridor_money = new QLineEdit(groupBox_2);
        corridor_money->setObjectName(QString::fromUtf8("corridor_money"));
        corridor_money->setGeometry(QRect(90, 150, 271, 25));
        calc_data = new QPushButton(CBillingSystem);
        calc_data->setObjectName(QString::fromUtf8("calc_data"));
        calc_data->setGeometry(QRect(500, 450, 89, 25));

        retranslateUi(CBillingSystem);

        QMetaObject::connectSlotsByName(CBillingSystem);
    } // setupUi

    void retranslateUi(QWidget *CBillingSystem)
    {
        CBillingSystem->setWindowTitle(QApplication::translate("CBillingSystem", "\351\207\221\350\211\262\351\222\261\345\241\23016\345\271\2421501\347\224\265\350\264\271\350\256\241\347\256\227\347\263\273\347\273\237", nullptr));
        groupBox->setTitle(QApplication::translate("CBillingSystem", "\347\224\265\350\241\250\345\272\246\346\225\260       ", nullptr));
        label->setText(QApplication::translate("CBillingSystem", "\346\200\273\345\272\246\346\225\260\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CBillingSystem", "\351\232\224\345\243\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("CBillingSystem", "\346\210\221\357\274\232", nullptr));
        label_3->setText(QApplication::translate("CBillingSystem", "\350\265\260\345\273\212\357\274\232", nullptr));
        label_4->setText(QApplication::translate("CBillingSystem", "-\342\200\224\342\200\224", nullptr));
        label_6->setText(QApplication::translate("CBillingSystem", "=", nullptr));
        label_7->setText(QApplication::translate("CBillingSystem", "-\342\200\224\342\200\224", nullptr));
        label_8->setText(QApplication::translate("CBillingSystem", "-\342\200\224\342\200\224", nullptr));
        label_9->setText(QApplication::translate("CBillingSystem", "=", nullptr));
        label_10->setText(QApplication::translate("CBillingSystem", "=", nullptr));
        groupBox_2->setTitle(QApplication::translate("CBillingSystem", "\347\224\265\350\264\271", nullptr));
        label_11->setText(QApplication::translate("CBillingSystem", "\346\200\273\350\212\261\350\264\271:", nullptr));
        label_12->setText(QApplication::translate("CBillingSystem", "\351\232\224\345\243\201\357\274\232", nullptr));
        label_13->setText(QApplication::translate("CBillingSystem", "\350\265\260\345\273\212\357\274\232", nullptr));
        label_14->setText(QApplication::translate("CBillingSystem", "\346\210\221\357\274\232", nullptr));
        calc_data->setText(QApplication::translate("CBillingSystem", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBillingSystem: public Ui_CBillingSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBILLINGSYSTEM_H
