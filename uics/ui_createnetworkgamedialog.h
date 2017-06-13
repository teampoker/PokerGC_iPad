/********************************************************************************
** Form generated from reading UI file 'createnetworkgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENETWORKGAMEDIALOG_H
#define UI_CREATENETWORKGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_createNetworkGameDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QSpinBox *spinBox_quantityPlayers;
    QLabel *label_2;
    QSpinBox *spinBox_startCash;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QRadioButton *radioButton_useSavedBlindsSettings;
    QRadioButton *radioButton_changeBlindsSettings;
    QLabel *label_6;
    QLabel *label_5;
    QSpinBox *spinBox_netTimeOutPlayerAction;
    QSpinBox *spinBox_netDelayBetweenHands;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_createGame;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *createNetworkGameDialog)
    {
        if (createNetworkGameDialog->objectName().isEmpty())
            createNetworkGameDialog->setObjectName(QStringLiteral("createNetworkGameDialog"));
        createNetworkGameDialog->resize(336, 302);
        gridLayout = new QGridLayout(createNetworkGameDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(createNetworkGameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(-1, 9, -1, -1);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        spinBox_quantityPlayers = new QSpinBox(groupBox);
        spinBox_quantityPlayers->setObjectName(QStringLiteral("spinBox_quantityPlayers"));
        spinBox_quantityPlayers->setMinimum(2);
        spinBox_quantityPlayers->setMaximum(10);
        spinBox_quantityPlayers->setValue(10);

        gridLayout1->addWidget(spinBox_quantityPlayers, 0, 1, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        spinBox_startCash = new QSpinBox(groupBox);
        spinBox_startCash->setObjectName(QStringLiteral("spinBox_startCash"));
        spinBox_startCash->setMinimum(1000);
        spinBox_startCash->setMaximum(1000000);
        spinBox_startCash->setValue(2000);

        gridLayout1->addWidget(spinBox_startCash, 1, 1, 1, 3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(-1, 0, -1, -1);
        radioButton_useSavedBlindsSettings = new QRadioButton(groupBox_2);
        radioButton_useSavedBlindsSettings->setObjectName(QStringLiteral("radioButton_useSavedBlindsSettings"));
        radioButton_useSavedBlindsSettings->setChecked(true);

        gridLayout2->addWidget(radioButton_useSavedBlindsSettings, 0, 0, 1, 1);

        radioButton_changeBlindsSettings = new QRadioButton(groupBox_2);
        radioButton_changeBlindsSettings->setObjectName(QStringLiteral("radioButton_changeBlindsSettings"));

        gridLayout2->addWidget(radioButton_changeBlindsSettings, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox_2, 2, 0, 1, 4);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout1->addWidget(label_6, 4, 0, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout1->addWidget(label_5, 5, 0, 1, 3);

        spinBox_netTimeOutPlayerAction = new QSpinBox(groupBox);
        spinBox_netTimeOutPlayerAction->setObjectName(QStringLiteral("spinBox_netTimeOutPlayerAction"));
        spinBox_netTimeOutPlayerAction->setMinimum(0);
        spinBox_netTimeOutPlayerAction->setMaximum(60);
        spinBox_netTimeOutPlayerAction->setValue(20);

        gridLayout1->addWidget(spinBox_netTimeOutPlayerAction, 4, 3, 1, 1);

        spinBox_netDelayBetweenHands = new QSpinBox(groupBox);
        spinBox_netDelayBetweenHands->setObjectName(QStringLiteral("spinBox_netDelayBetweenHands"));
        spinBox_netDelayBetweenHands->setMinimum(5);
        spinBox_netDelayBetweenHands->setMaximum(20);
        spinBox_netDelayBetweenHands->setValue(7);

        gridLayout1->addWidget(spinBox_netDelayBetweenHands, 5, 3, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton_createGame = new QPushButton(createNetworkGameDialog);
        pushButton_createGame->setObjectName(QStringLiteral("pushButton_createGame"));

        hboxLayout->addWidget(pushButton_createGame);

        pushButton_cancel = new QPushButton(createNetworkGameDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        hboxLayout->addWidget(pushButton_cancel);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox_quantityPlayers);
        label_2->setBuddy(spinBox_startCash);
        label_6->setBuddy(spinBox_netTimeOutPlayerAction);
        label_5->setBuddy(spinBox_netDelayBetweenHands);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinBox_quantityPlayers, spinBox_startCash);
        QWidget::setTabOrder(spinBox_startCash, radioButton_useSavedBlindsSettings);
        QWidget::setTabOrder(radioButton_useSavedBlindsSettings, radioButton_changeBlindsSettings);
        QWidget::setTabOrder(radioButton_changeBlindsSettings, spinBox_netTimeOutPlayerAction);
        QWidget::setTabOrder(spinBox_netTimeOutPlayerAction, spinBox_netDelayBetweenHands);
        QWidget::setTabOrder(spinBox_netDelayBetweenHands, pushButton_createGame);
        QWidget::setTabOrder(pushButton_createGame, pushButton_cancel);

        retranslateUi(createNetworkGameDialog);
        QObject::connect(pushButton_createGame, SIGNAL(clicked()), createNetworkGameDialog, SLOT(accept()));
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), createNetworkGameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(createNetworkGameDialog);
    } // setupUi

    void retranslateUi(QDialog *createNetworkGameDialog)
    {
        createNetworkGameDialog->setWindowTitle(QApplication::translate("createNetworkGameDialog", "Create Network Game", 0));
        groupBox->setTitle(QApplication::translate("createNetworkGameDialog", "Network Game Settings", 0));
        label->setText(QApplication::translate("createNetworkGameDialog", "Maximum number of players:", 0));
        label_2->setText(QApplication::translate("createNetworkGameDialog", "Start Cash:", 0));
        spinBox_startCash->setSuffix(QString());
        spinBox_startCash->setPrefix(QApplication::translate("createNetworkGameDialog", "$", 0));
        groupBox_2->setTitle(QApplication::translate("createNetworkGameDialog", "Blinds", 0));
        radioButton_useSavedBlindsSettings->setText(QApplication::translate("createNetworkGameDialog", "Use saved blinds settings", 0));
        radioButton_changeBlindsSettings->setText(QApplication::translate("createNetworkGameDialog", "Change blinds settings ...", 0));
        label_6->setText(QApplication::translate("createNetworkGameDialog", "Timeout for player action:", 0));
        label_5->setText(QApplication::translate("createNetworkGameDialog", "Delay between hands:", 0));
        spinBox_netTimeOutPlayerAction->setSuffix(QApplication::translate("createNetworkGameDialog", " s", 0));
        spinBox_netDelayBetweenHands->setSuffix(QApplication::translate("createNetworkGameDialog", " s", 0));
        pushButton_createGame->setText(QApplication::translate("createNetworkGameDialog", "Create Game", 0));
        pushButton_cancel->setText(QApplication::translate("createNetworkGameDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class createNetworkGameDialog: public Ui_createNetworkGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENETWORKGAMEDIALOG_H
