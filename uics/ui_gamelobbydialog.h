/********************************************************************************
** Form generated from reading UI file 'gamelobbydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMELOBBYDIALOG_H
#define UI_GAMELOBBYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameLobbyDialog
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_searchForPlayers;
    QComboBox *comboBox_gameListFilter;
    QHBoxLayout *hboxLayout;
    QLabel *label_connectedPlayersCounter;
    QLabel *label_runningGamesCounter;
    QLabel *label_openGamesCounter;
    QSpacerItem *horizontalSpacer;
    QLabel *label_rankings;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_pokerthDotNet;
    QTreeView *treeView_GameList;
    QHBoxLayout *hboxLayout1;
    QLabel *label_spectate;
    QSpacerItem *spacerItem;
    QPushButton *pushButton_CreateGame;
    QPushButton *pushButton_JoinGame;
    QGroupBox *groupBox_lobbyChat;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_ChatDisplay;
    QLineEdit *lineEdit_ChatInput;
    QComboBox *comboBox_nickListFilter;
    QTreeView *treeView_NickList;
    QGroupBox *groupBox_GameInfo;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget_playerSpectators;
    QWidget *tab_players;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget_connectedPlayers;
    QScrollArea *scrollArea_gameInfos;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout1;
    QLabel *label_gameType;
    QHBoxLayout *horizontalLayout;
    QLabel *label_typeIcon;
    QLabel *label_typeText;
    QLabel *label_gameDesc2;
    QLabel *label_StartCash;
    QLabel *label_gameDesc3;
    QLabel *label_SmallBlind;
    QLabel *label_gameDesc4;
    QLabel *label_blindsRaiseIntervall;
    QLabel *label_gameDesc5;
    QLabel *label_blindsRaiseMode;
    QLabel *label_gameDesc6;
    QLabel *label_blindsList;
    QLabel *label_gameDesc7;
    QLabel *label_GameTiming;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_fillUpWithComputerOpponents;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout2;
    QPushButton *pushButton_StartGame;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Kick;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QPushButton *pushButton_Leave;

    void setupUi(QDialog *gameLobbyDialog)
    {
        if (gameLobbyDialog->objectName().isEmpty())
            gameLobbyDialog->setObjectName(QStringLiteral("gameLobbyDialog"));
        gameLobbyDialog->resize(875, 570);
        gameLobbyDialog->setMinimumSize(QSize(875, 570));
        gridLayout_2 = new QGridLayout(gameLobbyDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(7);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        lineEdit_searchForPlayers = new QLineEdit(gameLobbyDialog);
        lineEdit_searchForPlayers->setObjectName(QStringLiteral("lineEdit_searchForPlayers"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_searchForPlayers->sizePolicy().hasHeightForWidth());
        lineEdit_searchForPlayers->setSizePolicy(sizePolicy);
        lineEdit_searchForPlayers->setMinimumSize(QSize(165, 0));
        lineEdit_searchForPlayers->setMaximumSize(QSize(165, 16777215));

        gridLayout_2->addWidget(lineEdit_searchForPlayers, 0, 0, 1, 1);

        comboBox_gameListFilter = new QComboBox(gameLobbyDialog);
        comboBox_gameListFilter->setObjectName(QStringLiteral("comboBox_gameListFilter"));

        gridLayout_2->addWidget(comboBox_gameListFilter, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_connectedPlayersCounter = new QLabel(gameLobbyDialog);
        label_connectedPlayersCounter->setObjectName(QStringLiteral("label_connectedPlayersCounter"));

        hboxLayout->addWidget(label_connectedPlayersCounter);

        label_runningGamesCounter = new QLabel(gameLobbyDialog);
        label_runningGamesCounter->setObjectName(QStringLiteral("label_runningGamesCounter"));

        hboxLayout->addWidget(label_runningGamesCounter);

        label_openGamesCounter = new QLabel(gameLobbyDialog);
        label_openGamesCounter->setObjectName(QStringLiteral("label_openGamesCounter"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_openGamesCounter->sizePolicy().hasHeightForWidth());
        label_openGamesCounter->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(label_openGamesCounter);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        label_rankings = new QLabel(gameLobbyDialog);
        label_rankings->setObjectName(QStringLiteral("label_rankings"));
        label_rankings->setOpenExternalLinks(true);

        hboxLayout->addWidget(label_rankings);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        label_pokerthDotNet = new QLabel(gameLobbyDialog);
        label_pokerthDotNet->setObjectName(QStringLiteral("label_pokerthDotNet"));
        label_pokerthDotNet->setOpenExternalLinks(true);

        hboxLayout->addWidget(label_pokerthDotNet);


        gridLayout_2->addLayout(hboxLayout, 5, 0, 1, 3);

        treeView_GameList = new QTreeView(gameLobbyDialog);
        treeView_GameList->setObjectName(QStringLiteral("treeView_GameList"));
        treeView_GameList->setMinimumSize(QSize(400, 0));
        treeView_GameList->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_GameList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeView_GameList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_GameList->setProperty("showDropIndicator", QVariant(false));
        treeView_GameList->setIndentation(5);
        treeView_GameList->setRootIsDecorated(false);
        treeView_GameList->setSortingEnabled(true);

        gridLayout_2->addWidget(treeView_GameList, 1, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_spectate = new QLabel(gameLobbyDialog);
        label_spectate->setObjectName(QStringLiteral("label_spectate"));
        label_spectate->setOpenExternalLinks(true);

        hboxLayout1->addWidget(label_spectate);

        spacerItem = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        pushButton_CreateGame = new QPushButton(gameLobbyDialog);
        pushButton_CreateGame->setObjectName(QStringLiteral("pushButton_CreateGame"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gfx/list_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_CreateGame->setIcon(icon);

        hboxLayout1->addWidget(pushButton_CreateGame);

        pushButton_JoinGame = new QPushButton(gameLobbyDialog);
        pushButton_JoinGame->setObjectName(QStringLiteral("pushButton_JoinGame"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gfx/go-next-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_JoinGame->setIcon(icon1);

        hboxLayout1->addWidget(pushButton_JoinGame);


        gridLayout_2->addLayout(hboxLayout1, 2, 1, 1, 1);

        groupBox_lobbyChat = new QGroupBox(gameLobbyDialog);
        groupBox_lobbyChat->setObjectName(QStringLiteral("groupBox_lobbyChat"));
        groupBox_lobbyChat->setMinimumSize(QSize(400, 223));
        groupBox_lobbyChat->setMaximumSize(QSize(16777215, 230));
        gridLayout = new QGridLayout(groupBox_lobbyChat);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(7, 2, 7, 7);
        textBrowser_ChatDisplay = new QTextBrowser(groupBox_lobbyChat);
        textBrowser_ChatDisplay->setObjectName(QStringLiteral("textBrowser_ChatDisplay"));
        textBrowser_ChatDisplay->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser_ChatDisplay, 0, 0, 1, 1);

        lineEdit_ChatInput = new QLineEdit(groupBox_lobbyChat);
        lineEdit_ChatInput->setObjectName(QStringLiteral("lineEdit_ChatInput"));

        gridLayout->addWidget(lineEdit_ChatInput, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_lobbyChat, 3, 1, 2, 1);

        comboBox_nickListFilter = new QComboBox(gameLobbyDialog);
        comboBox_nickListFilter->setObjectName(QStringLiteral("comboBox_nickListFilter"));

        gridLayout_2->addWidget(comboBox_nickListFilter, 4, 0, 1, 1);

        treeView_NickList = new QTreeView(gameLobbyDialog);
        treeView_NickList->setObjectName(QStringLiteral("treeView_NickList"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeView_NickList->sizePolicy().hasHeightForWidth());
        treeView_NickList->setSizePolicy(sizePolicy2);
        treeView_NickList->setMinimumSize(QSize(165, 0));
        treeView_NickList->setMaximumSize(QSize(165, 16777215));
        treeView_NickList->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_NickList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView_NickList->setRootIsDecorated(false);
        treeView_NickList->setSortingEnabled(true);

        gridLayout_2->addWidget(treeView_NickList, 1, 0, 3, 1);

        groupBox_GameInfo = new QGroupBox(gameLobbyDialog);
        groupBox_GameInfo->setObjectName(QStringLiteral("groupBox_GameInfo"));
        groupBox_GameInfo->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_GameInfo->sizePolicy().hasHeightForWidth());
        groupBox_GameInfo->setSizePolicy(sizePolicy3);
        groupBox_GameInfo->setMinimumSize(QSize(270, 0));
        groupBox_GameInfo->setMaximumSize(QSize(270, 16777215));
        gridLayout_4 = new QGridLayout(groupBox_GameInfo);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(1);
        gridLayout_4->setContentsMargins(6, 2, 6, 6);
        tabWidget_playerSpectators = new QTabWidget(groupBox_GameInfo);
        tabWidget_playerSpectators->setObjectName(QStringLiteral("tabWidget_playerSpectators"));
        tab_players = new QWidget();
        tab_players->setObjectName(QStringLiteral("tab_players"));
        gridLayout_3 = new QGridLayout(tab_players);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        treeWidget_connectedPlayers = new QTreeWidget(tab_players);
        treeWidget_connectedPlayers->setObjectName(QStringLiteral("treeWidget_connectedPlayers"));
        treeWidget_connectedPlayers->setMinimumSize(QSize(221, 100));
        treeWidget_connectedPlayers->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget_connectedPlayers->setMidLineWidth(1);
        treeWidget_connectedPlayers->setIconSize(QSize(25, 26));
        treeWidget_connectedPlayers->setIndentation(15);
        treeWidget_connectedPlayers->header()->setVisible(false);

        gridLayout_3->addWidget(treeWidget_connectedPlayers, 0, 0, 1, 1);

        tabWidget_playerSpectators->addTab(tab_players, QString());

        gridLayout_4->addWidget(tabWidget_playerSpectators, 0, 0, 1, 1);

        scrollArea_gameInfos = new QScrollArea(groupBox_GameInfo);
        scrollArea_gameInfos->setObjectName(QStringLiteral("scrollArea_gameInfos"));
        scrollArea_gameInfos->setMinimumSize(QSize(252, 174));
        scrollArea_gameInfos->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 250, 200));
        gridLayout1 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(2);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        label_gameType = new QLabel(scrollAreaWidgetContents);
        label_gameType->setObjectName(QStringLiteral("label_gameType"));
        label_gameType->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameType->setWordWrap(true);

        gridLayout1->addWidget(label_gameType, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_typeIcon = new QLabel(scrollAreaWidgetContents);
        label_typeIcon->setObjectName(QStringLiteral("label_typeIcon"));
        label_typeIcon->setMinimumSize(QSize(16, 16));
        label_typeIcon->setMaximumSize(QSize(16, 16777215));
        label_typeIcon->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout->addWidget(label_typeIcon);

        label_typeText = new QLabel(scrollAreaWidgetContents);
        label_typeText->setObjectName(QStringLiteral("label_typeText"));
        label_typeText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_typeText->setWordWrap(true);

        horizontalLayout->addWidget(label_typeText);


        gridLayout1->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_gameDesc2 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc2->setObjectName(QStringLiteral("label_gameDesc2"));
        label_gameDesc2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc2->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc2, 1, 0, 1, 1);

        label_StartCash = new QLabel(scrollAreaWidgetContents);
        label_StartCash->setObjectName(QStringLiteral("label_StartCash"));
        label_StartCash->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_StartCash->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_StartCash->setWordWrap(true);

        gridLayout1->addWidget(label_StartCash, 1, 1, 1, 1);

        label_gameDesc3 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc3->setObjectName(QStringLiteral("label_gameDesc3"));
        label_gameDesc3->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc3->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc3, 2, 0, 1, 1);

        label_SmallBlind = new QLabel(scrollAreaWidgetContents);
        label_SmallBlind->setObjectName(QStringLiteral("label_SmallBlind"));
        label_SmallBlind->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_SmallBlind->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_SmallBlind->setWordWrap(true);

        gridLayout1->addWidget(label_SmallBlind, 2, 1, 1, 1);

        label_gameDesc4 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc4->setObjectName(QStringLiteral("label_gameDesc4"));
        label_gameDesc4->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc4->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc4, 3, 0, 1, 1);

        label_blindsRaiseIntervall = new QLabel(scrollAreaWidgetContents);
        label_blindsRaiseIntervall->setObjectName(QStringLiteral("label_blindsRaiseIntervall"));
        label_blindsRaiseIntervall->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_blindsRaiseIntervall->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_blindsRaiseIntervall->setWordWrap(true);

        gridLayout1->addWidget(label_blindsRaiseIntervall, 3, 1, 1, 1);

        label_gameDesc5 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc5->setObjectName(QStringLiteral("label_gameDesc5"));
        label_gameDesc5->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc5->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc5, 4, 0, 1, 1);

        label_blindsRaiseMode = new QLabel(scrollAreaWidgetContents);
        label_blindsRaiseMode->setObjectName(QStringLiteral("label_blindsRaiseMode"));
        label_blindsRaiseMode->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_blindsRaiseMode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_blindsRaiseMode->setWordWrap(true);

        gridLayout1->addWidget(label_blindsRaiseMode, 4, 1, 1, 1);

        label_gameDesc6 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc6->setObjectName(QStringLiteral("label_gameDesc6"));
        label_gameDesc6->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc6->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc6, 5, 0, 1, 1);

        label_blindsList = new QLabel(scrollAreaWidgetContents);
        label_blindsList->setObjectName(QStringLiteral("label_blindsList"));
        label_blindsList->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_blindsList->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_blindsList->setWordWrap(true);

        gridLayout1->addWidget(label_blindsList, 5, 1, 1, 1);

        label_gameDesc7 = new QLabel(scrollAreaWidgetContents);
        label_gameDesc7->setObjectName(QStringLiteral("label_gameDesc7"));
        label_gameDesc7->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_gameDesc7->setWordWrap(true);

        gridLayout1->addWidget(label_gameDesc7, 6, 0, 1, 1);

        label_GameTiming = new QLabel(scrollAreaWidgetContents);
        label_GameTiming->setObjectName(QStringLiteral("label_GameTiming"));
        label_GameTiming->setStyleSheet(QStringLiteral("QLabel { color:rgb(0, 0, 255); }"));
        label_GameTiming->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_GameTiming->setWordWrap(true);

        gridLayout1->addWidget(label_GameTiming, 6, 1, 1, 1);

        scrollArea_gameInfos->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea_gameInfos, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_fillUpWithComputerOpponents = new QCheckBox(groupBox_GameInfo);
        checkBox_fillUpWithComputerOpponents->setObjectName(QStringLiteral("checkBox_fillUpWithComputerOpponents"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkBox_fillUpWithComputerOpponents->sizePolicy().hasHeightForWidth());
        checkBox_fillUpWithComputerOpponents->setSizePolicy(sizePolicy4);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gfx/swbuttonlocalgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_fillUpWithComputerOpponents->setIcon(icon2);

        horizontalLayout_2->addWidget(checkBox_fillUpWithComputerOpponents);

        verticalSpacer = new QSpacerItem(0, 21, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_2->addItem(verticalSpacer);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(3);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        hboxLayout2->setContentsMargins(-1, 0, -1, 0);
        pushButton_StartGame = new QPushButton(groupBox_GameInfo);
        pushButton_StartGame->setObjectName(QStringLiteral("pushButton_StartGame"));
        pushButton_StartGame->setEnabled(false);
        sizePolicy4.setHeightForWidth(pushButton_StartGame->sizePolicy().hasHeightForWidth());
        pushButton_StartGame->setSizePolicy(sizePolicy4);
        pushButton_StartGame->setMinimumSize(QSize(0, 24));
        pushButton_StartGame->setMaximumSize(QSize(16777215, 24));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gfx/dialog_ok_apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_StartGame->setIcon(icon3);

        hboxLayout2->addWidget(pushButton_StartGame);

        verticalSpacer_2 = new QSpacerItem(0, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hboxLayout2->addItem(verticalSpacer_2);

        pushButton_Kick = new QPushButton(groupBox_GameInfo);
        pushButton_Kick->setObjectName(QStringLiteral("pushButton_Kick"));
        sizePolicy4.setHeightForWidth(pushButton_Kick->sizePolicy().hasHeightForWidth());
        pushButton_Kick->setSizePolicy(sizePolicy4);
        pushButton_Kick->setMinimumSize(QSize(0, 24));
        pushButton_Kick->setMaximumSize(QSize(16777215, 24));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gfx/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Kick->setIcon(icon4);

        hboxLayout2->addWidget(pushButton_Kick);


        gridLayout_4->addLayout(hboxLayout2, 3, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem1 = new QSpacerItem(0, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hboxLayout3->addItem(spacerItem1);

        pushButton_Leave = new QPushButton(groupBox_GameInfo);
        pushButton_Leave->setObjectName(QStringLiteral("pushButton_Leave"));
        sizePolicy4.setHeightForWidth(pushButton_Leave->sizePolicy().hasHeightForWidth());
        pushButton_Leave->setSizePolicy(sizePolicy4);
        pushButton_Leave->setMinimumSize(QSize(0, 24));
        pushButton_Leave->setMaximumSize(QSize(16777215, 24));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/gfx/go-previous-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Leave->setIcon(icon5);

        hboxLayout3->addWidget(pushButton_Leave);


        gridLayout_4->addLayout(hboxLayout3, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_GameInfo, 0, 2, 5, 1);

        QWidget::setTabOrder(lineEdit_searchForPlayers, treeView_NickList);
        QWidget::setTabOrder(treeView_NickList, comboBox_nickListFilter);
        QWidget::setTabOrder(comboBox_nickListFilter, comboBox_gameListFilter);
        QWidget::setTabOrder(comboBox_gameListFilter, treeView_GameList);
        QWidget::setTabOrder(treeView_GameList, pushButton_CreateGame);
        QWidget::setTabOrder(pushButton_CreateGame, textBrowser_ChatDisplay);
        QWidget::setTabOrder(textBrowser_ChatDisplay, lineEdit_ChatInput);
        QWidget::setTabOrder(lineEdit_ChatInput, treeWidget_connectedPlayers);
        QWidget::setTabOrder(treeWidget_connectedPlayers, scrollArea_gameInfos);
        QWidget::setTabOrder(scrollArea_gameInfos, checkBox_fillUpWithComputerOpponents);
        QWidget::setTabOrder(checkBox_fillUpWithComputerOpponents, pushButton_StartGame);
        QWidget::setTabOrder(pushButton_StartGame, pushButton_Kick);
        QWidget::setTabOrder(pushButton_Kick, pushButton_Leave);

        retranslateUi(gameLobbyDialog);

        tabWidget_playerSpectators->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gameLobbyDialog);
    } // setupUi

    void retranslateUi(QDialog *gameLobbyDialog)
    {
        gameLobbyDialog->setWindowTitle(QApplication::translate("gameLobbyDialog", "TEAM POKER\302\256 LOBBY", 0));
        lineEdit_searchForPlayers->setText(QApplication::translate("gameLobbyDialog", "search for player ...", 0));
        comboBox_gameListFilter->clear();
        comboBox_gameListFilter->insertItems(0, QStringList()
         << QApplication::translate("gameLobbyDialog", "0 - No game list filter", 0)
         << QApplication::translate("gameLobbyDialog", "1 - Show open games", 0)
         << QApplication::translate("gameLobbyDialog", "2 - Show open & non-full games", 0)
         << QApplication::translate("gameLobbyDialog", "3 - Show open & non-full & non-private games", 0)
         << QApplication::translate("gameLobbyDialog", "4 - Show open & non-full & private games", 0)
         << QApplication::translate("gameLobbyDialog", "5 - Show open & non-full & ranking games", 0)
        );
        label_connectedPlayersCounter->setText(QString());
        label_runningGamesCounter->setText(QString());
        label_openGamesCounter->setText(QString());
        pushButton_CreateGame->setText(QApplication::translate("gameLobbyDialog", "&Create Game", 0));
        pushButton_JoinGame->setText(QApplication::translate("gameLobbyDialog", "&Join Game", 0));
        groupBox_lobbyChat->setTitle(QApplication::translate("gameLobbyDialog", "Lobby-Chat", 0));
        comboBox_nickListFilter->clear();
        comboBox_nickListFilter->insertItems(0, QStringList()
         << QApplication::translate("gameLobbyDialog", "Sort alphabetically", 0)
         << QApplication::translate("gameLobbyDialog", "Sort by country", 0)
         << QApplication::translate("gameLobbyDialog", "Display idle players", 0)
        );
        groupBox_GameInfo->setTitle(QApplication::translate("gameLobbyDialog", "Game Info", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_connectedPlayers->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("gameLobbyDialog", "Connected Players", 0));
        tabWidget_playerSpectators->setTabText(tabWidget_playerSpectators->indexOf(tab_players), QApplication::translate("gameLobbyDialog", "Players", 0));
        label_gameType->setText(QApplication::translate("gameLobbyDialog", "Game type:", 0));
        label_typeText->setText(QString());
        label_gameDesc2->setText(QApplication::translate("gameLobbyDialog", "Start Cash:", 0));
        label_gameDesc3->setText(QApplication::translate("gameLobbyDialog", "First small blind:", 0));
        label_gameDesc4->setText(QApplication::translate("gameLobbyDialog", "Blinds raise interval:", 0));
        label_gameDesc5->setText(QApplication::translate("gameLobbyDialog", "Blinds raise mode:", 0));
        label_blindsRaiseMode->setText(QString());
        label_gameDesc6->setText(QApplication::translate("gameLobbyDialog", "Manual blinds list:", 0));
        label_blindsList->setText(QString());
        label_gameDesc7->setText(QApplication::translate("gameLobbyDialog", "Timing:", 0));
        checkBox_fillUpWithComputerOpponents->setText(QApplication::translate("gameLobbyDialog", "Fill up with computer opponents", 0));
        pushButton_StartGame->setText(QApplication::translate("gameLobbyDialog", "&Start Game", 0));
        pushButton_Kick->setText(QApplication::translate("gameLobbyDialog", "&Kick Player", 0));
        pushButton_Leave->setText(QApplication::translate("gameLobbyDialog", "&Leave Game", 0));
    } // retranslateUi

};

namespace Ui {
    class gameLobbyDialog: public Ui_gameLobbyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMELOBBYDIALOG_H
