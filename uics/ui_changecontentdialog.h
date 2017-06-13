/********************************************************************************
** Form generated from reading UI file 'changecontentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECONTENTDIALOG_H
#define UI_CHANGECONTENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_changeContentDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_Message;
    QHBoxLayout *horizontalLayout;
    QLabel *label_lineLabel;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *changeContentDialog)
    {
        if (changeContentDialog->objectName().isEmpty())
            changeContentDialog->setObjectName(QStringLiteral("changeContentDialog"));
        changeContentDialog->resize(209, 126);
        changeContentDialog->setMaximumSize(QSize(700, 300));
        gridLayout = new QGridLayout(changeContentDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_Message = new QLabel(changeContentDialog);
        label_Message->setObjectName(QStringLiteral("label_Message"));

        gridLayout->addWidget(label_Message, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_lineLabel = new QLabel(changeContentDialog);
        label_lineLabel->setObjectName(QStringLiteral("label_lineLabel"));

        horizontalLayout->addWidget(label_lineLabel);

        lineEdit = new QLineEdit(changeContentDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        checkBox = new QCheckBox(changeContentDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(changeContentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_lineLabel->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, checkBox);
        QWidget::setTabOrder(checkBox, buttonBox);

        retranslateUi(changeContentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), changeContentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), changeContentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(changeContentDialog);
    } // setupUi

    void retranslateUi(QDialog *changeContentDialog)
    {
        changeContentDialog->setWindowTitle(QApplication::translate("changeContentDialog", "Network Error", 0));
        label_lineLabel->setText(QApplication::translate("changeContentDialog", "Name:", 0));
        checkBox->setText(QApplication::translate("changeContentDialog", "Save in configuration", 0));
    } // retranslateUi

};

namespace Ui {
    class changeContentDialog: public Ui_changeContentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECONTENTDIALOG_H
