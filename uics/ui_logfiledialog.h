/********************************************************************************
** Form generated from reading UI file 'logfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFILEDIALOG_H
#define UI_LOGFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogFileDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTreeWidget *treeWidget_logFiles;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_37;
    QTextBrowser *textBrowser_logPreview;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_exportLogHtml;
    QPushButton *pushButton_exportLogTxt;
    QPushButton *pushButton_saveLogAs;
    QPushButton *pushButton_deleteLog;
    QHBoxLayout *horizontalLayout_animation;
    QLabel *label_animation;
    QPushButton *pushButton_analyseLogfile;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogFileDialog)
    {
        if (LogFileDialog->objectName().isEmpty())
            LogFileDialog->setObjectName(QStringLiteral("LogFileDialog"));
        LogFileDialog->resize(618, 392);
        gridLayout = new QGridLayout(LogFileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LogFileDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(LogFileDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget_logFiles = new QTreeWidget(LogFileDialog);
        treeWidget_logFiles->setObjectName(QStringLiteral("treeWidget_logFiles"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget_logFiles->sizePolicy().hasHeightForWidth());
        treeWidget_logFiles->setSizePolicy(sizePolicy1);
        treeWidget_logFiles->setMaximumSize(QSize(200, 16777215));
        treeWidget_logFiles->setAlternatingRowColors(true);
        treeWidget_logFiles->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget_logFiles->setIndentation(5);
        treeWidget_logFiles->setRootIsDecorated(false);
        treeWidget_logFiles->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(treeWidget_logFiles);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_37 = new QLabel(LogFileDialog);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_4->addWidget(label_37);

        textBrowser_logPreview = new QTextBrowser(LogFileDialog);
        textBrowser_logPreview->setObjectName(QStringLiteral("textBrowser_logPreview"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser_logPreview->sizePolicy().hasHeightForWidth());
        textBrowser_logPreview->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(textBrowser_logPreview);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_exportLogHtml = new QPushButton(LogFileDialog);
        pushButton_exportLogHtml->setObjectName(QStringLiteral("pushButton_exportLogHtml"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gfx/text-html.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_exportLogHtml->setIcon(icon);

        horizontalLayout_9->addWidget(pushButton_exportLogHtml);

        pushButton_exportLogTxt = new QPushButton(LogFileDialog);
        pushButton_exportLogTxt->setObjectName(QStringLiteral("pushButton_exportLogTxt"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gfx/text-plain.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_exportLogTxt->setIcon(icon1);

        horizontalLayout_9->addWidget(pushButton_exportLogTxt);

        pushButton_saveLogAs = new QPushButton(LogFileDialog);
        pushButton_saveLogAs->setObjectName(QStringLiteral("pushButton_saveLogAs"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gfx/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_saveLogAs->setIcon(icon2);

        horizontalLayout_9->addWidget(pushButton_saveLogAs);

        pushButton_deleteLog = new QPushButton(LogFileDialog);
        pushButton_deleteLog->setObjectName(QStringLiteral("pushButton_deleteLog"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gfx/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteLog->setIcon(icon3);

        horizontalLayout_9->addWidget(pushButton_deleteLog);


        gridLayout->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout_animation = new QHBoxLayout();
        horizontalLayout_animation->setObjectName(QStringLiteral("horizontalLayout_animation"));
        label_animation = new QLabel(LogFileDialog);
        label_animation->setObjectName(QStringLiteral("label_animation"));

        horizontalLayout_animation->addWidget(label_animation);

        pushButton_analyseLogfile = new QPushButton(LogFileDialog);
        pushButton_analyseLogfile->setObjectName(QStringLiteral("pushButton_analyseLogfile"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_analyseLogfile->sizePolicy().hasHeightForWidth());
        pushButton_analyseLogfile->setSizePolicy(sizePolicy3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gfx/view-statistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_analyseLogfile->setIcon(icon4);
        pushButton_analyseLogfile->setIconSize(QSize(32, 32));

        horizontalLayout_animation->addWidget(pushButton_analyseLogfile);


        gridLayout->addLayout(horizontalLayout_animation, 2, 0, 1, 1);

        line = new QFrame(LogFileDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LogFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(LogFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogFileDialog);
    } // setupUi

    void retranslateUi(QDialog *LogFileDialog)
    {
        LogFileDialog->setWindowTitle(QApplication::translate("LogFileDialog", "Dialog", 0));
        label->setText(QApplication::translate("LogFileDialog", "Game:", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_logFiles->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("LogFileDialog", "Log File", 0));
        label_37->setText(QApplication::translate("LogFileDialog", "Preview:", 0));
        pushButton_exportLogHtml->setText(QApplication::translate("LogFileDialog", "Export as HTML", 0));
        pushButton_exportLogTxt->setText(QApplication::translate("LogFileDialog", "Export as txt", 0));
        pushButton_saveLogAs->setText(QApplication::translate("LogFileDialog", "Save as ...", 0));
        pushButton_deleteLog->setText(QApplication::translate("LogFileDialog", "Delete", 0));
        label_animation->setText(QString());
        pushButton_analyseLogfile->setText(QApplication::translate("LogFileDialog", "Analyse Logfile ...", 0));
    } // retranslateUi

};

namespace Ui {
    class LogFileDialog: public Ui_LogFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFILEDIALOG_H
