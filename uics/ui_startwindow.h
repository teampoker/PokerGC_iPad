/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startWindow
{
public:
    QAction *actionStart_Local_Game;
    QAction *actionInternet_Game;
    QAction *actionAbout_PokerTH;
    QAction *actionConfigure_PokerTH;
    QAction *actionQuit;
    QAction *actionCreate_Network_Game;
    QAction *actionJoin_Network_Game;
    QAction *actionLogs;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout;
    QPushButton *pushButtonStart_Local_Game;
    QPushButton *pushButtonInternet_Game;
    QPushButton *pushButton_Logs;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QMenuBar *menubar;
    QMenu *menuPokerTH;
    QMenu *menuNetwork_Game;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startWindow)
    {
        if (startWindow->objectName().isEmpty())
            startWindow->setObjectName(QStringLiteral("startWindow"));
        startWindow->resize(450, 350);
        startWindow->setMinimumSize(QSize(450, 350));
        startWindow->setMaximumSize(QSize(450, 350));
        actionStart_Local_Game = new QAction(startWindow);
        actionStart_Local_Game->setObjectName(QStringLiteral("actionStart_Local_Game"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gfx/swbuttonlocalgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Local_Game->setIcon(icon);
        actionInternet_Game = new QAction(startWindow);
        actionInternet_Game->setObjectName(QStringLiteral("actionInternet_Game"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gfx/swbuttoninternetgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInternet_Game->setIcon(icon1);
        actionAbout_PokerTH = new QAction(startWindow);
        actionAbout_PokerTH->setObjectName(QStringLiteral("actionAbout_PokerTH"));
        actionConfigure_PokerTH = new QAction(startWindow);
        actionConfigure_PokerTH->setObjectName(QStringLiteral("actionConfigure_PokerTH"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gfx/systemsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure_PokerTH->setIcon(icon2);
        actionQuit = new QAction(startWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gfx/application_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        actionCreate_Network_Game = new QAction(startWindow);
        actionCreate_Network_Game->setObjectName(QStringLiteral("actionCreate_Network_Game"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gfx/swbuttoncreatenetworkgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_Network_Game->setIcon(icon4);
        actionJoin_Network_Game = new QAction(startWindow);
        actionJoin_Network_Game->setObjectName(QStringLiteral("actionJoin_Network_Game"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/gfx/swbuttonjoinnetworkgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJoin_Network_Game->setIcon(icon5);
        actionLogs = new QAction(startWindow);
        actionLogs->setObjectName(QStringLiteral("actionLogs"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/gfx/registered.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogs->setIcon(icon6);
        centralwidget = new QWidget(startWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spacerItem = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem1, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonStart_Local_Game = new QPushButton(centralwidget);
        pushButtonStart_Local_Game->setObjectName(QStringLiteral("pushButtonStart_Local_Game"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonStart_Local_Game->sizePolicy().hasHeightForWidth());
        pushButtonStart_Local_Game->setSizePolicy(sizePolicy);
        pushButtonStart_Local_Game->setFocusPolicy(Qt::NoFocus);
        pushButtonStart_Local_Game->setIcon(icon);
        pushButtonStart_Local_Game->setIconSize(QSize(37, 32));

        gridLayout->addWidget(pushButtonStart_Local_Game, 0, 0, 1, 1);

        pushButtonInternet_Game = new QPushButton(centralwidget);
        pushButtonInternet_Game->setObjectName(QStringLiteral("pushButtonInternet_Game"));
        sizePolicy.setHeightForWidth(pushButtonInternet_Game->sizePolicy().hasHeightForWidth());
        pushButtonInternet_Game->setSizePolicy(sizePolicy);
        pushButtonInternet_Game->setFocusPolicy(Qt::NoFocus);
        pushButtonInternet_Game->setIcon(icon1);
        pushButtonInternet_Game->setIconSize(QSize(37, 32));

        gridLayout->addWidget(pushButtonInternet_Game, 1, 0, 1, 1);

        pushButton_Logs = new QPushButton(centralwidget);
        pushButton_Logs->setObjectName(QStringLiteral("pushButton_Logs"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Logs->sizePolicy().hasHeightForWidth());
        pushButton_Logs->setSizePolicy(sizePolicy1);
        pushButton_Logs->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/gfx/text-x-log.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Logs->setIcon(icon7);
        pushButton_Logs->setIconSize(QSize(37, 32));

        gridLayout->addWidget(pushButton_Logs, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem2, 1, 2, 1, 1);

        spacerItem3 = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem3, 2, 1, 1, 1);

        startWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(startWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 20));
        menuPokerTH = new QMenu(menubar);
        menuPokerTH->setObjectName(QStringLiteral("menuPokerTH"));
        menuNetwork_Game = new QMenu(menuPokerTH);
        menuNetwork_Game->setObjectName(QStringLiteral("menuNetwork_Game"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        startWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(startWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        startWindow->setStatusBar(statusbar);

        menubar->addAction(menuPokerTH->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuPokerTH->addAction(actionQuit);
        menuNetwork_Game->addAction(actionCreate_Network_Game);
        menuNetwork_Game->addAction(actionJoin_Network_Game);
        menuSettings->addAction(actionConfigure_PokerTH);

        retranslateUi(startWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), startWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(startWindow);
    } // setupUi

    void retranslateUi(QMainWindow *startWindow)
    {
        startWindow->setWindowTitle(QApplication::translate("startWindow", "TEAMPOKER\302\256", 0));
        actionStart_Local_Game->setText(QApplication::translate("startWindow", "Start Local Game ...", 0));
        actionStart_Local_Game->setShortcut(QApplication::translate("startWindow", "Ctrl+N", 0));
        actionInternet_Game->setText(QApplication::translate("startWindow", "Internet Game ...", 0));
        actionInternet_Game->setShortcut(QApplication::translate("startWindow", "Ctrl+I", 0));
        actionAbout_PokerTH->setText(QApplication::translate("startWindow", "About TEAM POKER\302\256", 0));
        actionConfigure_PokerTH->setText(QApplication::translate("startWindow", "Configure TEAM POKER\302\256 ...", 0));
        actionQuit->setText(QApplication::translate("startWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("startWindow", "Ctrl+Q", 0));
        actionCreate_Network_Game->setText(QApplication::translate("startWindow", "Create Network Game ...", 0));
        actionJoin_Network_Game->setText(QApplication::translate("startWindow", "Join Network Game ...", 0));
        actionLogs->setText(QApplication::translate("startWindow", "Logs ...", 0));
        pushButtonStart_Local_Game->setText(QApplication::translate("startWindow", "&BEAT THE BOTS\342\204\242", 0));
        pushButtonInternet_Game->setText(QApplication::translate("startWindow", "&TEAM POKER\302\256 ROOM", 0));
        pushButton_Logs->setText(QApplication::translate("startWindow", "&Logs", 0));
        menuPokerTH->setTitle(QApplication::translate("startWindow", "&TEAM POKER\302\256", 0));
        menuNetwork_Game->setTitle(QApplication::translate("startWindow", "Network Game", 0));
        menuSettings->setTitle(QApplication::translate("startWindow", "&Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class startWindow: public Ui_startWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
