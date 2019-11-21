/********************************************************************************
** Form generated from reading UI file 'phasecreatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHASECREATORDIALOG_H
#define UI_PHASECREATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PhaseCreatorDialog
{
public:
    QLabel *TitleLabel;
    QLabel *PhaseNameLabel;
    QLabel *DurationLabel;
    QLabel *DisposeLabel;
    QLabel *ErrorLabel;
    QLabel *MaxItemsLabel;
    QLabel *CorrectionLabel;
    QLineEdit *PhaseNameLineEdit;
    QSpinBox *DurationSpinBox;
    QSpinBox *DisposeSpinBox;
    QSpinBox *CorrectionSpinBox;
    QSpinBox *MaxQueueSpinBox;
    QSpinBox *ErrorRangeSpinBox;
    QPushButton *AddButton;

    void setupUi(QDialog *PhaseCreatorDialog)
    {
        if (PhaseCreatorDialog->objectName().isEmpty())
            PhaseCreatorDialog->setObjectName(QString::fromUtf8("PhaseCreatorDialog"));
        PhaseCreatorDialog->resize(740, 542);
        PhaseCreatorDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        TitleLabel = new QLabel(PhaseCreatorDialog);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(250, 20, 231, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        TitleLabel->setFont(font);
        PhaseNameLabel = new QLabel(PhaseCreatorDialog);
        PhaseNameLabel->setObjectName(QString::fromUtf8("PhaseNameLabel"));
        PhaseNameLabel->setGeometry(QRect(40, 140, 181, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        PhaseNameLabel->setFont(font1);
        DurationLabel = new QLabel(PhaseCreatorDialog);
        DurationLabel->setObjectName(QString::fromUtf8("DurationLabel"));
        DurationLabel->setGeometry(QRect(30, 260, 211, 61));
        DurationLabel->setFont(font1);
        DisposeLabel = new QLabel(PhaseCreatorDialog);
        DisposeLabel->setObjectName(QString::fromUtf8("DisposeLabel"));
        DisposeLabel->setGeometry(QRect(40, 390, 211, 61));
        DisposeLabel->setFont(font1);
        ErrorLabel = new QLabel(PhaseCreatorDialog);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(490, 130, 211, 61));
        ErrorLabel->setFont(font1);
        MaxItemsLabel = new QLabel(PhaseCreatorDialog);
        MaxItemsLabel->setObjectName(QString::fromUtf8("MaxItemsLabel"));
        MaxItemsLabel->setGeometry(QRect(440, 260, 281, 61));
        MaxItemsLabel->setFont(font1);
        CorrectionLabel = new QLabel(PhaseCreatorDialog);
        CorrectionLabel->setObjectName(QString::fromUtf8("CorrectionLabel"));
        CorrectionLabel->setGeometry(QRect(460, 380, 231, 61));
        CorrectionLabel->setFont(font1);
        PhaseNameLineEdit = new QLineEdit(PhaseCreatorDialog);
        PhaseNameLineEdit->setObjectName(QString::fromUtf8("PhaseNameLineEdit"));
        PhaseNameLineEdit->setGeometry(QRect(12, 200, 241, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        PhaseNameLineEdit->setFont(font2);
        PhaseNameLineEdit->setAlignment(Qt::AlignCenter);
        DurationSpinBox = new QSpinBox(PhaseCreatorDialog);
        DurationSpinBox->setObjectName(QString::fromUtf8("DurationSpinBox"));
        DurationSpinBox->setGeometry(QRect(80, 320, 101, 41));
        DisposeSpinBox = new QSpinBox(PhaseCreatorDialog);
        DisposeSpinBox->setObjectName(QString::fromUtf8("DisposeSpinBox"));
        DisposeSpinBox->setGeometry(QRect(80, 460, 101, 41));
        CorrectionSpinBox = new QSpinBox(PhaseCreatorDialog);
        CorrectionSpinBox->setObjectName(QString::fromUtf8("CorrectionSpinBox"));
        CorrectionSpinBox->setGeometry(QRect(530, 460, 101, 41));
        MaxQueueSpinBox = new QSpinBox(PhaseCreatorDialog);
        MaxQueueSpinBox->setObjectName(QString::fromUtf8("MaxQueueSpinBox"));
        MaxQueueSpinBox->setGeometry(QRect(530, 320, 101, 41));
        ErrorRangeSpinBox = new QSpinBox(PhaseCreatorDialog);
        ErrorRangeSpinBox->setObjectName(QString::fromUtf8("ErrorRangeSpinBox"));
        ErrorRangeSpinBox->setGeometry(QRect(530, 200, 101, 41));
        AddButton = new QPushButton(PhaseCreatorDialog);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(270, 460, 171, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        AddButton->setFont(font3);

        retranslateUi(PhaseCreatorDialog);

        QMetaObject::connectSlotsByName(PhaseCreatorDialog);
    } // setupUi

    void retranslateUi(QDialog *PhaseCreatorDialog)
    {
        PhaseCreatorDialog->setWindowTitle(QCoreApplication::translate("PhaseCreatorDialog", "Dialog", nullptr));
        TitleLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Create Phase", nullptr));
        PhaseNameLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Phase Name", nullptr));
        DurationLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Duration Time", nullptr));
        DisposeLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Dispose Time", nullptr));
        ErrorLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Error Range", nullptr));
        MaxItemsLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Max Items in Queue", nullptr));
        CorrectionLabel->setText(QCoreApplication::translate("PhaseCreatorDialog", "Correction Time", nullptr));
        PhaseNameLineEdit->setText(QString());
        AddButton->setText(QCoreApplication::translate("PhaseCreatorDialog", "Add Phase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhaseCreatorDialog: public Ui_PhaseCreatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHASECREATORDIALOG_H
