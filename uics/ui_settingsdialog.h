/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myavatarbutton.h"
#include "myhpavatarbutton.h"

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QLabel *label_19;
    QFrame *line_6;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QGridLayout *gridLayout_6;
    QHBoxLayout *hboxLayout1;
    QLabel *label_14;
    QComboBox *comboBox_switchLanguage;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout_7;
    QCheckBox *checkBox_showRightToolbox;
    QCheckBox *checkBox_showFadeOutCardsAnimation;
    QCheckBox *checkBox_alternateFKeysUserActionMode;
    QCheckBox *checkBox_showBlindButtons;
    QCheckBox *checkBox_dontTranslatePokerStrings;
    QCheckBox *checkBox_cardsChanceMonitor;
    QCheckBox *checkBox_antiPeekMode;
    QCheckBox *checkBox_showFlipCardsAnimation;
    QCheckBox *checkBox_showLeftToolbox;
    QCheckBox *checkBox_disableSplashscreen;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_8;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *checkBox_showCountryFlagInAvatar;
    QCheckBox *checkBox_UseLobbyChat;
    QCheckBox *checkBox_enableBetInputFocusSwitch;
    QCheckBox *checkBox_enableAccidentallyCallBlocker;
    QCheckBox *checkBox_dontHideAvatarsOfIgnored;
    QCheckBox *checkBox_disableChatEmoticons;
    QCheckBox *checkBox_showPingStateInAvatar;
    QWidget *page_8;
    QGridLayout *gridLayout_12;
    QLabel *label_28;
    QFrame *line_7;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_addGameTableStyle;
    QPushButton *pushButton_removeGameTableStyle;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_15;
    QLabel *label_gameTableStylePreview;
    QLabel *label_gameTableStyleInfo;
    QLabel *label_55;
    QTreeWidget *treeWidget_gameTableStyles;
    QWidget *tab_4;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_addCardDeckStyle;
    QPushButton *pushButton_removeCardDeckStyle;
    QSpacerItem *verticalSpacer_333;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_16;
    QLabel *label_cardDeckStylePreview;
    QLabel *label_cardDeckStyleInfo;
    QLabel *label_56;
    QTreeWidget *treeWidget_cardDeckStyles;
    QWidget *tab;
    QGridLayout *gridLayout_17;
    QRadioButton *radioButton_flipsideTux;
    QVBoxLayout *_3;
    QHBoxLayout *_10;
    QRadioButton *radioButton_flipsideOwn;
    QLineEdit *lineEdit_OwnFlipsideFilename;
    QPushButton *pushButton_openFlipsidePicture;
    QLabel *label_57;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_6;
    QGridLayout *gridLayout1;
    QLabel *label_26;
    QFrame *line_8;
    QGroupBox *groupBox_playSoundEffects;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout2;
    QLabel *label_25;
    QLabel *label_soundVolume;
    QSlider *horizontalSlider_soundVolume;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout3;
    QCheckBox *checkBox_playGameActions;
    QCheckBox *checkBox_playLobbyChatNotification;
    QCheckBox *checkBox_playNetworkGameNotification;
    QCheckBox *checkBox_playBlindRaiseSound;
    QSpacerItem *spacerItem1;
    QWidget *page_2;
    QVBoxLayout *vboxLayout;
    QLabel *label_5;
    QFrame *line_3;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QSpinBox *spinBox_quantityPlayers;
    QHBoxLayout *hboxLayout4;
    QLabel *label_2;
    QSpinBox *spinBox_startCash;
    QHBoxLayout *hboxLayout5;
    QLabel *label_3;
    QSpinBox *spinBox_firstSmallBlind;
    QHBoxLayout *hboxLayout6;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout4;
    QRadioButton *radioButton_raiseBlindsAtHands;
    QSpinBox *spinBox_raiseSmallBlindEveryHands;
    QLabel *label_47;
    QRadioButton *radioButton_raiseBlindsAtMinutes;
    QSpinBox *spinBox_raiseSmallBlindEveryMinutes;
    QLabel *label_50;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout5;
    QRadioButton *radioButton_alwaysDoubleBlinds;
    QRadioButton *radioButton_manualBlindsOrder;
    QPushButton *pushButton_editManualBlindsOrder;
    QHBoxLayout *hboxLayout7;
    QLabel *label;
    QSpinBox *spinBox_gameSpeed;
    QCheckBox *checkBox_pauseBetweenHands;
    QCheckBox *checkBox_showGameSettingsDialogOnNewGame;
    QSpacerItem *spacerItem3;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_30;
    QFrame *line_9;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_automaticServerConfig;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QLineEdit *lineEdit_InternetServerListAddress;
    QGroupBox *groupBox_manualServerConfig;
    QGridLayout *gridLayout_4;
    QLabel *label_37;
    QLabel *label_41;
    QLineEdit *lineEdit_InternetServerAddress;
    QCheckBox *checkBox_useAvatarServer;
    QLabel *label_31;
    QSpinBox *spinBox_InternetServerPort;
    QLineEdit *lineEdit_avatarServerAddress;
    QLineEdit *lineEdit_InternetServerPassword;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_23;
    QLineEdit *lineEdit_internetGameName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QComboBox *comboBox_internetGameType;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_UseInternetGamePassword;
    QLineEdit *lineEdit_InternetGamePassword;
    QSpacerItem *spacer;
    QCheckBox *checkBox_InetGame_AutoLeaveTheTableAfterGameFinished;
    QCheckBox *checkBox_allowSpectators;
    QWidget *tab_6;
    QGridLayout *gridLayout_19;
    QTreeWidget *treeWidget_internetGameIgnoredPlayers;
    QPushButton *pushButton_internetGameRemoveIgnoredPlayer;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_InternetServerUseIpv6;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_InternetServerUseSctp;
    QLabel *label_whatIsSctp;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QLabel *label_7;
    QFrame *line_4;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    MyHPAvatarButton *pushButton_HumanPlayerAvatar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_HumanPlayerName;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout6;
    QLineEdit *lineEdit_Opponent1Name;
    QLabel *label_9;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem4;
    MyAvatarButton *pushButton_Opponent1Avatar;
    QSpacerItem *spacerItem5;
    QGridLayout *gridLayout7;
    QLineEdit *lineEdit_Opponent2Name;
    QLabel *label_10;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem6;
    MyAvatarButton *pushButton_Opponent2Avatar;
    QSpacerItem *spacerItem7;
    QGridLayout *gridLayout8;
    QLabel *label_11;
    QLineEdit *lineEdit_Opponent3Name;
    QHBoxLayout *hboxLayout10;
    QSpacerItem *spacerItem8;
    MyAvatarButton *pushButton_Opponent3Avatar;
    QSpacerItem *spacerItem9;
    QGridLayout *gridLayout9;
    QLineEdit *lineEdit_Opponent4Name;
    QLabel *label_12;
    QHBoxLayout *hboxLayout11;
    QSpacerItem *spacerItem10;
    MyAvatarButton *pushButton_Opponent4Avatar;
    QSpacerItem *spacerItem11;
    QGridLayout *gridLayout10;
    QLabel *label_20;
    QHBoxLayout *hboxLayout12;
    QSpacerItem *spacerItem12;
    MyAvatarButton *pushButton_Opponent5Avatar;
    QSpacerItem *spacerItem13;
    QLineEdit *lineEdit_Opponent5Name;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout11;
    QHBoxLayout *hboxLayout13;
    QSpacerItem *spacerItem14;
    MyAvatarButton *pushButton_Opponent6Avatar;
    QSpacerItem *spacerItem15;
    QLineEdit *lineEdit_Opponent6Name;
    QLabel *label_21;
    QGridLayout *_4;
    QHBoxLayout *_5;
    QSpacerItem *spacerItem16;
    MyAvatarButton *pushButton_Opponent7Avatar;
    QSpacerItem *spacerItem17;
    QLineEdit *lineEdit_Opponent7Name;
    QLabel *label_33;
    QGridLayout *_6;
    QHBoxLayout *_7;
    QSpacerItem *spacerItem18;
    MyAvatarButton *pushButton_Opponent8Avatar;
    QSpacerItem *spacerItem19;
    QLineEdit *lineEdit_Opponent8Name;
    QLabel *label_53;
    QGridLayout *_8;
    QHBoxLayout *_9;
    QSpacerItem *spacerItem20;
    MyAvatarButton *pushButton_Opponent9Avatar;
    QSpacerItem *spacerItem21;
    QLineEdit *lineEdit_Opponent9Name;
    QLabel *label_54;
    QLabel *label_38;
    QSpacerItem *spacerItem22;
    QWidget *page_5;
    QGridLayout *gridLayout_21;
    QLabel *label_6;
    QFrame *line_2;
    QGroupBox *groupBox_logOnOff;
    QGridLayout *gridLayout_20;
    QLabel *label_27;
    QSpinBox *spinBox_logStoreDuration;
    QLabel *label_39;
    QComboBox *comboBox_logInterval;
    QLabel *label_29;
    QHBoxLayout *hboxLayout14;
    QLineEdit *lineEdit_logDir;
    QPushButton *pushButton_openLogDir;
    QSpacerItem *verticalSpacer_7;
    QWidget *page_9;
    QGridLayout *gridLayout_22;
    QLabel *label_44;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_resetSettings;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    QFrame *line_10;
    QLabel *label_resetNote;
    QWidget *page_4;
    QVBoxLayout *vboxLayout1;
    QLabel *label_34;
    QFrame *line_5;
    QHBoxLayout *hboxLayout15;
    QLabel *label_15;
    QSpinBox *spinBox_netQuantityPlayers;
    QHBoxLayout *hboxLayout16;
    QLabel *label_13;
    QSpinBox *spinBox_netStartCash;
    QHBoxLayout *hboxLayout17;
    QLabel *label_35;
    QSpinBox *spinBox_netFirstSmallBlind;
    QHBoxLayout *hboxLayout18;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout12;
    QRadioButton *radioButton_netRaiseBlindsAtHands;
    QSpinBox *spinBox_netRaiseSmallBlindEveryHands;
    QLabel *label_51;
    QRadioButton *radioButton_netRaiseBlindsAtMinutes;
    QSpinBox *spinBox_netRaiseSmallBlindEveryMinutes;
    QLabel *label_52;
    QSpacerItem *spacerItem23;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout13;
    QRadioButton *radioButton_netAlwaysDoubleBlinds;
    QRadioButton *radioButton_netManualBlindsOrder;
    QPushButton *pushButton_netEditManualBlindsOrder;
    QHBoxLayout *hboxLayout19;
    QLabel *label_36;
    QSpinBox *spinBox_netDelayBetweenHands;
    QHBoxLayout *hboxLayout20;
    QLabel *label_40;
    QSpinBox *spinBox_netTimeOutPlayerAction;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QSpinBox *spinBox_serverPort;
    QCheckBox *checkBox_useIpv6;
    QLabel *label_22;
    QCheckBox *checkBox_useSctp;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName(QStringLiteral("settingsDialog"));
        settingsDialog->resize(785, 530);
        settingsDialog->setMinimumSize(QSize(785, 530));
        gridLayout = new QGridLayout(settingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        listWidget = new QListWidget(settingsDialog);
        QIcon icon;
        icon.addFile(QStringLiteral(":/gfx/preferences-desktop.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gfx/fill-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gfx/speaker.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gfx/swbuttonlocalgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gfx/swbuttoninternetgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/gfx/system_users.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/gfx/utilities-log-viewer.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/gfx/document-revert.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setIcon(icon7);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(190, 0));
        listWidget->setMaximumSize(QSize(190, 16777215));
        listWidget->setIconSize(QSize(32, 32));
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setWordWrap(true);

        hboxLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(settingsDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_19 = new QLabel(page);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        gridLayout_8->addWidget(label_19, 0, 0, 1, 1);

        line_6 = new QFrame(page);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_6, 1, 0, 1, 1);

        tabWidget_3 = new QTabWidget(page);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_6 = new QGridLayout(tab_7);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));

        hboxLayout1->addWidget(label_14);

        comboBox_switchLanguage = new QComboBox(tab_7);
        comboBox_switchLanguage->setObjectName(QStringLiteral("comboBox_switchLanguage"));

        hboxLayout1->addWidget(comboBox_switchLanguage);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        gridLayout_6->addLayout(hboxLayout1, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        checkBox_showRightToolbox = new QCheckBox(tab_7);
        checkBox_showRightToolbox->setObjectName(QStringLiteral("checkBox_showRightToolbox"));

        gridLayout_7->addWidget(checkBox_showRightToolbox, 0, 0, 1, 2);

        checkBox_showFadeOutCardsAnimation = new QCheckBox(tab_7);
        checkBox_showFadeOutCardsAnimation->setObjectName(QStringLiteral("checkBox_showFadeOutCardsAnimation"));

        gridLayout_7->addWidget(checkBox_showFadeOutCardsAnimation, 2, 0, 1, 2);

        checkBox_alternateFKeysUserActionMode = new QCheckBox(tab_7);
        checkBox_alternateFKeysUserActionMode->setObjectName(QStringLiteral("checkBox_alternateFKeysUserActionMode"));

        gridLayout_7->addWidget(checkBox_alternateFKeysUserActionMode, 4, 0, 1, 2);

        checkBox_showBlindButtons = new QCheckBox(tab_7);
        checkBox_showBlindButtons->setObjectName(QStringLiteral("checkBox_showBlindButtons"));

        gridLayout_7->addWidget(checkBox_showBlindButtons, 5, 0, 1, 2);

        checkBox_dontTranslatePokerStrings = new QCheckBox(tab_7);
        checkBox_dontTranslatePokerStrings->setObjectName(QStringLiteral("checkBox_dontTranslatePokerStrings"));

        gridLayout_7->addWidget(checkBox_dontTranslatePokerStrings, 9, 0, 1, 2);

        checkBox_cardsChanceMonitor = new QCheckBox(tab_7);
        checkBox_cardsChanceMonitor->setObjectName(QStringLiteral("checkBox_cardsChanceMonitor"));

        gridLayout_7->addWidget(checkBox_cardsChanceMonitor, 6, 0, 1, 2);

        checkBox_antiPeekMode = new QCheckBox(tab_7);
        checkBox_antiPeekMode->setObjectName(QStringLiteral("checkBox_antiPeekMode"));

        gridLayout_7->addWidget(checkBox_antiPeekMode, 7, 0, 1, 2);

        checkBox_showFlipCardsAnimation = new QCheckBox(tab_7);
        checkBox_showFlipCardsAnimation->setObjectName(QStringLiteral("checkBox_showFlipCardsAnimation"));

        gridLayout_7->addWidget(checkBox_showFlipCardsAnimation, 3, 0, 1, 2);

        checkBox_showLeftToolbox = new QCheckBox(tab_7);
        checkBox_showLeftToolbox->setObjectName(QStringLiteral("checkBox_showLeftToolbox"));

        gridLayout_7->addWidget(checkBox_showLeftToolbox, 1, 0, 1, 2);

        checkBox_disableSplashscreen = new QCheckBox(tab_7);
        checkBox_disableSplashscreen->setObjectName(QStringLiteral("checkBox_disableSplashscreen"));

        gridLayout_7->addWidget(checkBox_disableSplashscreen, 8, 0, 1, 2);


        gridLayout_6->addLayout(gridLayout_7, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 2, 0, 1, 1);

        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_3 = new QGridLayout(tab_8);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_9 = new QSpacerItem(20, 221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 7, 1, 1, 1);

        checkBox_showCountryFlagInAvatar = new QCheckBox(tab_8);
        checkBox_showCountryFlagInAvatar->setObjectName(QStringLiteral("checkBox_showCountryFlagInAvatar"));

        gridLayout_3->addWidget(checkBox_showCountryFlagInAvatar, 0, 0, 1, 1);

        checkBox_UseLobbyChat = new QCheckBox(tab_8);
        checkBox_UseLobbyChat->setObjectName(QStringLiteral("checkBox_UseLobbyChat"));

        gridLayout_3->addWidget(checkBox_UseLobbyChat, 5, 0, 1, 2);

        checkBox_enableBetInputFocusSwitch = new QCheckBox(tab_8);
        checkBox_enableBetInputFocusSwitch->setObjectName(QStringLiteral("checkBox_enableBetInputFocusSwitch"));

        gridLayout_3->addWidget(checkBox_enableBetInputFocusSwitch, 2, 0, 1, 2);

        checkBox_enableAccidentallyCallBlocker = new QCheckBox(tab_8);
        checkBox_enableAccidentallyCallBlocker->setObjectName(QStringLiteral("checkBox_enableAccidentallyCallBlocker"));

        gridLayout_3->addWidget(checkBox_enableAccidentallyCallBlocker, 3, 0, 1, 2);

        checkBox_dontHideAvatarsOfIgnored = new QCheckBox(tab_8);
        checkBox_dontHideAvatarsOfIgnored->setObjectName(QStringLiteral("checkBox_dontHideAvatarsOfIgnored"));

        gridLayout_3->addWidget(checkBox_dontHideAvatarsOfIgnored, 4, 0, 1, 2);

        checkBox_disableChatEmoticons = new QCheckBox(tab_8);
        checkBox_disableChatEmoticons->setObjectName(QStringLiteral("checkBox_disableChatEmoticons"));

        gridLayout_3->addWidget(checkBox_disableChatEmoticons, 6, 0, 1, 1);

        checkBox_showPingStateInAvatar = new QCheckBox(tab_8);
        checkBox_showPingStateInAvatar->setObjectName(QStringLiteral("checkBox_showPingStateInAvatar"));

        gridLayout_3->addWidget(checkBox_showPingStateInAvatar, 1, 0, 1, 1);

        tabWidget_3->addTab(tab_8, QString());

        gridLayout_8->addWidget(tabWidget_3, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        gridLayout_12 = new QGridLayout(page_8);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_28 = new QLabel(page_8);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        gridLayout_12->addWidget(label_28, 0, 0, 1, 1);

        line_7 = new QFrame(page_8);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line_7, 1, 0, 1, 1);

        tabWidget = new QTabWidget(page_8);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_13 = new QGridLayout(tab_3);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_addGameTableStyle = new QPushButton(tab_3);
        pushButton_addGameTableStyle->setObjectName(QStringLiteral("pushButton_addGameTableStyle"));

        verticalLayout->addWidget(pushButton_addGameTableStyle);

        pushButton_removeGameTableStyle = new QPushButton(tab_3);
        pushButton_removeGameTableStyle->setObjectName(QStringLiteral("pushButton_removeGameTableStyle"));

        verticalLayout->addWidget(pushButton_removeGameTableStyle);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_13->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox_13 = new QGroupBox(tab_3);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout_15 = new QGridLayout(groupBox_13);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_gameTableStylePreview = new QLabel(groupBox_13);
        label_gameTableStylePreview->setObjectName(QStringLiteral("label_gameTableStylePreview"));
        label_gameTableStylePreview->setMinimumSize(QSize(160, 120));
        label_gameTableStylePreview->setMaximumSize(QSize(160, 120));

        gridLayout_15->addWidget(label_gameTableStylePreview, 0, 0, 1, 1);

        label_gameTableStyleInfo = new QLabel(groupBox_13);
        label_gameTableStyleInfo->setObjectName(QStringLiteral("label_gameTableStyleInfo"));
        label_gameTableStyleInfo->setTextFormat(Qt::RichText);
        label_gameTableStyleInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_15->addWidget(label_gameTableStyleInfo, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_13, 1, 0, 1, 2);

        label_55 = new QLabel(tab_3);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setOpenExternalLinks(true);

        gridLayout_13->addWidget(label_55, 2, 0, 1, 2);

        treeWidget_gameTableStyles = new QTreeWidget(tab_3);
        treeWidget_gameTableStyles->setObjectName(QStringLiteral("treeWidget_gameTableStyles"));
        treeWidget_gameTableStyles->setIndentation(5);
        treeWidget_gameTableStyles->setRootIsDecorated(false);
        treeWidget_gameTableStyles->setItemsExpandable(false);
        treeWidget_gameTableStyles->setSortingEnabled(true);
        treeWidget_gameTableStyles->setAllColumnsShowFocus(true);
        treeWidget_gameTableStyles->setColumnCount(3);
        treeWidget_gameTableStyles->header()->setCascadingSectionResizes(false);
        treeWidget_gameTableStyles->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_13->addWidget(treeWidget_gameTableStyles, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_14 = new QGridLayout(tab_4);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_addCardDeckStyle = new QPushButton(tab_4);
        pushButton_addCardDeckStyle->setObjectName(QStringLiteral("pushButton_addCardDeckStyle"));

        verticalLayout_2->addWidget(pushButton_addCardDeckStyle);

        pushButton_removeCardDeckStyle = new QPushButton(tab_4);
        pushButton_removeCardDeckStyle->setObjectName(QStringLiteral("pushButton_removeCardDeckStyle"));

        verticalLayout_2->addWidget(pushButton_removeCardDeckStyle);

        verticalSpacer_333 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_333);


        gridLayout_14->addLayout(verticalLayout_2, 0, 1, 1, 1);

        groupBox_14 = new QGroupBox(tab_4);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        gridLayout_16 = new QGridLayout(groupBox_14);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_cardDeckStylePreview = new QLabel(groupBox_14);
        label_cardDeckStylePreview->setObjectName(QStringLiteral("label_cardDeckStylePreview"));
        label_cardDeckStylePreview->setMinimumSize(QSize(160, 120));
        label_cardDeckStylePreview->setMaximumSize(QSize(160, 120));

        gridLayout_16->addWidget(label_cardDeckStylePreview, 0, 0, 1, 1);

        label_cardDeckStyleInfo = new QLabel(groupBox_14);
        label_cardDeckStyleInfo->setObjectName(QStringLiteral("label_cardDeckStyleInfo"));
        label_cardDeckStyleInfo->setTextFormat(Qt::RichText);
        label_cardDeckStyleInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_16->addWidget(label_cardDeckStyleInfo, 0, 1, 1, 1);


        gridLayout_14->addWidget(groupBox_14, 1, 0, 1, 2);

        label_56 = new QLabel(tab_4);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setOpenExternalLinks(true);

        gridLayout_14->addWidget(label_56, 2, 0, 1, 2);

        treeWidget_cardDeckStyles = new QTreeWidget(tab_4);
        treeWidget_cardDeckStyles->setObjectName(QStringLiteral("treeWidget_cardDeckStyles"));
        treeWidget_cardDeckStyles->setIndentation(5);
        treeWidget_cardDeckStyles->setRootIsDecorated(false);
        treeWidget_cardDeckStyles->setItemsExpandable(false);
        treeWidget_cardDeckStyles->setSortingEnabled(true);
        treeWidget_cardDeckStyles->setAllColumnsShowFocus(true);
        treeWidget_cardDeckStyles->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_14->addWidget(treeWidget_cardDeckStyles, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_17 = new QGridLayout(tab);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        radioButton_flipsideTux = new QRadioButton(tab);
        radioButton_flipsideTux->setObjectName(QStringLiteral("radioButton_flipsideTux"));
        radioButton_flipsideTux->setChecked(true);

        gridLayout_17->addWidget(radioButton_flipsideTux, 0, 0, 1, 1);

        _3 = new QVBoxLayout();
        _3->setSpacing(0);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        _10 = new QHBoxLayout();
        _10->setSpacing(2);
        _10->setObjectName(QStringLiteral("_10"));
        _10->setContentsMargins(0, 0, 0, 0);
        radioButton_flipsideOwn = new QRadioButton(tab);
        radioButton_flipsideOwn->setObjectName(QStringLiteral("radioButton_flipsideOwn"));

        _10->addWidget(radioButton_flipsideOwn);

        lineEdit_OwnFlipsideFilename = new QLineEdit(tab);
        lineEdit_OwnFlipsideFilename->setObjectName(QStringLiteral("lineEdit_OwnFlipsideFilename"));
        lineEdit_OwnFlipsideFilename->setEnabled(false);

        _10->addWidget(lineEdit_OwnFlipsideFilename);

        pushButton_openFlipsidePicture = new QPushButton(tab);
        pushButton_openFlipsidePicture->setObjectName(QStringLiteral("pushButton_openFlipsidePicture"));
        pushButton_openFlipsidePicture->setEnabled(false);
        pushButton_openFlipsidePicture->setMinimumSize(QSize(27, 26));
        pushButton_openFlipsidePicture->setMaximumSize(QSize(27, 26));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/gfx/document-open-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_openFlipsidePicture->setIcon(icon8);

        _10->addWidget(pushButton_openFlipsidePicture);


        _3->addLayout(_10);

        label_57 = new QLabel(tab);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setWordWrap(true);

        _3->addWidget(label_57);


        gridLayout_17->addLayout(_3, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 276, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_4, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_12->addWidget(tabWidget, 2, 0, 1, 1);

        stackedWidget->addWidget(page_8);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        gridLayout1 = new QGridLayout(page_6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_26 = new QLabel(page_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        gridLayout1->addWidget(label_26, 0, 0, 1, 1);

        line_8 = new QFrame(page_6);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line_8, 1, 0, 1, 1);

        groupBox_playSoundEffects = new QGroupBox(page_6);
        groupBox_playSoundEffects->setObjectName(QStringLiteral("groupBox_playSoundEffects"));
        groupBox_playSoundEffects->setCheckable(true);
        groupBox_playSoundEffects->setChecked(true);
        gridLayout2 = new QGridLayout(groupBox_playSoundEffects);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(groupBox_playSoundEffects);
        label_25->setObjectName(QStringLiteral("label_25"));

        hboxLayout2->addWidget(label_25);

        label_soundVolume = new QLabel(groupBox_playSoundEffects);
        label_soundVolume->setObjectName(QStringLiteral("label_soundVolume"));
        label_soundVolume->setMinimumSize(QSize(20, 0));

        hboxLayout2->addWidget(label_soundVolume);

        horizontalSlider_soundVolume = new QSlider(groupBox_playSoundEffects);
        horizontalSlider_soundVolume->setObjectName(QStringLiteral("horizontalSlider_soundVolume"));
        horizontalSlider_soundVolume->setMinimum(1);
        horizontalSlider_soundVolume->setMaximum(10);
        horizontalSlider_soundVolume->setValue(8);
        horizontalSlider_soundVolume->setOrientation(Qt::Horizontal);

        hboxLayout2->addWidget(horizontalSlider_soundVolume);


        gridLayout2->addLayout(hboxLayout2, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(groupBox_playSoundEffects);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        gridLayout3 = new QGridLayout(groupBox_10);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setContentsMargins(-1, 0, -1, -1);
        checkBox_playGameActions = new QCheckBox(groupBox_10);
        checkBox_playGameActions->setObjectName(QStringLiteral("checkBox_playGameActions"));

        gridLayout3->addWidget(checkBox_playGameActions, 0, 0, 1, 1);

        checkBox_playLobbyChatNotification = new QCheckBox(groupBox_10);
        checkBox_playLobbyChatNotification->setObjectName(QStringLiteral("checkBox_playLobbyChatNotification"));

        gridLayout3->addWidget(checkBox_playLobbyChatNotification, 2, 0, 1, 1);

        checkBox_playNetworkGameNotification = new QCheckBox(groupBox_10);
        checkBox_playNetworkGameNotification->setObjectName(QStringLiteral("checkBox_playNetworkGameNotification"));
        checkBox_playNetworkGameNotification->setTristate(false);

        gridLayout3->addWidget(checkBox_playNetworkGameNotification, 3, 0, 1, 1);

        checkBox_playBlindRaiseSound = new QCheckBox(groupBox_10);
        checkBox_playBlindRaiseSound->setObjectName(QStringLiteral("checkBox_playBlindRaiseSound"));

        gridLayout3->addWidget(checkBox_playBlindRaiseSound, 1, 0, 1, 1);


        gridLayout2->addWidget(groupBox_10, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox_playSoundEffects, 2, 0, 1, 1);

        spacerItem1 = new QSpacerItem(400, 321, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 3, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        vboxLayout = new QVBoxLayout(page_2);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        vboxLayout->addWidget(label_5);

        line_3 = new QFrame(page_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_3);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout3->addWidget(label_4);

        spinBox_quantityPlayers = new QSpinBox(page_2);
        spinBox_quantityPlayers->setObjectName(QStringLiteral("spinBox_quantityPlayers"));
        spinBox_quantityPlayers->setMinimum(2);
        spinBox_quantityPlayers->setMaximum(10);
        spinBox_quantityPlayers->setValue(10);

        hboxLayout3->addWidget(spinBox_quantityPlayers);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout4->addWidget(label_2);

        spinBox_startCash = new QSpinBox(page_2);
        spinBox_startCash->setObjectName(QStringLiteral("spinBox_startCash"));
        spinBox_startCash->setMinimum(1000);
        spinBox_startCash->setMaximum(1000000);
        spinBox_startCash->setSingleStep(50);

        hboxLayout4->addWidget(spinBox_startCash);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout5->addWidget(label_3);

        spinBox_firstSmallBlind = new QSpinBox(page_2);
        spinBox_firstSmallBlind->setObjectName(QStringLiteral("spinBox_firstSmallBlind"));
        spinBox_firstSmallBlind->setMinimum(5);
        spinBox_firstSmallBlind->setMaximum(20000);

        hboxLayout5->addWidget(spinBox_firstSmallBlind);


        vboxLayout->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        groupBox_6 = new QGroupBox(page_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout4 = new QGridLayout(groupBox_6);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        gridLayout4->setContentsMargins(9, 0, -1, 9);
        radioButton_raiseBlindsAtHands = new QRadioButton(groupBox_6);
        radioButton_raiseBlindsAtHands->setObjectName(QStringLiteral("radioButton_raiseBlindsAtHands"));
        radioButton_raiseBlindsAtHands->setChecked(true);

        gridLayout4->addWidget(radioButton_raiseBlindsAtHands, 0, 0, 1, 1);

        spinBox_raiseSmallBlindEveryHands = new QSpinBox(groupBox_6);
        spinBox_raiseSmallBlindEveryHands->setObjectName(QStringLiteral("spinBox_raiseSmallBlindEveryHands"));
        spinBox_raiseSmallBlindEveryHands->setMinimum(1);

        gridLayout4->addWidget(spinBox_raiseSmallBlindEveryHands, 0, 1, 1, 1);

        label_47 = new QLabel(groupBox_6);
        label_47->setObjectName(QStringLiteral("label_47"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);

        gridLayout4->addWidget(label_47, 0, 2, 1, 1);

        radioButton_raiseBlindsAtMinutes = new QRadioButton(groupBox_6);
        radioButton_raiseBlindsAtMinutes->setObjectName(QStringLiteral("radioButton_raiseBlindsAtMinutes"));

        gridLayout4->addWidget(radioButton_raiseBlindsAtMinutes, 1, 0, 1, 1);

        spinBox_raiseSmallBlindEveryMinutes = new QSpinBox(groupBox_6);
        spinBox_raiseSmallBlindEveryMinutes->setObjectName(QStringLiteral("spinBox_raiseSmallBlindEveryMinutes"));
        spinBox_raiseSmallBlindEveryMinutes->setMinimum(1);

        gridLayout4->addWidget(spinBox_raiseSmallBlindEveryMinutes, 1, 1, 1, 1);

        label_50 = new QLabel(groupBox_6);
        label_50->setObjectName(QStringLiteral("label_50"));
        sizePolicy.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy);

        gridLayout4->addWidget(label_50, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem2, 2, 1, 1, 1);


        hboxLayout6->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(page_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        gridLayout5 = new QGridLayout(groupBox_7);
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        gridLayout5->setContentsMargins(-1, 0, -1, -1);
        radioButton_alwaysDoubleBlinds = new QRadioButton(groupBox_7);
        radioButton_alwaysDoubleBlinds->setObjectName(QStringLiteral("radioButton_alwaysDoubleBlinds"));
        radioButton_alwaysDoubleBlinds->setChecked(true);

        gridLayout5->addWidget(radioButton_alwaysDoubleBlinds, 0, 0, 1, 1);

        radioButton_manualBlindsOrder = new QRadioButton(groupBox_7);
        radioButton_manualBlindsOrder->setObjectName(QStringLiteral("radioButton_manualBlindsOrder"));

        gridLayout5->addWidget(radioButton_manualBlindsOrder, 1, 0, 1, 1);

        pushButton_editManualBlindsOrder = new QPushButton(groupBox_7);
        pushButton_editManualBlindsOrder->setObjectName(QStringLiteral("pushButton_editManualBlindsOrder"));
        pushButton_editManualBlindsOrder->setEnabled(false);

        gridLayout5->addWidget(pushButton_editManualBlindsOrder, 2, 0, 1, 1);


        hboxLayout6->addWidget(groupBox_7);


        vboxLayout->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout7->addWidget(label);

        spinBox_gameSpeed = new QSpinBox(page_2);
        spinBox_gameSpeed->setObjectName(QStringLiteral("spinBox_gameSpeed"));
        spinBox_gameSpeed->setMinimum(1);
        spinBox_gameSpeed->setMaximum(11);
        spinBox_gameSpeed->setSingleStep(1);

        hboxLayout7->addWidget(spinBox_gameSpeed);


        vboxLayout->addLayout(hboxLayout7);

        checkBox_pauseBetweenHands = new QCheckBox(page_2);
        checkBox_pauseBetweenHands->setObjectName(QStringLiteral("checkBox_pauseBetweenHands"));

        vboxLayout->addWidget(checkBox_pauseBetweenHands);

        checkBox_showGameSettingsDialogOnNewGame = new QCheckBox(page_2);
        checkBox_showGameSettingsDialogOnNewGame->setObjectName(QStringLiteral("checkBox_showGameSettingsDialogOnNewGame"));

        vboxLayout->addWidget(checkBox_showGameSettingsDialogOnNewGame);

        spacerItem3 = new QSpacerItem(437, 285, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);

        stackedWidget->addWidget(page_2);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_4 = new QVBoxLayout(page_7);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_30 = new QLabel(page_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        verticalLayout_4->addWidget(label_30);

        line_9 = new QFrame(page_7);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_9);

        tabWidget_2 = new QTabWidget(page_7);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_automaticServerConfig = new QGroupBox(tab_2);
        groupBox_automaticServerConfig->setObjectName(QStringLiteral("groupBox_automaticServerConfig"));
        groupBox_automaticServerConfig->setCheckable(true);
        horizontalLayout_9 = new QHBoxLayout(groupBox_automaticServerConfig);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 4);
        label_18 = new QLabel(groupBox_automaticServerConfig);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_9->addWidget(label_18);

        lineEdit_InternetServerListAddress = new QLineEdit(groupBox_automaticServerConfig);
        lineEdit_InternetServerListAddress->setObjectName(QStringLiteral("lineEdit_InternetServerListAddress"));

        horizontalLayout_9->addWidget(lineEdit_InternetServerListAddress);


        verticalLayout_3->addWidget(groupBox_automaticServerConfig);

        groupBox_manualServerConfig = new QGroupBox(tab_2);
        groupBox_manualServerConfig->setObjectName(QStringLiteral("groupBox_manualServerConfig"));
        groupBox_manualServerConfig->setCheckable(true);
        groupBox_manualServerConfig->setChecked(false);
        gridLayout_4 = new QGridLayout(groupBox_manualServerConfig);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_37 = new QLabel(groupBox_manualServerConfig);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_4->addWidget(label_37, 2, 0, 1, 1);

        label_41 = new QLabel(groupBox_manualServerConfig);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_4->addWidget(label_41, 0, 0, 1, 1);

        lineEdit_InternetServerAddress = new QLineEdit(groupBox_manualServerConfig);
        lineEdit_InternetServerAddress->setObjectName(QStringLiteral("lineEdit_InternetServerAddress"));
        lineEdit_InternetServerAddress->setMaxLength(60);

        gridLayout_4->addWidget(lineEdit_InternetServerAddress, 0, 2, 1, 1);

        checkBox_useAvatarServer = new QCheckBox(groupBox_manualServerConfig);
        checkBox_useAvatarServer->setObjectName(QStringLiteral("checkBox_useAvatarServer"));

        gridLayout_4->addWidget(checkBox_useAvatarServer, 3, 0, 1, 1);

        label_31 = new QLabel(groupBox_manualServerConfig);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_4->addWidget(label_31, 1, 0, 1, 1);

        spinBox_InternetServerPort = new QSpinBox(groupBox_manualServerConfig);
        spinBox_InternetServerPort->setObjectName(QStringLiteral("spinBox_InternetServerPort"));
        spinBox_InternetServerPort->setMinimum(80);
        spinBox_InternetServerPort->setMaximum(65535);
        spinBox_InternetServerPort->setValue(7234);

        gridLayout_4->addWidget(spinBox_InternetServerPort, 1, 2, 1, 1);

        lineEdit_avatarServerAddress = new QLineEdit(groupBox_manualServerConfig);
        lineEdit_avatarServerAddress->setObjectName(QStringLiteral("lineEdit_avatarServerAddress"));

        gridLayout_4->addWidget(lineEdit_avatarServerAddress, 3, 2, 1, 1);

        lineEdit_InternetServerPassword = new QLineEdit(groupBox_manualServerConfig);
        lineEdit_InternetServerPassword->setObjectName(QStringLiteral("lineEdit_InternetServerPassword"));
        lineEdit_InternetServerPassword->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(lineEdit_InternetServerPassword, 2, 2, 1, 1);


        verticalLayout_3->addWidget(groupBox_manualServerConfig);

        tabWidget_2->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_43 = new QLabel(tab_5);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setWordWrap(true);

        gridLayout_5->addWidget(label_43, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_8->addWidget(label_23);

        lineEdit_internetGameName = new QLineEdit(tab_5);
        lineEdit_internetGameName->setObjectName(QStringLiteral("lineEdit_internetGameName"));

        horizontalLayout_8->addWidget(lineEdit_internetGameName);


        gridLayout_5->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        comboBox_internetGameType = new QComboBox(tab_5);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/gfx/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_internetGameType->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/gfx/registered.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_internetGameType->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/gfx/list_add_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_internetGameType->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/gfx/cup.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_internetGameType->addItem(icon12, QString());
        comboBox_internetGameType->setObjectName(QStringLiteral("comboBox_internetGameType"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_internetGameType->sizePolicy().hasHeightForWidth());
        comboBox_internetGameType->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(comboBox_internetGameType);


        gridLayout_5->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_UseInternetGamePassword = new QCheckBox(tab_5);
        checkBox_UseInternetGamePassword->setObjectName(QStringLiteral("checkBox_UseInternetGamePassword"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/gfx/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_UseInternetGamePassword->setIcon(icon13);

        horizontalLayout_2->addWidget(checkBox_UseInternetGamePassword);

        lineEdit_InternetGamePassword = new QLineEdit(tab_5);
        lineEdit_InternetGamePassword->setObjectName(QStringLiteral("lineEdit_InternetGamePassword"));
        lineEdit_InternetGamePassword->setEnabled(false);
        lineEdit_InternetGamePassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_InternetGamePassword);


        gridLayout_5->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        spacer = new QSpacerItem(437, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(spacer, 6, 0, 1, 1);

        checkBox_InetGame_AutoLeaveTheTableAfterGameFinished = new QCheckBox(tab_5);
        checkBox_InetGame_AutoLeaveTheTableAfterGameFinished->setObjectName(QStringLiteral("checkBox_InetGame_AutoLeaveTheTableAfterGameFinished"));

        gridLayout_5->addWidget(checkBox_InetGame_AutoLeaveTheTableAfterGameFinished, 4, 0, 1, 1);

        checkBox_allowSpectators = new QCheckBox(tab_5);
        checkBox_allowSpectators->setObjectName(QStringLiteral("checkBox_allowSpectators"));

        gridLayout_5->addWidget(checkBox_allowSpectators, 5, 0, 1, 1);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_19 = new QGridLayout(tab_6);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        treeWidget_internetGameIgnoredPlayers = new QTreeWidget(tab_6);
        treeWidget_internetGameIgnoredPlayers->setObjectName(QStringLiteral("treeWidget_internetGameIgnoredPlayers"));
        treeWidget_internetGameIgnoredPlayers->setAlternatingRowColors(true);
        treeWidget_internetGameIgnoredPlayers->setIndentation(5);
        treeWidget_internetGameIgnoredPlayers->setRootIsDecorated(false);
        treeWidget_internetGameIgnoredPlayers->setSortingEnabled(true);

        gridLayout_19->addWidget(treeWidget_internetGameIgnoredPlayers, 0, 0, 1, 1);

        pushButton_internetGameRemoveIgnoredPlayer = new QPushButton(tab_6);
        pushButton_internetGameRemoveIgnoredPlayer->setObjectName(QStringLiteral("pushButton_internetGameRemoveIgnoredPlayer"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/gfx/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_internetGameRemoveIgnoredPlayer->setIcon(icon14);

        gridLayout_19->addWidget(pushButton_internetGameRemoveIgnoredPlayer, 1, 0, 1, 1);

        tabWidget_2->addTab(tab_6, QString());

        verticalLayout_4->addWidget(tabWidget_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        checkBox_InternetServerUseIpv6 = new QCheckBox(page_7);
        checkBox_InternetServerUseIpv6->setObjectName(QStringLiteral("checkBox_InternetServerUseIpv6"));

        horizontalLayout_7->addWidget(checkBox_InternetServerUseIpv6);

        label_32 = new QLabel(page_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setOpenExternalLinks(true);

        horizontalLayout_7->addWidget(label_32);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        checkBox_InternetServerUseSctp = new QCheckBox(page_7);
        checkBox_InternetServerUseSctp->setObjectName(QStringLiteral("checkBox_InternetServerUseSctp"));

        horizontalLayout_7->addWidget(checkBox_InternetServerUseSctp);

        label_whatIsSctp = new QLabel(page_7);
        label_whatIsSctp->setObjectName(QStringLiteral("label_whatIsSctp"));
        label_whatIsSctp->setOpenExternalLinks(true);

        horizontalLayout_7->addWidget(label_whatIsSctp);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        stackedWidget->addWidget(page_7);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(8);
        gridLayout_10->setContentsMargins(-1, -1, -1, 1);
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        line_4 = new QFrame(page_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_4, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_8, 0, 1, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_HumanPlayerAvatar = new MyHPAvatarButton(page_3);
        pushButton_HumanPlayerAvatar->setObjectName(QStringLiteral("pushButton_HumanPlayerAvatar"));
        pushButton_HumanPlayerAvatar->setMinimumSize(QSize(60, 60));
        pushButton_HumanPlayerAvatar->setMaximumSize(QSize(60, 60));
        pushButton_HumanPlayerAvatar->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_HumanPlayerAvatar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_9->addLayout(horizontalLayout, 1, 0, 1, 5);

        horizontalSpacer_6 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 2, 0, 1, 2);

        lineEdit_HumanPlayerName = new QLineEdit(page_3);
        lineEdit_HumanPlayerName->setObjectName(QStringLiteral("lineEdit_HumanPlayerName"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_HumanPlayerName->sizePolicy().hasHeightForWidth());
        lineEdit_HumanPlayerName->setSizePolicy(sizePolicy2);
        lineEdit_HumanPlayerName->setMinimumSize(QSize(100, 25));
        lineEdit_HumanPlayerName->setMaximumSize(QSize(100, 25));
        lineEdit_HumanPlayerName->setMaxLength(12);

        gridLayout_9->addWidget(lineEdit_HumanPlayerName, 2, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_7, 2, 3, 1, 2);


        gridLayout_10->addLayout(gridLayout_9, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_11 = new QGridLayout(groupBox_3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, 0, -1, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout6 = new QGridLayout();
        gridLayout6->setSpacing(0);
        gridLayout6->setObjectName(QStringLiteral("gridLayout6"));
        gridLayout6->setContentsMargins(0, 0, 0, 0);
        lineEdit_Opponent1Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent1Name->setObjectName(QStringLiteral("lineEdit_Opponent1Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent1Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent1Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent1Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent1Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent1Name->setMaxLength(12);

        gridLayout6->addWidget(lineEdit_Opponent1Name, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setMaximumSize(QSize(100, 16777215));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout6->addWidget(label_9, 0, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        spacerItem4 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem4);

        pushButton_Opponent1Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent1Avatar->setObjectName(QStringLiteral("pushButton_Opponent1Avatar"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_Opponent1Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent1Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent1Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent1Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent1Avatar->setIconSize(QSize(50, 50));

        hboxLayout8->addWidget(pushButton_Opponent1Avatar);

        spacerItem5 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem5);


        gridLayout6->addLayout(hboxLayout8, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout6);

        gridLayout7 = new QGridLayout();
        gridLayout7->setSpacing(0);
        gridLayout7->setObjectName(QStringLiteral("gridLayout7"));
        gridLayout7->setContentsMargins(0, 0, 0, 0);
        lineEdit_Opponent2Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent2Name->setObjectName(QStringLiteral("lineEdit_Opponent2Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent2Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent2Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent2Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent2Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent2Name->setMaxLength(12);

        gridLayout7->addWidget(lineEdit_Opponent2Name, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setMaximumSize(QSize(100, 16777215));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout7->addWidget(label_10, 0, 0, 1, 1);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        spacerItem6 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem6);

        pushButton_Opponent2Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent2Avatar->setObjectName(QStringLiteral("pushButton_Opponent2Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent2Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent2Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent2Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent2Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent2Avatar->setIconSize(QSize(50, 50));

        hboxLayout9->addWidget(pushButton_Opponent2Avatar);

        spacerItem7 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem7);


        gridLayout7->addLayout(hboxLayout9, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout7);

        gridLayout8 = new QGridLayout();
        gridLayout8->setSpacing(0);
        gridLayout8->setObjectName(QStringLiteral("gridLayout8"));
        gridLayout8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setMaximumSize(QSize(100, 16777215));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout8->addWidget(label_11, 0, 0, 1, 1);

        lineEdit_Opponent3Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent3Name->setObjectName(QStringLiteral("lineEdit_Opponent3Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent3Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent3Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent3Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent3Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent3Name->setMaxLength(12);

        gridLayout8->addWidget(lineEdit_Opponent3Name, 2, 0, 1, 1);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        spacerItem8 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem8);

        pushButton_Opponent3Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent3Avatar->setObjectName(QStringLiteral("pushButton_Opponent3Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent3Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent3Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent3Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent3Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent3Avatar->setIconSize(QSize(50, 50));

        hboxLayout10->addWidget(pushButton_Opponent3Avatar);

        spacerItem9 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem9);


        gridLayout8->addLayout(hboxLayout10, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout8);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(0);
        gridLayout9->setObjectName(QStringLiteral("gridLayout9"));
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        lineEdit_Opponent4Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent4Name->setObjectName(QStringLiteral("lineEdit_Opponent4Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent4Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent4Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent4Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent4Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent4Name->setMaxLength(12);

        gridLayout9->addWidget(lineEdit_Opponent4Name, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setMaximumSize(QSize(100, 16777215));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout9->addWidget(label_12, 0, 0, 1, 1);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QStringLiteral("hboxLayout11"));
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        spacerItem10 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem10);

        pushButton_Opponent4Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent4Avatar->setObjectName(QStringLiteral("pushButton_Opponent4Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent4Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent4Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent4Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent4Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent4Avatar->setIconSize(QSize(50, 50));

        hboxLayout11->addWidget(pushButton_Opponent4Avatar);

        spacerItem11 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem11);


        gridLayout9->addLayout(hboxLayout11, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout9);

        gridLayout10 = new QGridLayout();
        gridLayout10->setSpacing(0);
        gridLayout10->setObjectName(QStringLiteral("gridLayout10"));
        gridLayout10->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(100, 16777215));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout10->addWidget(label_20, 0, 0, 1, 1);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setObjectName(QStringLiteral("hboxLayout12"));
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        spacerItem12 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout12->addItem(spacerItem12);

        pushButton_Opponent5Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent5Avatar->setObjectName(QStringLiteral("pushButton_Opponent5Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent5Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent5Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent5Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent5Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent5Avatar->setIconSize(QSize(50, 50));

        hboxLayout12->addWidget(pushButton_Opponent5Avatar);

        spacerItem13 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout12->addItem(spacerItem13);


        gridLayout10->addLayout(hboxLayout12, 1, 0, 1, 1);

        lineEdit_Opponent5Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent5Name->setObjectName(QStringLiteral("lineEdit_Opponent5Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent5Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent5Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent5Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent5Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent5Name->setMaxLength(12);

        gridLayout10->addWidget(lineEdit_Opponent5Name, 2, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout10);


        gridLayout_11->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout11 = new QGridLayout();
        gridLayout11->setSpacing(0);
        gridLayout11->setObjectName(QStringLiteral("gridLayout11"));
        gridLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setObjectName(QStringLiteral("hboxLayout13"));
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        spacerItem14 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout13->addItem(spacerItem14);

        pushButton_Opponent6Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent6Avatar->setObjectName(QStringLiteral("pushButton_Opponent6Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent6Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent6Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent6Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent6Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent6Avatar->setIconSize(QSize(50, 50));

        hboxLayout13->addWidget(pushButton_Opponent6Avatar);

        spacerItem15 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout13->addItem(spacerItem15);


        gridLayout11->addLayout(hboxLayout13, 1, 0, 1, 1);

        lineEdit_Opponent6Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent6Name->setObjectName(QStringLiteral("lineEdit_Opponent6Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent6Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent6Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent6Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent6Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent6Name->setMaxLength(12);

        gridLayout11->addWidget(lineEdit_Opponent6Name, 2, 0, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);
        label_21->setMinimumSize(QSize(100, 0));
        label_21->setMaximumSize(QSize(100, 16777215));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout11->addWidget(label_21, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout11);

        _4 = new QGridLayout();
        _4->setSpacing(0);
        _4->setObjectName(QStringLiteral("_4"));
        _4->setContentsMargins(0, 0, 0, 0);
        _5 = new QHBoxLayout();
        _5->setSpacing(6);
        _5->setObjectName(QStringLiteral("_5"));
        _5->setContentsMargins(0, 0, 0, 0);
        spacerItem16 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _5->addItem(spacerItem16);

        pushButton_Opponent7Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent7Avatar->setObjectName(QStringLiteral("pushButton_Opponent7Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent7Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent7Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent7Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent7Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent7Avatar->setIconSize(QSize(50, 50));

        _5->addWidget(pushButton_Opponent7Avatar);

        spacerItem17 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _5->addItem(spacerItem17);


        _4->addLayout(_5, 1, 0, 1, 1);

        lineEdit_Opponent7Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent7Name->setObjectName(QStringLiteral("lineEdit_Opponent7Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent7Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent7Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent7Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent7Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent7Name->setMaxLength(12);

        _4->addWidget(lineEdit_Opponent7Name, 2, 0, 1, 1);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QStringLiteral("label_33"));
        sizePolicy2.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy2);
        label_33->setMinimumSize(QSize(100, 0));
        label_33->setMaximumSize(QSize(100, 16777215));
        label_33->setAlignment(Qt::AlignCenter);

        _4->addWidget(label_33, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(_4);

        _6 = new QGridLayout();
        _6->setSpacing(0);
        _6->setObjectName(QStringLiteral("_6"));
        _6->setContentsMargins(0, 0, 0, 0);
        _7 = new QHBoxLayout();
        _7->setSpacing(6);
        _7->setObjectName(QStringLiteral("_7"));
        _7->setContentsMargins(0, 0, 0, 0);
        spacerItem18 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _7->addItem(spacerItem18);

        pushButton_Opponent8Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent8Avatar->setObjectName(QStringLiteral("pushButton_Opponent8Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent8Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent8Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent8Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent8Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent8Avatar->setIconSize(QSize(50, 50));

        _7->addWidget(pushButton_Opponent8Avatar);

        spacerItem19 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _7->addItem(spacerItem19);


        _6->addLayout(_7, 1, 0, 1, 1);

        lineEdit_Opponent8Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent8Name->setObjectName(QStringLiteral("lineEdit_Opponent8Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent8Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent8Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent8Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent8Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent8Name->setMaxLength(12);

        _6->addWidget(lineEdit_Opponent8Name, 2, 0, 1, 1);

        label_53 = new QLabel(groupBox_3);
        label_53->setObjectName(QStringLiteral("label_53"));
        sizePolicy2.setHeightForWidth(label_53->sizePolicy().hasHeightForWidth());
        label_53->setSizePolicy(sizePolicy2);
        label_53->setMinimumSize(QSize(100, 0));
        label_53->setMaximumSize(QSize(100, 16777215));
        label_53->setAlignment(Qt::AlignCenter);

        _6->addWidget(label_53, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(_6);

        _8 = new QGridLayout();
        _8->setSpacing(0);
        _8->setObjectName(QStringLiteral("_8"));
        _8->setContentsMargins(0, 0, 0, 0);
        _9 = new QHBoxLayout();
        _9->setSpacing(6);
        _9->setObjectName(QStringLiteral("_9"));
        _9->setContentsMargins(0, 0, 0, 0);
        spacerItem20 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _9->addItem(spacerItem20);

        pushButton_Opponent9Avatar = new MyAvatarButton(groupBox_3);
        pushButton_Opponent9Avatar->setObjectName(QStringLiteral("pushButton_Opponent9Avatar"));
        sizePolicy3.setHeightForWidth(pushButton_Opponent9Avatar->sizePolicy().hasHeightForWidth());
        pushButton_Opponent9Avatar->setSizePolicy(sizePolicy3);
        pushButton_Opponent9Avatar->setMinimumSize(QSize(60, 60));
        pushButton_Opponent9Avatar->setMaximumSize(QSize(60, 60));
        pushButton_Opponent9Avatar->setIconSize(QSize(50, 50));

        _9->addWidget(pushButton_Opponent9Avatar);

        spacerItem21 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _9->addItem(spacerItem21);


        _8->addLayout(_9, 1, 0, 1, 1);

        lineEdit_Opponent9Name = new QLineEdit(groupBox_3);
        lineEdit_Opponent9Name->setObjectName(QStringLiteral("lineEdit_Opponent9Name"));
        sizePolicy2.setHeightForWidth(lineEdit_Opponent9Name->sizePolicy().hasHeightForWidth());
        lineEdit_Opponent9Name->setSizePolicy(sizePolicy2);
        lineEdit_Opponent9Name->setMinimumSize(QSize(100, 25));
        lineEdit_Opponent9Name->setMaximumSize(QSize(100, 25));
        lineEdit_Opponent9Name->setMaxLength(12);

        _8->addWidget(lineEdit_Opponent9Name, 2, 0, 1, 1);

        label_54 = new QLabel(groupBox_3);
        label_54->setObjectName(QStringLiteral("label_54"));
        sizePolicy2.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy2);
        label_54->setMinimumSize(QSize(100, 0));
        label_54->setMaximumSize(QSize(100, 16777215));
        label_54->setAlignment(Qt::AlignCenter);

        _8->addWidget(label_54, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(_8);


        gridLayout_11->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_3, 3, 0, 1, 1);

        label_38 = new QLabel(page_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setWordWrap(true);

        gridLayout_10->addWidget(label_38, 4, 0, 1, 1);

        spacerItem22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(spacerItem22, 5, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_21 = new QGridLayout(page_5);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        gridLayout_21->addWidget(label_6, 0, 0, 1, 1);

        line_2 = new QFrame(page_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_21->addWidget(line_2, 1, 0, 1, 1);

        groupBox_logOnOff = new QGroupBox(page_5);
        groupBox_logOnOff->setObjectName(QStringLiteral("groupBox_logOnOff"));
        groupBox_logOnOff->setCheckable(true);
        groupBox_logOnOff->setChecked(true);
        gridLayout_20 = new QGridLayout(groupBox_logOnOff);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        label_27 = new QLabel(groupBox_logOnOff);
        label_27->setObjectName(QStringLiteral("label_27"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy4);

        gridLayout_20->addWidget(label_27, 0, 0, 1, 1);

        spinBox_logStoreDuration = new QSpinBox(groupBox_logOnOff);
        spinBox_logStoreDuration->setObjectName(QStringLiteral("spinBox_logStoreDuration"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox_logStoreDuration->sizePolicy().hasHeightForWidth());
        spinBox_logStoreDuration->setSizePolicy(sizePolicy5);
        spinBox_logStoreDuration->setMinimum(1);
        spinBox_logStoreDuration->setMaximum(3650);
        spinBox_logStoreDuration->setValue(2);

        gridLayout_20->addWidget(spinBox_logStoreDuration, 0, 1, 1, 1);

        label_39 = new QLabel(groupBox_logOnOff);
        label_39->setObjectName(QStringLiteral("label_39"));
        sizePolicy4.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy4);
        label_39->setWordWrap(false);

        gridLayout_20->addWidget(label_39, 1, 0, 1, 1);

        comboBox_logInterval = new QComboBox(groupBox_logOnOff);
        comboBox_logInterval->setObjectName(QStringLiteral("comboBox_logInterval"));
        sizePolicy5.setHeightForWidth(comboBox_logInterval->sizePolicy().hasHeightForWidth());
        comboBox_logInterval->setSizePolicy(sizePolicy5);

        gridLayout_20->addWidget(comboBox_logInterval, 1, 1, 1, 1);

        label_29 = new QLabel(groupBox_logOnOff);
        label_29->setObjectName(QStringLiteral("label_29"));
        sizePolicy4.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy4);

        gridLayout_20->addWidget(label_29, 2, 0, 1, 1);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setSpacing(2);
        hboxLayout14->setObjectName(QStringLiteral("hboxLayout14"));
        lineEdit_logDir = new QLineEdit(groupBox_logOnOff);
        lineEdit_logDir->setObjectName(QStringLiteral("lineEdit_logDir"));

        hboxLayout14->addWidget(lineEdit_logDir);

        pushButton_openLogDir = new QPushButton(groupBox_logOnOff);
        pushButton_openLogDir->setObjectName(QStringLiteral("pushButton_openLogDir"));
        pushButton_openLogDir->setMinimumSize(QSize(27, 26));
        pushButton_openLogDir->setMaximumSize(QSize(27, 26));
        pushButton_openLogDir->setIcon(icon8);

        hboxLayout14->addWidget(pushButton_openLogDir);


        gridLayout_20->addLayout(hboxLayout14, 2, 1, 1, 1);


        gridLayout_21->addWidget(groupBox_logOnOff, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_7, 3, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        gridLayout_22 = new QGridLayout(page_9);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        label_44 = new QLabel(page_9);
        label_44->setObjectName(QStringLiteral("label_44"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_44->setFont(font);

        gridLayout_22->addWidget(label_44, 0, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(269, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_22->addItem(verticalSpacer_5, 3, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        pushButton_resetSettings = new QPushButton(page_9);
        pushButton_resetSettings->setObjectName(QStringLiteral("pushButton_resetSettings"));
        pushButton_resetSettings->setMinimumSize(QSize(300, 60));
        pushButton_resetSettings->setFont(font);

        horizontalLayout_10->addWidget(pushButton_resetSettings);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        gridLayout_22->addLayout(horizontalLayout_10, 4, 0, 1, 2);

        verticalSpacer_6 = new QSpacerItem(269, 292, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_22->addItem(verticalSpacer_6, 6, 1, 1, 1);

        line_10 = new QFrame(page_9);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_22->addWidget(line_10, 1, 0, 1, 2);

        label_resetNote = new QLabel(page_9);
        label_resetNote->setObjectName(QStringLiteral("label_resetNote"));
        QFont font1;
        font1.setItalic(true);
        label_resetNote->setFont(font1);

        gridLayout_22->addWidget(label_resetNote, 5, 0, 1, 2);

        stackedWidget->addWidget(page_9);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        vboxLayout1 = new QVBoxLayout(page_4);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        label_34 = new QLabel(page_4);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setStyleSheet(QStringLiteral("QLabel { font-weight: bold;  }"));

        vboxLayout1->addWidget(label_34);

        line_5 = new QFrame(page_4);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_5);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setObjectName(QStringLiteral("hboxLayout15"));
        label_15 = new QLabel(page_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        hboxLayout15->addWidget(label_15);

        spinBox_netQuantityPlayers = new QSpinBox(page_4);
        spinBox_netQuantityPlayers->setObjectName(QStringLiteral("spinBox_netQuantityPlayers"));
        spinBox_netQuantityPlayers->setMinimum(2);
        spinBox_netQuantityPlayers->setMaximum(10);
        spinBox_netQuantityPlayers->setValue(10);

        hboxLayout15->addWidget(spinBox_netQuantityPlayers);


        vboxLayout1->addLayout(hboxLayout15);

        hboxLayout16 = new QHBoxLayout();
        hboxLayout16->setObjectName(QStringLiteral("hboxLayout16"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        hboxLayout16->addWidget(label_13);

        spinBox_netStartCash = new QSpinBox(page_4);
        spinBox_netStartCash->setObjectName(QStringLiteral("spinBox_netStartCash"));
        spinBox_netStartCash->setMinimum(1000);
        spinBox_netStartCash->setMaximum(1000000);
        spinBox_netStartCash->setSingleStep(50);

        hboxLayout16->addWidget(spinBox_netStartCash);


        vboxLayout1->addLayout(hboxLayout16);

        hboxLayout17 = new QHBoxLayout();
        hboxLayout17->setObjectName(QStringLiteral("hboxLayout17"));
        label_35 = new QLabel(page_4);
        label_35->setObjectName(QStringLiteral("label_35"));

        hboxLayout17->addWidget(label_35);

        spinBox_netFirstSmallBlind = new QSpinBox(page_4);
        spinBox_netFirstSmallBlind->setObjectName(QStringLiteral("spinBox_netFirstSmallBlind"));
        spinBox_netFirstSmallBlind->setMinimum(5);
        spinBox_netFirstSmallBlind->setMaximum(20000);

        hboxLayout17->addWidget(spinBox_netFirstSmallBlind);


        vboxLayout1->addLayout(hboxLayout17);

        hboxLayout18 = new QHBoxLayout();
        hboxLayout18->setObjectName(QStringLiteral("hboxLayout18"));
        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setMaximumSize(QSize(16777215, 105));
        gridLayout12 = new QGridLayout(groupBox_8);
        gridLayout12->setObjectName(QStringLiteral("gridLayout12"));
        gridLayout12->setVerticalSpacing(4);
        gridLayout12->setContentsMargins(6, 0, 6, 6);
        radioButton_netRaiseBlindsAtHands = new QRadioButton(groupBox_8);
        radioButton_netRaiseBlindsAtHands->setObjectName(QStringLiteral("radioButton_netRaiseBlindsAtHands"));
        radioButton_netRaiseBlindsAtHands->setChecked(true);

        gridLayout12->addWidget(radioButton_netRaiseBlindsAtHands, 0, 0, 1, 1);

        spinBox_netRaiseSmallBlindEveryHands = new QSpinBox(groupBox_8);
        spinBox_netRaiseSmallBlindEveryHands->setObjectName(QStringLiteral("spinBox_netRaiseSmallBlindEveryHands"));
        spinBox_netRaiseSmallBlindEveryHands->setMinimum(1);

        gridLayout12->addWidget(spinBox_netRaiseSmallBlindEveryHands, 0, 1, 1, 1);

        label_51 = new QLabel(groupBox_8);
        label_51->setObjectName(QStringLiteral("label_51"));
        sizePolicy.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy);

        gridLayout12->addWidget(label_51, 0, 2, 1, 1);

        radioButton_netRaiseBlindsAtMinutes = new QRadioButton(groupBox_8);
        radioButton_netRaiseBlindsAtMinutes->setObjectName(QStringLiteral("radioButton_netRaiseBlindsAtMinutes"));

        gridLayout12->addWidget(radioButton_netRaiseBlindsAtMinutes, 1, 0, 1, 1);

        spinBox_netRaiseSmallBlindEveryMinutes = new QSpinBox(groupBox_8);
        spinBox_netRaiseSmallBlindEveryMinutes->setObjectName(QStringLiteral("spinBox_netRaiseSmallBlindEveryMinutes"));
        spinBox_netRaiseSmallBlindEveryMinutes->setMinimum(1);

        gridLayout12->addWidget(spinBox_netRaiseSmallBlindEveryMinutes, 1, 1, 1, 1);

        label_52 = new QLabel(groupBox_8);
        label_52->setObjectName(QStringLiteral("label_52"));
        sizePolicy.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy);

        gridLayout12->addWidget(label_52, 1, 2, 1, 1);

        spacerItem23 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout12->addItem(spacerItem23, 2, 1, 1, 1);


        hboxLayout18->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(page_4);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        groupBox_9->setMaximumSize(QSize(16777215, 105));
        gridLayout13 = new QGridLayout(groupBox_9);
        gridLayout13->setObjectName(QStringLiteral("gridLayout13"));
        gridLayout13->setVerticalSpacing(2);
        gridLayout13->setContentsMargins(6, 0, 6, 4);
        radioButton_netAlwaysDoubleBlinds = new QRadioButton(groupBox_9);
        radioButton_netAlwaysDoubleBlinds->setObjectName(QStringLiteral("radioButton_netAlwaysDoubleBlinds"));
        radioButton_netAlwaysDoubleBlinds->setChecked(true);

        gridLayout13->addWidget(radioButton_netAlwaysDoubleBlinds, 0, 0, 1, 1);

        radioButton_netManualBlindsOrder = new QRadioButton(groupBox_9);
        radioButton_netManualBlindsOrder->setObjectName(QStringLiteral("radioButton_netManualBlindsOrder"));

        gridLayout13->addWidget(radioButton_netManualBlindsOrder, 1, 0, 1, 1);

        pushButton_netEditManualBlindsOrder = new QPushButton(groupBox_9);
        pushButton_netEditManualBlindsOrder->setObjectName(QStringLiteral("pushButton_netEditManualBlindsOrder"));
        pushButton_netEditManualBlindsOrder->setEnabled(false);

        gridLayout13->addWidget(pushButton_netEditManualBlindsOrder, 2, 0, 1, 1);


        hboxLayout18->addWidget(groupBox_9);


        vboxLayout1->addLayout(hboxLayout18);

        hboxLayout19 = new QHBoxLayout();
        hboxLayout19->setObjectName(QStringLiteral("hboxLayout19"));
        label_36 = new QLabel(page_4);
        label_36->setObjectName(QStringLiteral("label_36"));

        hboxLayout19->addWidget(label_36);

        spinBox_netDelayBetweenHands = new QSpinBox(page_4);
        spinBox_netDelayBetweenHands->setObjectName(QStringLiteral("spinBox_netDelayBetweenHands"));
        spinBox_netDelayBetweenHands->setMinimum(5);
        spinBox_netDelayBetweenHands->setMaximum(20);
        spinBox_netDelayBetweenHands->setSingleStep(1);
        spinBox_netDelayBetweenHands->setValue(7);

        hboxLayout19->addWidget(spinBox_netDelayBetweenHands);


        vboxLayout1->addLayout(hboxLayout19);

        hboxLayout20 = new QHBoxLayout();
        hboxLayout20->setObjectName(QStringLiteral("hboxLayout20"));
        label_40 = new QLabel(page_4);
        label_40->setObjectName(QStringLiteral("label_40"));

        hboxLayout20->addWidget(label_40);

        spinBox_netTimeOutPlayerAction = new QSpinBox(page_4);
        spinBox_netTimeOutPlayerAction->setObjectName(QStringLiteral("spinBox_netTimeOutPlayerAction"));
        spinBox_netTimeOutPlayerAction->setMinimum(5);
        spinBox_netTimeOutPlayerAction->setMaximum(60);
        spinBox_netTimeOutPlayerAction->setValue(20);

        hboxLayout20->addWidget(spinBox_netTimeOutPlayerAction);


        vboxLayout1->addLayout(hboxLayout20);

        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_5->addWidget(label_16);

        spinBox_serverPort = new QSpinBox(groupBox_2);
        spinBox_serverPort->setObjectName(QStringLiteral("spinBox_serverPort"));
        sizePolicy1.setHeightForWidth(spinBox_serverPort->sizePolicy().hasHeightForWidth());
        spinBox_serverPort->setSizePolicy(sizePolicy1);
        spinBox_serverPort->setMinimum(80);
        spinBox_serverPort->setMaximum(65535);
        spinBox_serverPort->setValue(7234);

        horizontalLayout_5->addWidget(spinBox_serverPort);


        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        checkBox_useIpv6 = new QCheckBox(groupBox_2);
        checkBox_useIpv6->setObjectName(QStringLiteral("checkBox_useIpv6"));

        gridLayout_2->addWidget(checkBox_useIpv6, 1, 0, 1, 1);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setOpenExternalLinks(true);

        gridLayout_2->addWidget(label_22, 1, 1, 1, 1);

        checkBox_useSctp = new QCheckBox(groupBox_2);
        checkBox_useSctp->setObjectName(QStringLiteral("checkBox_useSctp"));

        gridLayout_2->addWidget(checkBox_useSctp, 2, 0, 1, 1);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setOpenExternalLinks(true);

        gridLayout_2->addWidget(label_24, 2, 1, 1, 1);


        vboxLayout1->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_4);

        hboxLayout->addWidget(stackedWidget);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        line = new QFrame(settingsDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(settingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_14->setBuddy(comboBox_switchLanguage);
        label_4->setBuddy(spinBox_quantityPlayers);
        label_2->setBuddy(spinBox_startCash);
        label_3->setBuddy(spinBox_firstSmallBlind);
        label->setBuddy(spinBox_gameSpeed);
        label_41->setBuddy(lineEdit_InternetServerAddress);
        label_31->setBuddy(spinBox_InternetServerPort);
        label_27->setBuddy(spinBox_logStoreDuration);
        label_39->setBuddy(comboBox_logInterval);
        label_29->setBuddy(lineEdit_logDir);
        label_15->setBuddy(spinBox_netQuantityPlayers);
        label_13->setBuddy(spinBox_netStartCash);
        label_35->setBuddy(spinBox_netFirstSmallBlind);
        label_36->setBuddy(spinBox_netDelayBetweenHands);
        label_40->setBuddy(spinBox_netTimeOutPlayerAction);
        label_16->setBuddy(spinBox_serverPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(listWidget, comboBox_switchLanguage);
        QWidget::setTabOrder(comboBox_switchLanguage, checkBox_showRightToolbox);
        QWidget::setTabOrder(checkBox_showRightToolbox, checkBox_showLeftToolbox);
        QWidget::setTabOrder(checkBox_showLeftToolbox, checkBox_showFadeOutCardsAnimation);
        QWidget::setTabOrder(checkBox_showFadeOutCardsAnimation, checkBox_showFlipCardsAnimation);
        QWidget::setTabOrder(checkBox_showFlipCardsAnimation, checkBox_alternateFKeysUserActionMode);
        QWidget::setTabOrder(checkBox_alternateFKeysUserActionMode, checkBox_showBlindButtons);
        QWidget::setTabOrder(checkBox_showBlindButtons, checkBox_cardsChanceMonitor);
        QWidget::setTabOrder(checkBox_cardsChanceMonitor, checkBox_antiPeekMode);
        QWidget::setTabOrder(checkBox_antiPeekMode, checkBox_disableSplashscreen);
        QWidget::setTabOrder(checkBox_disableSplashscreen, checkBox_dontTranslatePokerStrings);
        QWidget::setTabOrder(checkBox_dontTranslatePokerStrings, checkBox_enableBetInputFocusSwitch);
        QWidget::setTabOrder(checkBox_enableBetInputFocusSwitch, tabWidget);
        QWidget::setTabOrder(tabWidget, treeWidget_gameTableStyles);
        QWidget::setTabOrder(treeWidget_gameTableStyles, pushButton_addGameTableStyle);
        QWidget::setTabOrder(pushButton_addGameTableStyle, pushButton_removeGameTableStyle);
        QWidget::setTabOrder(pushButton_removeGameTableStyle, treeWidget_cardDeckStyles);
        QWidget::setTabOrder(treeWidget_cardDeckStyles, pushButton_addCardDeckStyle);
        QWidget::setTabOrder(pushButton_addCardDeckStyle, pushButton_removeCardDeckStyle);
        QWidget::setTabOrder(pushButton_removeCardDeckStyle, radioButton_flipsideTux);
        QWidget::setTabOrder(radioButton_flipsideTux, radioButton_flipsideOwn);
        QWidget::setTabOrder(radioButton_flipsideOwn, lineEdit_OwnFlipsideFilename);
        QWidget::setTabOrder(lineEdit_OwnFlipsideFilename, pushButton_openFlipsidePicture);
        QWidget::setTabOrder(pushButton_openFlipsidePicture, groupBox_playSoundEffects);
        QWidget::setTabOrder(groupBox_playSoundEffects, horizontalSlider_soundVolume);
        QWidget::setTabOrder(horizontalSlider_soundVolume, checkBox_playGameActions);
        QWidget::setTabOrder(checkBox_playGameActions, checkBox_playLobbyChatNotification);
        QWidget::setTabOrder(checkBox_playLobbyChatNotification, checkBox_playNetworkGameNotification);
        QWidget::setTabOrder(checkBox_playNetworkGameNotification, spinBox_quantityPlayers);
        QWidget::setTabOrder(spinBox_quantityPlayers, spinBox_startCash);
        QWidget::setTabOrder(spinBox_startCash, spinBox_firstSmallBlind);
        QWidget::setTabOrder(spinBox_firstSmallBlind, radioButton_raiseBlindsAtHands);
        QWidget::setTabOrder(radioButton_raiseBlindsAtHands, spinBox_raiseSmallBlindEveryHands);
        QWidget::setTabOrder(spinBox_raiseSmallBlindEveryHands, radioButton_raiseBlindsAtMinutes);
        QWidget::setTabOrder(radioButton_raiseBlindsAtMinutes, spinBox_raiseSmallBlindEveryMinutes);
        QWidget::setTabOrder(spinBox_raiseSmallBlindEveryMinutes, radioButton_alwaysDoubleBlinds);
        QWidget::setTabOrder(radioButton_alwaysDoubleBlinds, radioButton_manualBlindsOrder);
        QWidget::setTabOrder(radioButton_manualBlindsOrder, pushButton_editManualBlindsOrder);
        QWidget::setTabOrder(pushButton_editManualBlindsOrder, spinBox_gameSpeed);
        QWidget::setTabOrder(spinBox_gameSpeed, checkBox_pauseBetweenHands);
        QWidget::setTabOrder(checkBox_pauseBetweenHands, checkBox_showGameSettingsDialogOnNewGame);
        QWidget::setTabOrder(checkBox_showGameSettingsDialogOnNewGame, spinBox_netQuantityPlayers);
        QWidget::setTabOrder(spinBox_netQuantityPlayers, spinBox_netStartCash);
        QWidget::setTabOrder(spinBox_netStartCash, spinBox_netFirstSmallBlind);
        QWidget::setTabOrder(spinBox_netFirstSmallBlind, radioButton_netRaiseBlindsAtHands);
        QWidget::setTabOrder(radioButton_netRaiseBlindsAtHands, spinBox_netRaiseSmallBlindEveryHands);
        QWidget::setTabOrder(spinBox_netRaiseSmallBlindEveryHands, radioButton_netRaiseBlindsAtMinutes);
        QWidget::setTabOrder(radioButton_netRaiseBlindsAtMinutes, spinBox_netRaiseSmallBlindEveryMinutes);
        QWidget::setTabOrder(spinBox_netRaiseSmallBlindEveryMinutes, radioButton_netAlwaysDoubleBlinds);
        QWidget::setTabOrder(radioButton_netAlwaysDoubleBlinds, radioButton_netManualBlindsOrder);
        QWidget::setTabOrder(radioButton_netManualBlindsOrder, pushButton_netEditManualBlindsOrder);
        QWidget::setTabOrder(pushButton_netEditManualBlindsOrder, spinBox_netDelayBetweenHands);
        QWidget::setTabOrder(spinBox_netDelayBetweenHands, spinBox_netTimeOutPlayerAction);
        QWidget::setTabOrder(spinBox_netTimeOutPlayerAction, spinBox_serverPort);
        QWidget::setTabOrder(spinBox_serverPort, checkBox_useIpv6);
        QWidget::setTabOrder(checkBox_useIpv6, checkBox_useSctp);
        QWidget::setTabOrder(checkBox_useSctp, tabWidget_2);
        QWidget::setTabOrder(tabWidget_2, groupBox_automaticServerConfig);
        QWidget::setTabOrder(groupBox_automaticServerConfig, lineEdit_InternetServerListAddress);
        QWidget::setTabOrder(lineEdit_InternetServerListAddress, groupBox_manualServerConfig);
        QWidget::setTabOrder(groupBox_manualServerConfig, lineEdit_InternetServerAddress);
        QWidget::setTabOrder(lineEdit_InternetServerAddress, spinBox_InternetServerPort);
        QWidget::setTabOrder(spinBox_InternetServerPort, checkBox_useAvatarServer);
        QWidget::setTabOrder(checkBox_useAvatarServer, lineEdit_avatarServerAddress);
        QWidget::setTabOrder(lineEdit_avatarServerAddress, checkBox_InternetServerUseIpv6);
        QWidget::setTabOrder(checkBox_InternetServerUseIpv6, checkBox_InternetServerUseSctp);
        QWidget::setTabOrder(checkBox_InternetServerUseSctp, lineEdit_internetGameName);
        QWidget::setTabOrder(lineEdit_internetGameName, comboBox_internetGameType);
        QWidget::setTabOrder(comboBox_internetGameType, checkBox_UseInternetGamePassword);
        QWidget::setTabOrder(checkBox_UseInternetGamePassword, lineEdit_InternetGamePassword);
        QWidget::setTabOrder(lineEdit_InternetGamePassword, treeWidget_internetGameIgnoredPlayers);
        QWidget::setTabOrder(treeWidget_internetGameIgnoredPlayers, pushButton_internetGameRemoveIgnoredPlayer);
        QWidget::setTabOrder(pushButton_internetGameRemoveIgnoredPlayer, pushButton_HumanPlayerAvatar);
        QWidget::setTabOrder(pushButton_HumanPlayerAvatar, lineEdit_HumanPlayerName);
        QWidget::setTabOrder(lineEdit_HumanPlayerName, pushButton_Opponent1Avatar);
        QWidget::setTabOrder(pushButton_Opponent1Avatar, lineEdit_Opponent1Name);
        QWidget::setTabOrder(lineEdit_Opponent1Name, pushButton_Opponent2Avatar);
        QWidget::setTabOrder(pushButton_Opponent2Avatar, lineEdit_Opponent2Name);
        QWidget::setTabOrder(lineEdit_Opponent2Name, pushButton_Opponent3Avatar);
        QWidget::setTabOrder(pushButton_Opponent3Avatar, lineEdit_Opponent3Name);
        QWidget::setTabOrder(lineEdit_Opponent3Name, pushButton_Opponent4Avatar);
        QWidget::setTabOrder(pushButton_Opponent4Avatar, lineEdit_Opponent4Name);
        QWidget::setTabOrder(lineEdit_Opponent4Name, pushButton_Opponent5Avatar);
        QWidget::setTabOrder(pushButton_Opponent5Avatar, lineEdit_Opponent5Name);
        QWidget::setTabOrder(lineEdit_Opponent5Name, pushButton_Opponent6Avatar);
        QWidget::setTabOrder(pushButton_Opponent6Avatar, lineEdit_Opponent6Name);
        QWidget::setTabOrder(lineEdit_Opponent6Name, pushButton_Opponent7Avatar);
        QWidget::setTabOrder(pushButton_Opponent7Avatar, lineEdit_Opponent7Name);
        QWidget::setTabOrder(lineEdit_Opponent7Name, pushButton_Opponent8Avatar);
        QWidget::setTabOrder(pushButton_Opponent8Avatar, lineEdit_Opponent8Name);
        QWidget::setTabOrder(lineEdit_Opponent8Name, pushButton_Opponent9Avatar);
        QWidget::setTabOrder(pushButton_Opponent9Avatar, lineEdit_Opponent9Name);
        QWidget::setTabOrder(lineEdit_Opponent9Name, groupBox_logOnOff);
        QWidget::setTabOrder(groupBox_logOnOff, spinBox_logStoreDuration);
        QWidget::setTabOrder(spinBox_logStoreDuration, comboBox_logInterval);
        QWidget::setTabOrder(comboBox_logInterval, lineEdit_logDir);
        QWidget::setTabOrder(lineEdit_logDir, pushButton_openLogDir);
        QWidget::setTabOrder(pushButton_openLogDir, buttonBox);

        retranslateUi(settingsDialog);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(buttonBox, SIGNAL(rejected()), settingsDialog, SLOT(reject()));
        QObject::connect(horizontalSlider_soundVolume, SIGNAL(valueChanged(int)), label_soundVolume, SLOT(setNum(int)));
        QObject::connect(radioButton_manualBlindsOrder, SIGNAL(toggled(bool)), pushButton_editManualBlindsOrder, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_netManualBlindsOrder, SIGNAL(toggled(bool)), pushButton_netEditManualBlindsOrder, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_flipsideOwn, SIGNAL(toggled(bool)), lineEdit_OwnFlipsideFilename, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_flipsideOwn, SIGNAL(toggled(bool)), pushButton_openFlipsidePicture, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QApplication::translate("settingsDialog", "Settings", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("settingsDialog", "Interface", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("settingsDialog", "Style", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("settingsDialog", "Sound", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("settingsDialog", "BEAT THE BOTS\342\204\242", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("settingsDialog", "Poker Rooms", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("settingsDialog", "Nicks/Avatars", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("settingsDialog", "Log Messages", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("settingsDialog", "Factory Settings", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_19->setText(QApplication::translate("settingsDialog", "Interface", 0));
        label_14->setText(QApplication::translate("settingsDialog", "Language:", 0));
        checkBox_showRightToolbox->setText(QApplication::translate("settingsDialog", "Show right toolbox", 0));
        checkBox_showFadeOutCardsAnimation->setText(QApplication::translate("settingsDialog", "Show fade-out animation for non-winning cards", 0));
        checkBox_alternateFKeysUserActionMode->setText(QApplication::translate("settingsDialog", "Reverse order of F-Keys (F1 - F4)", 0));
        checkBox_showBlindButtons->setText(QApplication::translate("settingsDialog", "Show buttons for small blind and big blind", 0));
        checkBox_dontTranslatePokerStrings->setText(QApplication::translate("settingsDialog", "Don't translate poker strings like check, call, raise from game table style", 0));
        checkBox_cardsChanceMonitor->setText(QApplication::translate("settingsDialog", "Show cards chance monitor", 0));
        checkBox_antiPeekMode->setText(QApplication::translate("settingsDialog", "Show own cards only on mouse click", 0));
        checkBox_showFlipCardsAnimation->setText(QApplication::translate("settingsDialog", "Show flip-card animation", 0));
        checkBox_showLeftToolbox->setText(QApplication::translate("settingsDialog", "Show left toolbox", 0));
        checkBox_disableSplashscreen->setText(QApplication::translate("settingsDialog", "Disable splashscreen on startup", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("settingsDialog", "Common", 0));
        checkBox_showCountryFlagInAvatar->setText(QApplication::translate("settingsDialog", "Show country flag in the corner of avatar", 0));
        checkBox_UseLobbyChat->setText(QApplication::translate("settingsDialog", "Show lobby chat", 0));
        checkBox_enableBetInputFocusSwitch->setText(QApplication::translate("settingsDialog", "Switch keyboard focus to bet-input-field if it's your turn", 0));
        checkBox_enableAccidentallyCallBlocker->setText(QApplication::translate("settingsDialog", "Activate the \"accidentally call after big raise\" blocker", 0));
        checkBox_dontHideAvatarsOfIgnored->setText(QApplication::translate("settingsDialog", "Do not hide avatars of players which are on the ignore list", 0));
        checkBox_disableChatEmoticons->setText(QApplication::translate("settingsDialog", "Disable emoticons in the chat", 0));
        checkBox_showPingStateInAvatar->setText(QApplication::translate("settingsDialog", "Show network state color in the corner of the avatar", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("settingsDialog", "Network / Poker Rooms", 0));
        label_28->setText(QApplication::translate("settingsDialog", "Style", 0));
        pushButton_addGameTableStyle->setText(QApplication::translate("settingsDialog", "Add ...", 0));
        pushButton_removeGameTableStyle->setText(QApplication::translate("settingsDialog", "Remove", 0));
        groupBox_13->setTitle(QApplication::translate("settingsDialog", "Preview - Information:", 0));
        label_gameTableStylePreview->setText(QString());
        label_gameTableStyleInfo->setText(QString());
        label_55->setText(QApplication::translate("settingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://http://www.teampoker.com/table_style/\"><span style=\" text-decoration: underline; color:#0000ff;\">Get new TEAM POKER\302\256 game table styles ...</span></a></p></body></html>", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_gameTableStyles->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("settingsDialog", "State", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("settingsDialog", "Maintainer", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("settingsDialog", "Description", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("settingsDialog", "Game Table", 0));
        pushButton_addCardDeckStyle->setText(QApplication::translate("settingsDialog", "Add ...", 0));
        pushButton_removeCardDeckStyle->setText(QApplication::translate("settingsDialog", "Remove", 0));
        groupBox_14->setTitle(QApplication::translate("settingsDialog", "Preview - Information:", 0));
        label_cardDeckStylePreview->setText(QString());
        label_cardDeckStyleInfo->setText(QString());
        label_56->setText(QApplication::translate("settingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.teampoker.com/cd_styles/\"><span style=\" text-decoration: underline; color:#0000ff;\">Get new TEAM POKER\302\256 card deck styles ...</span></a></p></body></html>", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_cardDeckStyles->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("settingsDialog", "State", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("settingsDialog", "Maintainer", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("settingsDialog", "Description", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("settingsDialog", "Card Deck", 0));
        radioButton_flipsideTux->setText(QApplication::translate("settingsDialog", "Use card back from card style", 0));
        radioButton_flipsideOwn->setText(QApplication::translate("settingsDialog", "Use custom card back picture:", 0));
        label_57->setText(QApplication::translate("settingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Sans L'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Note: Best quality with image ratio like </span><span style=\" font-weight:600; font-style:italic;\">width=48, height=76.</span></p></td></tr></table></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("settingsDialog", "Card Back", 0));
        label_26->setText(QApplication::translate("settingsDialog", "Sound", 0));
        groupBox_playSoundEffects->setTitle(QApplication::translate("settingsDialog", "Play sound effects", 0));
        label_25->setText(QApplication::translate("settingsDialog", "Sound Volume:", 0));
        label_soundVolume->setText(QApplication::translate("settingsDialog", "10", 0));
        groupBox_10->setTitle(QApplication::translate("settingsDialog", "Sound Categories ", 0));
        checkBox_playGameActions->setText(QApplication::translate("settingsDialog", "Play game actions sounds like \"check\", \"call\", \"raise\"", 0));
        checkBox_playLobbyChatNotification->setText(QApplication::translate("settingsDialog", "Play lobby chat notifications", 0));
        checkBox_playNetworkGameNotification->setText(QApplication::translate("settingsDialog", "Play network/Poker Rooms notifications like \"player joined the game\"", 0));
        checkBox_playBlindRaiseSound->setText(QApplication::translate("settingsDialog", "Play blind raise notification", 0));
        label_5->setText(QApplication::translate("settingsDialog", "BEAT THE BOTS\342\204\242 Settings", 0));
        label_4->setText(QApplication::translate("settingsDialog", "Number of players:", 0));
        label_2->setText(QApplication::translate("settingsDialog", "Start Cash:", 0));
        spinBox_startCash->setPrefix(QApplication::translate("settingsDialog", "$", 0));
        label_3->setText(QApplication::translate("settingsDialog", "First small blind:", 0));
        spinBox_firstSmallBlind->setPrefix(QApplication::translate("settingsDialog", "$", 0));
        groupBox_6->setTitle(QApplication::translate("settingsDialog", "Raise blinds:", 0));
        radioButton_raiseBlindsAtHands->setText(QApplication::translate("settingsDialog", "Every:", 0));
        label_47->setText(QApplication::translate("settingsDialog", "hands", 0));
        radioButton_raiseBlindsAtMinutes->setText(QApplication::translate("settingsDialog", "Every:", 0));
        label_50->setText(QApplication::translate("settingsDialog", "minutes", 0));
        groupBox_7->setTitle(QApplication::translate("settingsDialog", "Raise mode:", 0));
        radioButton_alwaysDoubleBlinds->setText(QApplication::translate("settingsDialog", "Always double blinds", 0));
        radioButton_manualBlindsOrder->setText(QApplication::translate("settingsDialog", "Manual blinds order:", 0));
        pushButton_editManualBlindsOrder->setText(QApplication::translate("settingsDialog", "Edit ...", 0));
        label->setText(QApplication::translate("settingsDialog", "Game Speed:", 0));
        checkBox_pauseBetweenHands->setText(QApplication::translate("settingsDialog", "Pause between hands (press \"start\" button to go on)", 0));
        checkBox_showGameSettingsDialogOnNewGame->setText(QApplication::translate("settingsDialog", "Show game settings dialog on every new game", 0));
        label_30->setText(QApplication::translate("settingsDialog", "Poker Rooms Settings", 0));
        groupBox_automaticServerConfig->setTitle(QApplication::translate("settingsDialog", "Automatic Server Configuration URL", 0));
        label_18->setText(QApplication::translate("settingsDialog", "Serverlist Address:", 0));
        groupBox_manualServerConfig->setTitle(QApplication::translate("settingsDialog", "Manual Server Configuration", 0));
        label_37->setText(QApplication::translate("settingsDialog", "Server Password:", 0));
        label_41->setText(QApplication::translate("settingsDialog", "Server Address:", 0));
        checkBox_useAvatarServer->setText(QApplication::translate("settingsDialog", "Avatar Server:", 0));
        label_31->setText(QApplication::translate("settingsDialog", "Server Port:", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("settingsDialog", "Server", 0));
        label_43->setText(QApplication::translate("settingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\"font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Note: Default </span><span style=\" font-weight:600; font-style:italic;\">Game Settings</span><span style=\" font-style:italic;\"> like \"Maximum number of players\", \"Start Cash\" and \"Small Blind\" will be used </span><span style=\" font-weight:600; font-style:italic;\">from Network Game Settings.</span></p></body></html>", 0));
        label_23->setText(QApplication::translate("settingsDialog", "Default game name:", 0));
        label_17->setText(QApplication::translate("settingsDialog", "Default game type:", 0));
        comboBox_internetGameType->setItemText(0, QApplication::translate("settingsDialog", "Standard", 0));
        comboBox_internetGameType->setItemText(1, QApplication::translate("settingsDialog", "Registered players only", 0));
        comboBox_internetGameType->setItemText(2, QApplication::translate("settingsDialog", "PRIVATE POKER TABLE(TM)", 0));
        comboBox_internetGameType->setItemText(3, QApplication::translate("settingsDialog", "Ranking game", 0));

        checkBox_UseInternetGamePassword->setText(QApplication::translate("settingsDialog", "Use password for private game:", 0));
        checkBox_InetGame_AutoLeaveTheTableAfterGameFinished->setText(QApplication::translate("settingsDialog", "Automatically leave the table after the game finished", 0));
        checkBox_allowSpectators->setText(QApplication::translate("settingsDialog", "Allow spectators to watch the game", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("settingsDialog", "Game", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_internetGameIgnoredPlayers->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("settingsDialog", "Player", 0));
        pushButton_internetGameRemoveIgnoredPlayer->setText(QApplication::translate("settingsDialog", "Remove Player", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("settingsDialog", "Ignored Players", 0));
        checkBox_InternetServerUseIpv6->setText(QApplication::translate("settingsDialog", "Use IPv6", 0));
        label_32->setText(QApplication::translate("settingsDialog", "<a href=\"http://en.wikipedia.org/wiki/Ipv6\">What is this?</a>", 0));
        checkBox_InternetServerUseSctp->setText(QApplication::translate("settingsDialog", "Use SCTP", 0));
        label_whatIsSctp->setText(QApplication::translate("settingsDialog", "<a href=\"http://en.wikipedia.org/wiki/Stream_Control_Transmission_Protocol\">What is this?</a>", 0));
        label_7->setText(QApplication::translate("settingsDialog", "Player Nicks/Avatars", 0));
        label_8->setText(QApplication::translate("settingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Human Player:<br /><span style=\" font-style:italic;\">(This nick will also be used for the online game login)</span></p></body></html>", 0));
        pushButton_HumanPlayerAvatar->setText(QString());
        groupBox_3->setTitle(QApplication::translate("settingsDialog", "Computer Engine", 0));
        label_9->setText(QApplication::translate("settingsDialog", "Opponent 1:", 0));
        label_10->setText(QApplication::translate("settingsDialog", "Opponent 2:", 0));
        label_11->setText(QApplication::translate("settingsDialog", "Opponent 3:", 0));
        label_12->setText(QApplication::translate("settingsDialog", "Opponent 4:", 0));
        label_20->setText(QApplication::translate("settingsDialog", "Opponent 5:", 0));
        label_21->setText(QApplication::translate("settingsDialog", "Opponent 6:", 0));
        label_33->setText(QApplication::translate("settingsDialog", "Opponent 7:", 0));
        label_53->setText(QApplication::translate("settingsDialog", "Opponent 8:", 0));
        label_54->setText(QApplication::translate("settingsDialog", "Opponent 9:", 0));
        label_38->setText(QApplication::translate("settingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\"font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Note: Best avatar quality with image ratio like </span><span style=\" font-weight:600; font-style:italic;\">width=50, height=50.</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("settingsDialog", "Log Messages", 0));
        groupBox_logOnOff->setTitle(QApplication::translate("settingsDialog", "Enable/Disable Logging", 0));
        label_27->setText(QApplication::translate("settingsDialog", "Store log files for:", 0));
        spinBox_logStoreDuration->setSuffix(QApplication::translate("settingsDialog", " Day(s)", 0));
        label_39->setText(QApplication::translate("settingsDialog", "Write log after every: ", 0));
        comboBox_logInterval->clear();
        comboBox_logInterval->insertItems(0, QStringList()
         << QApplication::translate("settingsDialog", "action (high frequent disc access)", 0)
         << QApplication::translate("settingsDialog", "hand (medium disc access)", 0)
         << QApplication::translate("settingsDialog", "game (low disc access)", 0)
        );
        label_29->setText(QApplication::translate("settingsDialog", "Log File Directory: ", 0));
        label_44->setText(QApplication::translate("settingsDialog", "Factory Settings", 0));
        pushButton_resetSettings->setText(QApplication::translate("settingsDialog", "Reset all settings to default ...", 0));
        label_resetNote->setText(QApplication::translate("settingsDialog", "Note: You can not reset all settings to default during a running game!", 0));
        label_34->setText(QApplication::translate("settingsDialog", "Network Game Settings", 0));
        label_15->setText(QApplication::translate("settingsDialog", "Maximum number of players:", 0));
        label_13->setText(QApplication::translate("settingsDialog", "Start Cash:", 0));
        spinBox_netStartCash->setPrefix(QApplication::translate("settingsDialog", "$", 0));
        label_35->setText(QApplication::translate("settingsDialog", "First small blind:", 0));
        spinBox_netFirstSmallBlind->setPrefix(QApplication::translate("settingsDialog", "$", 0));
        groupBox_8->setTitle(QApplication::translate("settingsDialog", "Raise blinds:", 0));
        radioButton_netRaiseBlindsAtHands->setText(QApplication::translate("settingsDialog", "Every:", 0));
        label_51->setText(QApplication::translate("settingsDialog", "hands", 0));
        radioButton_netRaiseBlindsAtMinutes->setText(QApplication::translate("settingsDialog", "Every:", 0));
        label_52->setText(QApplication::translate("settingsDialog", "minutes", 0));
        groupBox_9->setTitle(QApplication::translate("settingsDialog", "Raise mode:", 0));
        radioButton_netAlwaysDoubleBlinds->setText(QApplication::translate("settingsDialog", "Always double blinds", 0));
        radioButton_netManualBlindsOrder->setText(QApplication::translate("settingsDialog", "Manual blinds order:", 0));
        pushButton_netEditManualBlindsOrder->setText(QApplication::translate("settingsDialog", "Edit ...", 0));
        label_36->setText(QApplication::translate("settingsDialog", "Delay between hands:", 0));
        spinBox_netDelayBetweenHands->setSuffix(QApplication::translate("settingsDialog", " s", 0));
        label_40->setText(QApplication::translate("settingsDialog", "Timeout for player action:", 0));
        spinBox_netTimeOutPlayerAction->setSuffix(QApplication::translate("settingsDialog", " s", 0));
        groupBox_2->setTitle(QApplication::translate("settingsDialog", "Network Server Settings", 0));
        label_16->setText(QApplication::translate("settingsDialog", "Server Port:", 0));
        checkBox_useIpv6->setText(QApplication::translate("settingsDialog", "Use IPv6", 0));
        label_22->setText(QApplication::translate("settingsDialog", "<a href=\"http://en.wikipedia.org/wiki/Ipv6\">What is this?</a>", 0));
        checkBox_useSctp->setText(QApplication::translate("settingsDialog", "Use SCTP", 0));
        label_24->setText(QApplication::translate("settingsDialog", "<a href=\"http://en.wikipedia.org/wiki/Stream_Control_Transmission_Protocol\">What is this?</a>", 0));
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
