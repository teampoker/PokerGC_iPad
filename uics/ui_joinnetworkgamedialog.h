/********************************************************************************
** Form generated from reading UI file 'joinnetworkgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINNETWORKGAMEDIALOG_H
#define UI_JOINNETWORKGAMEDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_joinNetworkGameDialog
{
public:
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_close;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_profileName;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ipAddress;
    QLabel *label_2;
    QSpinBox *spinBox_port;
    QHBoxLayout *hboxLayout1;
    QCheckBox *checkBox_ipv6;
    QLabel *label_5;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QCheckBox *checkBox_sctp;
    QLabel *label_6;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout3;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *joinNetworkGameDialog)
    {
        if (joinNetworkGameDialog->objectName().isEmpty())
            joinNetworkGameDialog->setObjectName(QStringLiteral("joinNetworkGameDialog"));
        joinNetworkGameDialog->resize(614, 458);
        gridLayout2 = new QGridLayout(joinNetworkGameDialog);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton_connect = new QPushButton(joinNetworkGameDialog);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setMinimumSize(QSize(198, 0));

        hboxLayout->addWidget(pushButton_connect);

        pushButton_close = new QPushButton(joinNetworkGameDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        hboxLayout->addWidget(pushButton_close);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(joinNetworkGameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_profileName = new QLineEdit(groupBox);
        lineEdit_profileName->setObjectName(QStringLiteral("lineEdit_profileName"));

        horizontalLayout_2->addWidget(lineEdit_profileName);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_ipAddress = new QLineEdit(groupBox);
        lineEdit_ipAddress->setObjectName(QStringLiteral("lineEdit_ipAddress"));

        horizontalLayout->addWidget(lineEdit_ipAddress);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox_port = new QSpinBox(groupBox);
        spinBox_port->setObjectName(QStringLiteral("spinBox_port"));
        spinBox_port->setMinimum(80);
        spinBox_port->setMaximum(65535);
        spinBox_port->setValue(7234);

        horizontalLayout->addWidget(spinBox_port);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        checkBox_ipv6 = new QCheckBox(groupBox);
        checkBox_ipv6->setObjectName(QStringLiteral("checkBox_ipv6"));

        hboxLayout1->addWidget(checkBox_ipv6);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setOpenExternalLinks(true);

        hboxLayout1->addWidget(label_5);

        spacerItem1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        checkBox_sctp = new QCheckBox(groupBox);
        checkBox_sctp->setObjectName(QStringLiteral("checkBox_sctp"));

        hboxLayout2->addWidget(checkBox_sctp);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setOpenExternalLinks(true);

        hboxLayout2->addWidget(label_6);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        gridLayout->addLayout(hboxLayout2, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout3 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        treeWidget = new QTreeWidget(groupBox_2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setIndentation(15);
        treeWidget->setRootIsDecorated(false);
        treeWidget->setSortingEnabled(true);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(true);

        gridLayout3->addWidget(treeWidget, 0, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        pushButton_save = new QPushButton(groupBox_2);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        hboxLayout3->addWidget(pushButton_save);

        pushButton_delete = new QPushButton(groupBox_2);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        hboxLayout3->addWidget(pushButton_delete);


        gridLayout3->addLayout(hboxLayout3, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 2);


        gridLayout2->addWidget(groupBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(lineEdit_profileName);
        label->setBuddy(lineEdit_ipAddress);
        label_2->setBuddy(spinBox_port);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_profileName, lineEdit_ipAddress);
        QWidget::setTabOrder(lineEdit_ipAddress, spinBox_port);
        QWidget::setTabOrder(spinBox_port, checkBox_ipv6);
        QWidget::setTabOrder(checkBox_ipv6, checkBox_sctp);
        QWidget::setTabOrder(checkBox_sctp, treeWidget);
        QWidget::setTabOrder(treeWidget, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_delete);
        QWidget::setTabOrder(pushButton_delete, pushButton_connect);
        QWidget::setTabOrder(pushButton_connect, pushButton_close);

        retranslateUi(joinNetworkGameDialog);
        QObject::connect(pushButton_connect, SIGNAL(clicked()), joinNetworkGameDialog, SLOT(accept()));
        QObject::connect(pushButton_close, SIGNAL(clicked()), joinNetworkGameDialog, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), pushButton_connect, SLOT(click()));

        QMetaObject::connectSlotsByName(joinNetworkGameDialog);
    } // setupUi

    void retranslateUi(QDialog *joinNetworkGameDialog)
    {
        joinNetworkGameDialog->setWindowTitle(QApplication::translate("joinNetworkGameDialog", "Join Network Game", 0));
        pushButton_connect->setText(QApplication::translate("joinNetworkGameDialog", "Connect", 0));
        pushButton_close->setText(QApplication::translate("joinNetworkGameDialog", "Close", 0));
        groupBox->setTitle(QApplication::translate("joinNetworkGameDialog", "Connect to Network Game", 0));
        label_4->setText(QApplication::translate("joinNetworkGameDialog", "Profile Name:", 0));
        lineEdit_profileName->setText(QApplication::translate("joinNetworkGameDialog", "myServerProfile1", 0));
        label->setText(QApplication::translate("joinNetworkGameDialog", "IP Address / Domain Name:", 0));
        label_2->setText(QApplication::translate("joinNetworkGameDialog", "Port:", 0));
        checkBox_ipv6->setText(QApplication::translate("joinNetworkGameDialog", "Use IPv6", 0));
        label_5->setText(QApplication::translate("joinNetworkGameDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   <a href=\"http://en.wikipedia.org/wiki/Ipv6\"><span style=\" text-decoration: underline; color:#0000ff;\">What is this?</span></a></p></body></html>", 0));
        checkBox_sctp->setText(QApplication::translate("joinNetworkGameDialog", "Use SCTP", 0));
        label_6->setText(QApplication::translate("joinNetworkGameDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  <a href=\"http://en.wikipedia.org/wiki/Stream_Control_Transmission_Protocol\"><span style=\" text-decoration: underline; color:#0000ff;\">What is this?</span></a></p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("joinNetworkGameDialog", "Server Profiles", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("joinNetworkGameDialog", "SCTP", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("joinNetworkGameDialog", "IPv6", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("joinNetworkGameDialog", "Port", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("joinNetworkGameDialog", "Address", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("joinNetworkGameDialog", "Name", 0));
        pushButton_save->setText(QApplication::translate("joinNetworkGameDialog", "Save", 0));
        pushButton_delete->setText(QApplication::translate("joinNetworkGameDialog", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class joinNetworkGameDialog: public Ui_joinNetworkGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINNETWORKGAMEDIALOG_H
