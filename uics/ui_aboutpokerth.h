/********************************************************************************
** Form generated from reading UI file 'aboutpokerth.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPOKERTH_H
#define UI_ABOUTPOKERTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutPokerth
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QLabel *label_pokerthVersion;
    QLabel *label_logo;
    QLabel *label_infotext;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    QTextBrowser *textBrowser_2;
    QWidget *tab_5;
    QGridLayout *gridLayout3;
    QTextBrowser *textBrowser_4;
    QWidget *tab_4;
    QGridLayout *gridLayout4;
    QTextBrowser *textBrowser_3;
    QWidget *tab_3;
    QGridLayout *gridLayout5;
    QTextBrowser *textBrowser_licence;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_thirdPartyLicenceText;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;

    void setupUi(QDialog *aboutPokerth)
    {
        if (aboutPokerth->objectName().isEmpty())
            aboutPokerth->setObjectName(QStringLiteral("aboutPokerth"));
        aboutPokerth->resize(560, 415);
        gridLayout = new QGridLayout(aboutPokerth);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(aboutPokerth);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_pokerthVersion = new QLabel(tab);
        label_pokerthVersion->setObjectName(QStringLiteral("label_pokerthVersion"));

        gridLayout1->addWidget(label_pokerthVersion, 0, 0, 1, 1);

        label_logo = new QLabel(tab);
        label_logo->setObjectName(QStringLiteral("label_logo"));

        gridLayout1->addWidget(label_logo, 0, 1, 2, 1);

        label_infotext = new QLabel(tab);
        label_infotext->setObjectName(QStringLiteral("label_infotext"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_infotext->sizePolicy().hasHeightForWidth());
        label_infotext->setSizePolicy(sizePolicy);
        label_infotext->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_infotext->setOpenExternalLinks(true);

        gridLayout1->addWidget(label_infotext, 1, 0, 2, 1);

        spacerItem = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 1, 2, 1);

        spacerItem1 = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 3, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setOpenExternalLinks(true);

        gridLayout1->addWidget(label_3, 4, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout2 = new QGridLayout(tab_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setLineWrapMode(QTextEdit::NoWrap);
        textBrowser_2->setOpenExternalLinks(true);

        gridLayout2->addWidget(textBrowser_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout3 = new QGridLayout(tab_5);
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setOpenExternalLinks(true);

        gridLayout3->addWidget(textBrowser_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout4 = new QGridLayout(tab_4);
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        textBrowser_3 = new QTextBrowser(tab_4);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setAcceptRichText(false);
        textBrowser_3->setOpenExternalLinks(false);
        textBrowser_3->setOpenLinks(false);

        gridLayout4->addWidget(textBrowser_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout5 = new QGridLayout(tab_3);
        gridLayout5->setSpacing(6);
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        gridLayout5->setContentsMargins(9, 9, 9, 9);
        textBrowser_licence = new QTextBrowser(tab_3);
        textBrowser_licence->setObjectName(QStringLiteral("textBrowser_licence"));
        textBrowser_licence->setAutoFillBackground(true);
        textBrowser_licence->setOpenLinks(false);

        gridLayout5->addWidget(textBrowser_licence, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout = new QVBoxLayout(tab_6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser_thirdPartyLicenceText = new QTextBrowser(tab_6);
        textBrowser_thirdPartyLicenceText->setObjectName(QStringLiteral("textBrowser_thirdPartyLicenceText"));

        verticalLayout->addWidget(textBrowser_thirdPartyLicenceText);

        tabWidget->addTab(tab_6, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        okButton = new QPushButton(aboutPokerth);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(aboutPokerth);
        QObject::connect(okButton, SIGNAL(clicked()), aboutPokerth, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutPokerth);
    } // setupUi

    void retranslateUi(QDialog *aboutPokerth)
    {
        label_infotext->setText(QString());
        label_3->setText(QApplication::translate("aboutPokerth", "<a href=\"http://www.pokerth.net\" target=\"_blank\">http://www.pokerth.net<a>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("aboutPokerth", "About", 0));
        textBrowser_2->setHtml(QApplication::translate("aboutPokerth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Nimbus Sans L';\"><br /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("aboutPokerth", "Project", 0));
        textBrowser_4->setHtml(QApplication::translate("aboutPokerth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Nimbus Sans L'; font-size:8pt;\">translator name - mail address</span></p></td></tr></table></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("aboutPokerth", "Translation", 0));
        textBrowser_3->setHtml(QApplication::translate("aboutPokerth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Nimbus Sans L';\"><br /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("aboutPokerth", "Thanks to", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("aboutPokerth", "License", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("aboutPokerth", "Third party libs", 0));
        okButton->setText(QApplication::translate("aboutPokerth", "Close", 0));
        Q_UNUSED(aboutPokerth);
    } // retranslateUi

};

namespace Ui {
    class aboutPokerth: public Ui_aboutPokerth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPOKERTH_H
