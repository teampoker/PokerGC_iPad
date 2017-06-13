/********************************************************************************
** Form generated from reading UI file 'serverlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERLISTDIALOG_H
#define UI_SERVERLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerListDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget_serverList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ServerListDialog)
    {
        if (ServerListDialog->objectName().isEmpty())
            ServerListDialog->setObjectName(QStringLiteral("ServerListDialog"));
        ServerListDialog->resize(289, 241);
        gridLayout = new QGridLayout(ServerListDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget_serverList = new QTreeWidget(ServerListDialog);
        treeWidget_serverList->setObjectName(QStringLiteral("treeWidget_serverList"));
        treeWidget_serverList->setAlternatingRowColors(true);
        treeWidget_serverList->setRootIsDecorated(false);

        gridLayout->addWidget(treeWidget_serverList, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ServerListDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ServerListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ServerListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ServerListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ServerListDialog);
    } // setupUi

    void retranslateUi(QDialog *ServerListDialog)
    {
        ServerListDialog->setWindowTitle(QApplication::translate("ServerListDialog", "Server List", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_serverList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ServerListDialog", "Country/Region", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ServerListDialog", "Server Name", 0));
    } // retranslateUi

};

namespace Ui {
    class ServerListDialog: public Ui_ServerListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERLISTDIALOG_H
