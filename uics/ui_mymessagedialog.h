/********************************************************************************
** Form generated from reading UI file 'mymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEDIALOG_H
#define UI_MYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_myMessageDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_icon;
    QGridLayout *gridLayout1;
    QLabel *label;
    QSpacerItem *spacerItem;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *myMessageDialog)
    {
        if (myMessageDialog->objectName().isEmpty())
            myMessageDialog->setObjectName(QStringLiteral("myMessageDialog"));
        myMessageDialog->resize(275, 118);
        myMessageDialog->setMaximumSize(QSize(800, 600));
        gridLayout = new QGridLayout(myMessageDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 9, -1, -1);
        label_icon = new QLabel(myMessageDialog);
        label_icon->setObjectName(QStringLiteral("label_icon"));
        label_icon->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(label_icon, 0, 0, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label = new QLabel(myMessageDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(199, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout1->addItem(spacerItem, 1, 0, 1, 1);

        checkBox = new QCheckBox(myMessageDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout1->addWidget(checkBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(myMessageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        gridLayout1->addWidget(buttonBox, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 1, 2, 1);

        spacerItem1 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        retranslateUi(myMessageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), myMessageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), myMessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(myMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *myMessageDialog)
    {
        myMessageDialog->setWindowTitle(QApplication::translate("myMessageDialog", "Dialog", 0));
        label->setText(QApplication::translate("myMessageDialog", "MessageText", 0));
        checkBox->setText(QApplication::translate("myMessageDialog", "Do not show this message again.", 0));
    } // retranslateUi

};

namespace Ui {
    class myMessageDialog: public Ui_myMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEDIALOG_H
