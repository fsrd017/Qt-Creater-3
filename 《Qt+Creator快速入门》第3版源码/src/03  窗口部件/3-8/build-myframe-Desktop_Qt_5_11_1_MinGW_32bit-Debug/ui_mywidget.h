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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QLabel *label_3;
    QToolButton *toolButton_2;
    QToolBox *toolBox;
    QWidget *page_3;
    QWidget *page_5;
    QWidget *page_4;
    QToolBox *toolBox_2;
    QWidget *page_6;
    QWidget *page_8;
    QWidget *page_7;
    QWidget *page_9;
    QStackedWidget *stackedWidget_2;
    QWidget *page_10;
    QPushButton *pushButton;
    QWidget *page_11;
    QToolButton *toolButton;
    QComboBox *comboBox;
    QListWidget *listWidget_2;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(577, 381);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 20, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 191, 91));
        label->setScaledContents(true);
        label->setWordWrap(false);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 130, 121, 41));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setProperty("value", QVariant(456.123));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(150, 100, 81, 101));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(240, 100, 141, 101));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 54, 12));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 30, 75, 23));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 50, 54, 12));
        toolButton_2 = new QToolButton(page_2);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(50, 20, 37, 18));
        stackedWidget->addWidget(page_2);
        toolBox = new QToolBox(MyWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(30, 180, 69, 101));
        toolBox->setFrameShape(QFrame::Box);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 67, 21));
        toolBox->addItem(page_3, QString::fromUtf8("\345\245\275\345\217\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 67, 21));
        toolBox->addItem(page_5, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 67, 21));
        toolBox->addItem(page_4, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));
        toolBox_2 = new QToolBox(MyWidget);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(460, 130, 71, 121));
        toolBox_2->setFrameShape(QFrame::WinPanel);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 67, 19));
        toolBox_2->addItem(page_6, QStringLiteral("Page 11111111111"));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        toolBox_2->addItem(page_8, QString::fromUtf8("\351\241\265"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 67, 19));
        toolBox_2->addItem(page_7, QStringLiteral("Page 2"));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        toolBox_2->addItem(page_9, QString::fromUtf8("\351\241\265"));
        stackedWidget_2 = new QStackedWidget(MyWidget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(280, 250, 120, 80));
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        pushButton = new QPushButton(page_10);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 75, 23));
        stackedWidget_2->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        toolButton = new QToolButton(page_11);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(30, 20, 37, 18));
        stackedWidget_2->addWidget(page_11);
        comboBox = new QComboBox(MyWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 230, 69, 22));
        listWidget_2 = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(160, 270, 91, 131));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(listWidget_2, SIGNAL(currentRowChanged(int)), stackedWidget_2, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(2);
        toolBox_2->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        pushButton_2->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        label_3->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        toolButton_2->setText(QApplication::translate("MyWidget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MyWidget", "\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MyWidget", "\351\273\221\345\220\215\345\215\225", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MyWidget", "\351\231\214\347\224\237\344\272\272", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_6), QApplication::translate("MyWidget", "Page 11111111111", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_8), QApplication::translate("MyWidget", "\351\241\265", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_7), QApplication::translate("MyWidget", "Page 2", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_9), QApplication::translate("MyWidget", "\351\241\265", nullptr));
        pushButton->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        toolButton->setText(QApplication::translate("MyWidget", "...", nullptr));
        comboBox->setItemText(0, QApplication::translate("MyWidget", "11", nullptr));
        comboBox->setItemText(1, QApplication::translate("MyWidget", "222", nullptr));


        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("MyWidget", "11", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("MyWidget", "22", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
