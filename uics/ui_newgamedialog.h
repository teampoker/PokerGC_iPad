/********************************************************************************
** Form generated from reading UI file 'newgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEDIALOG_H
#define UI_NEWGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newGameDialog
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
    QLabel *label_5;
    QSpinBox *spinBox_gameSpeed;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *newGameDialog)
    {
        if (newGameDialog->objectName().isEmpty())
            newGameDialog->setObjectName(QStringLiteral("newGameDialog"));
        newGameDialog->resize(239, 271);
        gridLayout = new QGridLayout(newGameDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(newGameDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        spinBox_quantityPlayers = new QSpinBox(groupBox);
        spinBox_quantityPlayers->setObjectName(QStringLiteral("spinBox_quantityPlayers"));
        spinBox_quantityPlayers->setMinimum(2);
        spinBox_quantityPlayers->setMaximum(10);
        spinBox_quantityPlayers->setValue(10);

        gridLayout1->addWidget(spinBox_quantityPlayers, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        spinBox_startCash = new QSpinBox(groupBox);
        spinBox_startCash->setObjectName(QStringLiteral("spinBox_startCash"));
        spinBox_startCash->setMinimum(1000);
        spinBox_startCash->setMaximum(1000000);
        spinBox_startCash->setSingleStep(50);
        spinBox_startCash->setValue(2000);

        gridLayout1->addWidget(spinBox_startCash, 1, 1, 1, 2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        radioButton_useSavedBlindsSettings = new QRadioButton(groupBox_2);
        radioButton_useSavedBlindsSettings->setObjectName(QStringLiteral("radioButton_useSavedBlindsSettings"));
        radioButton_useSavedBlindsSettings->setChecked(true);

        gridLayout2->addWidget(radioButton_useSavedBlindsSettings, 0, 0, 1, 1);

        radioButton_changeBlindsSettings = new QRadioButton(groupBox_2);
        radioButton_changeBlindsSettings->setObjectName(QStringLiteral("radioButton_changeBlindsSettings"));

        gridLayout2->addWidget(radioButton_changeBlindsSettings, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox_2, 2, 0, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout1->addWidget(label_5, 3, 0, 1, 2);

        spinBox_gameSpeed = new QSpinBox(groupBox);
        spinBox_gameSpeed->setObjectName(QStringLiteral("spinBox_gameSpeed"));
        spinBox_gameSpeed->setMinimum(1);
        spinBox_gameSpeed->setMaximum(11);
        spinBox_gameSpeed->setValue(4);

        gridLayout1->addWidget(spinBox_gameSpeed, 3, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(newGameDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox_quantityPlayers);
        label_2->setBuddy(spinBox_startCash);
        label_5->setBuddy(spinBox_gameSpeed);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinBox_quantityPlayers, spinBox_startCash);
        QWidget::setTabOrder(spinBox_startCash, radioButton_useSavedBlindsSettings);
        QWidget::setTabOrder(radioButton_useSavedBlindsSettings, radioButton_changeBlindsSettings);
        QWidget::setTabOrder(radioButton_changeBlindsSettings, spinBox_gameSpeed);
        QWidget::setTabOrder(spinBox_gameSpeed, buttonBox);

        retranslateUi(newGameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newGameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newGameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(newGameDialog);
    } // setupUi

    void retranslateUi(QDialog *newGameDialog)
    {
        newGameDialog->setWindowTitle(QApplication::translate("newGameDialog", "Start Local Game", 0));
        groupBox->setTitle(QApplication::translate("newGameDialog", "Local Game Settings", 0));
        label->setText(QApplication::translate("newGameDialog", "Number of players:", 0));
        label_2->setText(QApplication::translate("newGameDialog", "Start Cash:", 0));
        spinBox_startCash->setPrefix(QApplication::translate("newGameDialog", "$", 0));
        groupBox_2->setTitle(QApplication::translate("newGameDialog", "Blinds", 0));
        radioButton_useSavedBlindsSettings->setText(QApplication::translate("newGameDialog", "Use saved blinds settings", 0));
        radioButton_changeBlindsSettings->setText(QApplication::translate("newGameDialog", "Change blinds settings ...", 0));
        label_5->setText(QApplication::translate("newGameDialog", "Game Speed:", 0));
    } // retranslateUi

};

namespace Ui {
    class newGameDialog: public Ui_newGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEDIALOG_H
