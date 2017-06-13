/********************************************************************************
** Form generated from reading UI file 'manualblindsorderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALBLINDSORDERDIALOG_H
#define UI_MANUALBLINDSORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_manualBlindsOrderDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QListWidget *listWidget_blinds;
    QPushButton *pushButton_delete;
    QSpacerItem *spacerItem;
    QSpinBox *spinBox_input;
    QPushButton *pushButton_add;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QRadioButton *radioButton_alwaysDoubleBlinds;
    QHBoxLayout *hboxLayout;
    QRadioButton *radioButton_alwaysRaiseAbout;
    QSpinBox *spinBox_alwaysRaiseValue;
    QRadioButton *radioButton_stayAtLastBlind;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *manualBlindsOrderDialog)
    {
        if (manualBlindsOrderDialog->objectName().isEmpty())
            manualBlindsOrderDialog->setObjectName(QStringLiteral("manualBlindsOrderDialog"));
        manualBlindsOrderDialog->resize(248, 362);
        gridLayout = new QGridLayout(manualBlindsOrderDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setHorizontalSpacing(4);
        listWidget_blinds = new QListWidget(manualBlindsOrderDialog);
        listWidget_blinds->setObjectName(QStringLiteral("listWidget_blinds"));

        gridLayout1->addWidget(listWidget_blinds, 0, 0, 2, 1);

        pushButton_delete = new QPushButton(manualBlindsOrderDialog);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        gridLayout1->addWidget(pushButton_delete, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 1, 1, 1, 1);

        spinBox_input = new QSpinBox(manualBlindsOrderDialog);
        spinBox_input->setObjectName(QStringLiteral("spinBox_input"));
        spinBox_input->setMinimum(1);
        spinBox_input->setMaximum(20000);
        spinBox_input->setValue(5);

        gridLayout1->addWidget(spinBox_input, 2, 0, 1, 1);

        pushButton_add = new QPushButton(manualBlindsOrderDialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout1->addWidget(pushButton_add, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        groupBox = new QGroupBox(manualBlindsOrderDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(-1, 2, -1, 2);
        radioButton_alwaysDoubleBlinds = new QRadioButton(groupBox);
        radioButton_alwaysDoubleBlinds->setObjectName(QStringLiteral("radioButton_alwaysDoubleBlinds"));
        radioButton_alwaysDoubleBlinds->setChecked(true);

        gridLayout2->addWidget(radioButton_alwaysDoubleBlinds, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        radioButton_alwaysRaiseAbout = new QRadioButton(groupBox);
        radioButton_alwaysRaiseAbout->setObjectName(QStringLiteral("radioButton_alwaysRaiseAbout"));

        hboxLayout->addWidget(radioButton_alwaysRaiseAbout);

        spinBox_alwaysRaiseValue = new QSpinBox(groupBox);
        spinBox_alwaysRaiseValue->setObjectName(QStringLiteral("spinBox_alwaysRaiseValue"));
        spinBox_alwaysRaiseValue->setMaximum(20000);
        spinBox_alwaysRaiseValue->setSingleStep(5);
        spinBox_alwaysRaiseValue->setValue(5);

        hboxLayout->addWidget(spinBox_alwaysRaiseValue);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);

        radioButton_stayAtLastBlind = new QRadioButton(groupBox);
        radioButton_stayAtLastBlind->setObjectName(QStringLiteral("radioButton_stayAtLastBlind"));

        gridLayout2->addWidget(radioButton_stayAtLastBlind, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(manualBlindsOrderDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        QWidget::setTabOrder(listWidget_blinds, pushButton_delete);
        QWidget::setTabOrder(pushButton_delete, spinBox_input);
        QWidget::setTabOrder(spinBox_input, pushButton_add);
        QWidget::setTabOrder(pushButton_add, radioButton_alwaysDoubleBlinds);
        QWidget::setTabOrder(radioButton_alwaysDoubleBlinds, radioButton_alwaysRaiseAbout);
        QWidget::setTabOrder(radioButton_alwaysRaiseAbout, spinBox_alwaysRaiseValue);
        QWidget::setTabOrder(spinBox_alwaysRaiseValue, radioButton_stayAtLastBlind);
        QWidget::setTabOrder(radioButton_stayAtLastBlind, buttonBox);

        retranslateUi(manualBlindsOrderDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), manualBlindsOrderDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), manualBlindsOrderDialog, SLOT(reject()));
        QObject::connect(radioButton_alwaysRaiseAbout, SIGNAL(toggled(bool)), spinBox_alwaysRaiseValue, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(manualBlindsOrderDialog);
    } // setupUi

    void retranslateUi(QDialog *manualBlindsOrderDialog)
    {
        manualBlindsOrderDialog->setWindowTitle(QApplication::translate("manualBlindsOrderDialog", "Manual Blinds Order", 0));
        pushButton_delete->setText(QApplication::translate("manualBlindsOrderDialog", "Delete", 0));
        spinBox_input->setPrefix(QApplication::translate("manualBlindsOrderDialog", "$", 0));
        pushButton_add->setText(QApplication::translate("manualBlindsOrderDialog", "Add", 0));
        groupBox->setTitle(QApplication::translate("manualBlindsOrderDialog", "Afterwards:", 0));
        radioButton_alwaysDoubleBlinds->setText(QApplication::translate("manualBlindsOrderDialog", "Always double blinds", 0));
        radioButton_alwaysRaiseAbout->setText(QApplication::translate("manualBlindsOrderDialog", "Always raise by:", 0));
        spinBox_alwaysRaiseValue->setPrefix(QApplication::translate("manualBlindsOrderDialog", "$", 0));
        radioButton_stayAtLastBlind->setText(QApplication::translate("manualBlindsOrderDialog", "Keep last blind", 0));
    } // retranslateUi

};

namespace Ui {
    class manualBlindsOrderDialog: public Ui_manualBlindsOrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALBLINDSORDERDIALOG_H
