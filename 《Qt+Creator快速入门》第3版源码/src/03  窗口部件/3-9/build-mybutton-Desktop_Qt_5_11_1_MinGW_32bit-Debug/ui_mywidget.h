/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_4;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QToolButton *toolButton;
    QPushButton *pushButton;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(692, 478);
        pushBtn1 = new QPushButton(MyWidget);
        pushBtn1->setObjectName(QStringLiteral("pushBtn1"));
        pushBtn1->setGeometry(QRect(30, 20, 75, 23));
        pushBtn1->setCheckable(true);
        pushBtn2 = new QPushButton(MyWidget);
        pushBtn2->setObjectName(QStringLiteral("pushBtn2"));
        pushBtn2->setGeometry(QRect(150, 20, 75, 23));
        pushBtn2->setFlat(true);
        pushBtn3 = new QPushButton(MyWidget);
        pushBtn3->setObjectName(QStringLiteral("pushBtn3"));
        pushBtn3->setGeometry(QRect(270, 20, 75, 23));
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 141, 151));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 30, 71, 16));
        checkBox->setTristate(true);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 70, 71, 16));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 110, 71, 16));
        groupBox_2 = new QGroupBox(MyWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 120, 161, 151));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 30, 89, 16));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 70, 89, 16));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 110, 89, 16));
        groupBox_3 = new QGroupBox(MyWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(390, 130, 181, 211));
        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 50, 71, 16));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(70, 110, 89, 16));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(80, 150, 89, 16));
        radioButton_6 = new QRadioButton(MyWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(150, 330, 89, 16));
        toolButton = new QToolButton(MyWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(110, 290, 131, 91));
        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 300, 75, 23));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        pushBtn1->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushBtn2->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushBtn3->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        groupBox->setTitle(QApplication::translate("MyWidget", "\345\244\215\351\200\211\346\241\206", nullptr));
        checkBox->setText(QApplication::translate("MyWidget", "\350\267\221\346\255\245", nullptr));
        checkBox_2->setText(QApplication::translate("MyWidget", "\350\270\242\347\220\203", nullptr));
        checkBox_3->setText(QApplication::translate("MyWidget", "\346\270\270\346\263\263", nullptr));
        groupBox_2->setTitle(QApplication::translate("MyWidget", "\345\215\225\351\200\211\346\241\206", nullptr));
        radioButton->setText(QApplication::translate("MyWidget", "\345\276\210\345\245\275", nullptr));
        radioButton_2->setText(QApplication::translate("MyWidget", "\344\270\200\350\210\254", nullptr));
        radioButton_3->setText(QApplication::translate("MyWidget", "\344\270\215\345\245\275", nullptr));
        groupBox_3->setTitle(QApplication::translate("MyWidget", "GroupBox", nullptr));
        checkBox_4->setText(QApplication::translate("MyWidget", "CheckBox", nullptr));
        radioButton_4->setText(QApplication::translate("MyWidget", "RadioButton", nullptr));
        radioButton_5->setText(QApplication::translate("MyWidget", "RadioButton", nullptr));
        radioButton_6->setText(QApplication::translate("MyWidget", "RadioButton", nullptr));
        toolButton->setText(QApplication::translate("MyWidget", "...", nullptr));
        pushButton->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
