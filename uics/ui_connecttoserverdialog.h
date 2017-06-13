/********************************************************************************
** Form generated from reading UI file 'connecttoserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTTOSERVERDIALOG_H
#define UI_CONNECTTOSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_connectToServerDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_actionMessage;
    QProgressBar *progressBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_cancel;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *connectToServerDialog)
    {
        if (connectToServerDialog->objectName().isEmpty())
            connectToServerDialog->setObjectName(QStringLiteral("connectToServerDialog"));
        connectToServerDialog->resize(260, 118);
        gridLayout = new QGridLayout(connectToServerDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_actionMessage = new QLabel(connectToServerDialog);
        label_actionMessage->setObjectName(QStringLiteral("label_actionMessage"));
        label_actionMessage->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_actionMessage, 0, 0, 1, 1);

        progressBar = new QProgressBar(connectToServerDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(5, 5, 5, 5);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton_cancel = new QPushButton(connectToServerDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        hboxLayout->addWidget(pushButton_cancel);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);


        retranslateUi(connectToServerDialog);
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), connectToServerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(connectToServerDialog);
    } // setupUi

    void retranslateUi(QDialog *connectToServerDialog)
    {
        connectToServerDialog->setWindowTitle(QApplication::translate("connectToServerDialog", "Connect to Server", 0));
        label_actionMessage->setText(QApplication::translate("connectToServerDialog", "Connecting to Server ...", 0));
        pushButton_cancel->setText(QApplication::translate("connectToServerDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class connectToServerDialog: public Ui_connectToServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTTOSERVERDIALOG_H
