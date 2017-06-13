/********************************************************************************
** Form generated from reading UI file 'internetgamelogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNETGAMELOGINDIALOG_H
#define UI_INTERNETGAMELOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_internetGameLoginDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_reguser;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox_rememberPassword;
    QCheckBox *checkBox_guest;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login;
    QPushButton *pushButton_cancel;
    QLabel *label_createAnAccount;

    void setupUi(QDialog *internetGameLoginDialog)
    {
        if (internetGameLoginDialog->objectName().isEmpty())
            internetGameLoginDialog->setObjectName(QStringLiteral("internetGameLoginDialog"));
        internetGameLoginDialog->resize(300, 230);
        gridLayout_2 = new QGridLayout(internetGameLoginDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_reguser = new QGroupBox(internetGameLoginDialog);
        groupBox_reguser->setObjectName(QStringLiteral("groupBox_reguser"));
        groupBox_reguser->setCheckable(true);
        gridLayout = new QGridLayout(groupBox_reguser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_reguser);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_username = new QLineEdit(groupBox_reguser);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_reguser);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(groupBox_reguser);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        checkBox_rememberPassword = new QCheckBox(groupBox_reguser);
        checkBox_rememberPassword->setObjectName(QStringLiteral("checkBox_rememberPassword"));

        gridLayout->addWidget(checkBox_rememberPassword, 2, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_reguser, 0, 0, 1, 1);

        checkBox_guest = new QCheckBox(internetGameLoginDialog);
        checkBox_guest->setObjectName(QStringLiteral("checkBox_guest"));

        gridLayout_2->addWidget(checkBox_guest, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_login = new QPushButton(internetGameLoginDialog);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        horizontalLayout->addWidget(pushButton_login);

        pushButton_cancel = new QPushButton(internetGameLoginDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        label_createAnAccount = new QLabel(internetGameLoginDialog);
        label_createAnAccount->setObjectName(QStringLiteral("label_createAnAccount"));
        label_createAnAccount->setOpenExternalLinks(true);

        gridLayout_2->addWidget(label_createAnAccount, 3, 0, 1, 1);

        QWidget::setTabOrder(groupBox_reguser, lineEdit_username);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, checkBox_rememberPassword);
        QWidget::setTabOrder(checkBox_rememberPassword, checkBox_guest);
        QWidget::setTabOrder(checkBox_guest, pushButton_login);
        QWidget::setTabOrder(pushButton_login, pushButton_cancel);

        retranslateUi(internetGameLoginDialog);
        QObject::connect(pushButton_login, SIGNAL(clicked()), internetGameLoginDialog, SLOT(accept()));
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), internetGameLoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(internetGameLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *internetGameLoginDialog)
    {
        internetGameLoginDialog->setWindowTitle(QApplication::translate("internetGameLoginDialog", "Internet Game Login", 0));
        groupBox_reguser->setTitle(QApplication::translate("internetGameLoginDialog", "Registered user", 0));
        label->setText(QApplication::translate("internetGameLoginDialog", "Username:", 0));
        label_2->setText(QApplication::translate("internetGameLoginDialog", "Password:", 0));
        checkBox_rememberPassword->setText(QApplication::translate("internetGameLoginDialog", "Remember password (not recommended)", 0));
        checkBox_guest->setText(QApplication::translate("internetGameLoginDialog", "Login as GUEST ALIEN", 0));
        pushButton_login->setText(QApplication::translate("internetGameLoginDialog", "Login", 0));
        pushButton_cancel->setText(QApplication::translate("internetGameLoginDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class internetGameLoginDialog: public Ui_internetGameLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNETGAMELOGINDIALOG_H
