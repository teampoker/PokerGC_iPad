/********************************************************************************
** Form generated from reading UI file 'createinternetgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEINTERNETGAMEDIALOG_H
#define UI_CREATEINTERNETGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_createInternetGameDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_23;
    QLineEdit *lineEdit_gameName;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_gameType;
    QHBoxLayout *hboxLayout;
    QCheckBox *checkBox_Password;
    QLineEdit *lineEdit_Password;
    QFrame *line;
    QLabel *label;
    QSpinBox *spinBox_quantityPlayers;
    QLabel *label_2;
    QSpinBox *spinBox_startCash;
    QGroupBox *groupBox_blinds;
    QGridLayout *gridLayout1;
    QRadioButton *radioButton_useSavedBlindsSettings;
    QRadioButton *radioButton_changeBlindsSettings;
    QLabel *label_6;
    QSpinBox *spinBox_netTimeOutPlayerAction;
    QLabel *label_5;
    QSpinBox *spinBox_netDelayBetweenHands;
    QCheckBox *checkBox_allowSpectators;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_createGame;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *createInternetGameDialog)
    {
        if (createInternetGameDialog->objectName().isEmpty())
            createInternetGameDialog->setObjectName(QStringLiteral("createInternetGameDialog"));
        createInternetGameDialog->resize(293, 410);
        gridLayout_2 = new QGridLayout(createInternetGameDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(createInternetGameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_8->addWidget(label_23);

        lineEdit_gameName = new QLineEdit(groupBox);
        lineEdit_gameName->setObjectName(QStringLiteral("lineEdit_gameName"));
        lineEdit_gameName->setMaxLength(48);

        horizontalLayout_8->addWidget(lineEdit_gameName);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_gameType = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QStringLiteral(":/gfx/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_gameType->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gfx/registered.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_gameType->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gfx/list_add_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_gameType->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gfx/cup.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_gameType->addItem(icon3, QString());
        comboBox_gameType->setObjectName(QStringLiteral("comboBox_gameType"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_gameType->sizePolicy().hasHeightForWidth());
        comboBox_gameType->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox_gameType);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_Password = new QCheckBox(groupBox);
        checkBox_Password->setObjectName(QStringLiteral("checkBox_Password"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gfx/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_Password->setIcon(icon4);

        hboxLayout->addWidget(checkBox_Password);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setEnabled(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        hboxLayout->addWidget(lineEdit_Password);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        spinBox_quantityPlayers = new QSpinBox(groupBox);
        spinBox_quantityPlayers->setObjectName(QStringLiteral("spinBox_quantityPlayers"));
        spinBox_quantityPlayers->setMinimum(2);
        spinBox_quantityPlayers->setMaximum(10);
        spinBox_quantityPlayers->setValue(10);

        gridLayout->addWidget(spinBox_quantityPlayers, 5, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        spinBox_startCash = new QSpinBox(groupBox);
        spinBox_startCash->setObjectName(QStringLiteral("spinBox_startCash"));
        spinBox_startCash->setMinimum(1000);
        spinBox_startCash->setMaximum(1000000);
        spinBox_startCash->setSingleStep(50);
        spinBox_startCash->setValue(2000);

        gridLayout->addWidget(spinBox_startCash, 6, 1, 1, 1);

        groupBox_blinds = new QGroupBox(groupBox);
        groupBox_blinds->setObjectName(QStringLiteral("groupBox_blinds"));
        gridLayout1 = new QGridLayout(groupBox_blinds);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(-1, 0, -1, -1);
        radioButton_useSavedBlindsSettings = new QRadioButton(groupBox_blinds);
        radioButton_useSavedBlindsSettings->setObjectName(QStringLiteral("radioButton_useSavedBlindsSettings"));
        radioButton_useSavedBlindsSettings->setChecked(true);

        gridLayout1->addWidget(radioButton_useSavedBlindsSettings, 0, 0, 1, 1);

        radioButton_changeBlindsSettings = new QRadioButton(groupBox_blinds);
        radioButton_changeBlindsSettings->setObjectName(QStringLiteral("radioButton_changeBlindsSettings"));

        gridLayout1->addWidget(radioButton_changeBlindsSettings, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_blinds, 7, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        spinBox_netTimeOutPlayerAction = new QSpinBox(groupBox);
        spinBox_netTimeOutPlayerAction->setObjectName(QStringLiteral("spinBox_netTimeOutPlayerAction"));
        spinBox_netTimeOutPlayerAction->setMinimum(5);
        spinBox_netTimeOutPlayerAction->setMaximum(60);
        spinBox_netTimeOutPlayerAction->setValue(20);

        gridLayout->addWidget(spinBox_netTimeOutPlayerAction, 8, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        spinBox_netDelayBetweenHands = new QSpinBox(groupBox);
        spinBox_netDelayBetweenHands->setObjectName(QStringLiteral("spinBox_netDelayBetweenHands"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_netDelayBetweenHands->sizePolicy().hasHeightForWidth());
        spinBox_netDelayBetweenHands->setSizePolicy(sizePolicy2);
        spinBox_netDelayBetweenHands->setMinimum(5);
        spinBox_netDelayBetweenHands->setMaximum(20);
        spinBox_netDelayBetweenHands->setValue(7);

        gridLayout->addWidget(spinBox_netDelayBetweenHands, 9, 1, 1, 1);

        checkBox_allowSpectators = new QCheckBox(groupBox);
        checkBox_allowSpectators->setObjectName(QStringLiteral("checkBox_allowSpectators"));

        gridLayout->addWidget(checkBox_allowSpectators, 3, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        pushButton_createGame = new QPushButton(createInternetGameDialog);
        pushButton_createGame->setObjectName(QStringLiteral("pushButton_createGame"));

        hboxLayout1->addWidget(pushButton_createGame);

        pushButton_cancel = new QPushButton(createInternetGameDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        hboxLayout1->addWidget(pushButton_cancel);


        gridLayout_2->addLayout(hboxLayout1, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox_quantityPlayers);
        label_2->setBuddy(spinBox_startCash);
        label_6->setBuddy(spinBox_netTimeOutPlayerAction);
        label_5->setBuddy(spinBox_netDelayBetweenHands);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_gameName, comboBox_gameType);
        QWidget::setTabOrder(comboBox_gameType, checkBox_Password);
        QWidget::setTabOrder(checkBox_Password, lineEdit_Password);
        QWidget::setTabOrder(lineEdit_Password, spinBox_quantityPlayers);
        QWidget::setTabOrder(spinBox_quantityPlayers, spinBox_startCash);
        QWidget::setTabOrder(spinBox_startCash, radioButton_useSavedBlindsSettings);
        QWidget::setTabOrder(radioButton_useSavedBlindsSettings, radioButton_changeBlindsSettings);
        QWidget::setTabOrder(radioButton_changeBlindsSettings, spinBox_netTimeOutPlayerAction);
        QWidget::setTabOrder(spinBox_netTimeOutPlayerAction, spinBox_netDelayBetweenHands);
        QWidget::setTabOrder(spinBox_netDelayBetweenHands, pushButton_createGame);
        QWidget::setTabOrder(pushButton_createGame, pushButton_cancel);

        retranslateUi(createInternetGameDialog);
        QObject::connect(pushButton_createGame, SIGNAL(clicked()), createInternetGameDialog, SLOT(accept()));
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), createInternetGameDialog, SLOT(reject()));
        QObject::connect(checkBox_Password, SIGNAL(toggled(bool)), lineEdit_Password, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(createInternetGameDialog);
    } // setupUi

    void retranslateUi(QDialog *createInternetGameDialog)
    {
        createInternetGameDialog->setWindowTitle(QApplication::translate("createInternetGameDialog", "Create Internet Game", 0));
        groupBox->setTitle(QApplication::translate("createInternetGameDialog", "Internet Game Settings", 0));
        label_23->setText(QApplication::translate("createInternetGameDialog", "Default game name:", 0));
        label_3->setText(QApplication::translate("createInternetGameDialog", "Game type:", 0));
        comboBox_gameType->setItemText(0, QApplication::translate("createInternetGameDialog", "Standard", 0));
        comboBox_gameType->setItemText(1, QApplication::translate("createInternetGameDialog", "Registered players only", 0));
        comboBox_gameType->setItemText(2, QApplication::translate("createInternetGameDialog", "PRIVATE POKER TABLE\342\204\242", 0));
        comboBox_gameType->setItemText(3, QApplication::translate("createInternetGameDialog", "Ranking game", 0));

        checkBox_Password->setText(QApplication::translate("createInternetGameDialog", "Password:", 0));
        label->setText(QApplication::translate("createInternetGameDialog", "Maximum number of players:", 0));
        label_2->setText(QApplication::translate("createInternetGameDialog", "Start Cash:", 0));
        spinBox_startCash->setSuffix(QString());
        spinBox_startCash->setPrefix(QApplication::translate("createInternetGameDialog", "$", 0));
        groupBox_blinds->setTitle(QApplication::translate("createInternetGameDialog", "Blinds", 0));
        radioButton_useSavedBlindsSettings->setText(QApplication::translate("createInternetGameDialog", "Use saved blinds settings", 0));
        radioButton_changeBlindsSettings->setText(QApplication::translate("createInternetGameDialog", "Change blinds settings ...", 0));
        label_6->setText(QApplication::translate("createInternetGameDialog", "Timeout for player action:", 0));
        spinBox_netTimeOutPlayerAction->setSuffix(QApplication::translate("createInternetGameDialog", " s", 0));
        label_5->setText(QApplication::translate("createInternetGameDialog", "Delay between hands:", 0));
        spinBox_netDelayBetweenHands->setSuffix(QApplication::translate("createInternetGameDialog", " s", 0));
        checkBox_allowSpectators->setText(QApplication::translate("createInternetGameDialog", "Allow spectators to watch the game", 0));
        pushButton_createGame->setText(QApplication::translate("createInternetGameDialog", "Create Game", 0));
        pushButton_cancel->setText(QApplication::translate("createInternetGameDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class createInternetGameDialog: public Ui_createInternetGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEINTERNETGAMEDIALOG_H
