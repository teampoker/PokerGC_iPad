/********************************************************************************
** Form generated from reading UI file 'startnetworkgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTNETWORKGAMEDIALOG_H
#define UI_STARTNETWORKGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_startNetworkGameDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QCheckBox *checkBox_fillUpWithComputerOpponents;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_maxPlayerNumber;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_Kick;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTextBrowser *textBrowser_ChatDisplay;
    QLineEdit *lineEdit_ChatInput;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *pushButton_startGame;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *startNetworkGameDialog)
    {
        if (startNetworkGameDialog->objectName().isEmpty())
            startNetworkGameDialog->setObjectName(QStringLiteral("startNetworkGameDialog"));
        startNetworkGameDialog->resize(403, 560);
        gridLayout = new QGridLayout(startNetworkGameDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(startNetworkGameDialog);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        checkBox_fillUpWithComputerOpponents = new QCheckBox(startNetworkGameDialog);
        checkBox_fillUpWithComputerOpponents->setObjectName(QStringLiteral("checkBox_fillUpWithComputerOpponents"));

        gridLayout->addWidget(checkBox_fillUpWithComputerOpponents, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(startNetworkGameDialog);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        label_maxPlayerNumber = new QLabel(startNetworkGameDialog);
        label_maxPlayerNumber->setObjectName(QStringLiteral("label_maxPlayerNumber"));

        hboxLayout->addWidget(label_maxPlayerNumber);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton_Kick = new QPushButton(startNetworkGameDialog);
        pushButton_Kick->setObjectName(QStringLiteral("pushButton_Kick"));

        hboxLayout->addWidget(pushButton_Kick);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        groupBox = new QGroupBox(startNetworkGameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setHorizontalSpacing(0);
        gridLayout1->setVerticalSpacing(0);
        gridLayout1->setContentsMargins(7, 7, 7, 7);
        textBrowser_ChatDisplay = new QTextBrowser(groupBox);
        textBrowser_ChatDisplay->setObjectName(QStringLiteral("textBrowser_ChatDisplay"));

        gridLayout1->addWidget(textBrowser_ChatDisplay, 0, 0, 1, 1);

        lineEdit_ChatInput = new QLineEdit(groupBox);
        lineEdit_ChatInput->setObjectName(QStringLiteral("lineEdit_ChatInput"));

        gridLayout1->addWidget(lineEdit_ChatInput, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        line = new QFrame(startNetworkGameDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        pushButton_startGame = new QPushButton(startNetworkGameDialog);
        pushButton_startGame->setObjectName(QStringLiteral("pushButton_startGame"));

        hboxLayout1->addWidget(pushButton_startGame);

        pushButton_cancel = new QPushButton(startNetworkGameDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        hboxLayout1->addWidget(pushButton_cancel);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 1);

        QWidget::setTabOrder(treeWidget, checkBox_fillUpWithComputerOpponents);
        QWidget::setTabOrder(checkBox_fillUpWithComputerOpponents, pushButton_Kick);
        QWidget::setTabOrder(pushButton_Kick, textBrowser_ChatDisplay);
        QWidget::setTabOrder(textBrowser_ChatDisplay, lineEdit_ChatInput);
        QWidget::setTabOrder(lineEdit_ChatInput, pushButton_startGame);
        QWidget::setTabOrder(pushButton_startGame, pushButton_cancel);

        retranslateUi(startNetworkGameDialog);
        QObject::connect(pushButton_startGame, SIGNAL(clicked()), startNetworkGameDialog, SLOT(accept()));
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), startNetworkGameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(startNetworkGameDialog);
    } // setupUi

    void retranslateUi(QDialog *startNetworkGameDialog)
    {
        startNetworkGameDialog->setWindowTitle(QApplication::translate("startNetworkGameDialog", "Start Network Game", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("startNetworkGameDialog", "Connected Players", 0));
        checkBox_fillUpWithComputerOpponents->setText(QApplication::translate("startNetworkGameDialog", "Fill up with computer opponents", 0));
        label->setText(QApplication::translate("startNetworkGameDialog", "Maximum number of players:", 0));
        label_maxPlayerNumber->setText(QApplication::translate("startNetworkGameDialog", "0", 0));
        pushButton_Kick->setText(QApplication::translate("startNetworkGameDialog", "Kick Player", 0));
        groupBox->setTitle(QApplication::translate("startNetworkGameDialog", "Chat", 0));
        pushButton_startGame->setText(QApplication::translate("startNetworkGameDialog", "Start Game", 0));
        pushButton_cancel->setText(QApplication::translate("startNetworkGameDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class startNetworkGameDialog: public Ui_startNetworkGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTNETWORKGAMEDIALOG_H
