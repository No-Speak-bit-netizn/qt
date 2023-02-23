/********************************************************************************
** Form generated from reading UI file 'chatbox.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOX_H
#define UI_CHATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatBox
{
public:
    QLabel *label;
    QPushButton *settings;
    QPushButton *user;
    QWidget *widget;
    QLineEdit *lineEdit;
    QPushButton *add;
    QListWidget *FriendList;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QPushButton *send;

    void setupUi(QWidget *ChatBox)
    {
        if (ChatBox->objectName().isEmpty())
            ChatBox->setObjectName("ChatBox");
        ChatBox->resize(800, 600);
        label = new QLabel(ChatBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 51, 601));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);\n"
"border-color: rgb(88, 88, 88);"));
        settings = new QPushButton(ChatBox);
        settings->setObjectName("settings");
        settings->setGeometry(QRect(10, 550, 30, 30));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setCursor(QCursor(Qt::PointingHandCursor));
        settings->setLayoutDirection(Qt::LeftToRight);
        settings->setAutoFillBackground(false);
        settings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/images/setting2.png);\n"
"	min-width: 30px;\n"
"	max-width: 30px;\n"
"	min-height: 30px;\n"
"	max-height: 30px;\n"
"}"));
        user = new QPushButton(ChatBox);
        user->setObjectName("user");
        user->setGeometry(QRect(10, 20, 31, 31));
        user->setCursor(QCursor(Qt::PointingHandCursor));
        user->setStyleSheet(QString::fromUtf8("image: url(:/new/profile.jpg);"));
        widget = new QWidget(ChatBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 0, 251, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 161, 21));
        add = new QPushButton(widget);
        add->setObjectName("add");
        add->setGeometry(QRect(200, 20, 21, 21));
        add->setCursor(QCursor(Qt::PointingHandCursor));
        add->setStyleSheet(QString::fromUtf8("image: url(:/new/tianjia.png);\n"
"border:none;"));
        FriendList = new QListWidget(ChatBox);
        FriendList->setObjectName("FriendList");
        FriendList->setGeometry(QRect(50, 60, 251, 541));
        FriendList->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(ChatBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(300, 520, 501, 81));
        textEdit->setStyleSheet(QString::fromUtf8("border:none;"));
        textBrowser = new QTextBrowser(ChatBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(300, 0, 501, 521));
        send = new QPushButton(ChatBox);
        send->setObjectName("send");
        send->setGeometry(QRect(720, 570, 80, 24));
        QPalette palette;
        QBrush brush(QColor(0, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        send->setPalette(palette);
        send->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        label->raise();
        textEdit->raise();
        widget->raise();
        user->raise();
        settings->raise();
        textBrowser->raise();
        FriendList->raise();
        send->raise();

        retranslateUi(ChatBox);

        QMetaObject::connectSlotsByName(ChatBox);
    } // setupUi

    void retranslateUi(QWidget *ChatBox)
    {
        ChatBox->setWindowTitle(QCoreApplication::translate("ChatBox", "ChatBox", nullptr));
        label->setText(QString());
        settings->setText(QString());
        user->setText(QString());
        lineEdit->setText(QString());
        add->setText(QString());
        send->setText(QCoreApplication::translate("ChatBox", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatBox: public Ui_ChatBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOX_H
