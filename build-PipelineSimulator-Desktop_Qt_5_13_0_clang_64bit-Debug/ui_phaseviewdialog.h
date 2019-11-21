/********************************************************************************
** Form generated from reading UI file 'phaseviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHASEVIEWDIALOG_H
#define UI_PHASEVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PhaseViewDialog
{
public:
    QLabel *PhaseIDLabel;
    QLabel *PhaseNameLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *QueueSizeLabel;
    QLabel *ErrorLabel;
    QLabel *ProducedLabel;
    QLabel *DisposedLabel;
    QLabel *StateLabel;
    QTextEdit *BinnacleTextEdit;
    QPushButton *PauseButton;

    void setupUi(QDialog *PhaseViewDialog)
    {
        if (PhaseViewDialog->objectName().isEmpty())
            PhaseViewDialog->setObjectName(QString::fromUtf8("PhaseViewDialog"));
        PhaseViewDialog->resize(854, 530);
        PhaseViewDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        PhaseIDLabel = new QLabel(PhaseViewDialog);
        PhaseIDLabel->setObjectName(QString::fromUtf8("PhaseIDLabel"));
        PhaseIDLabel->setGeometry(QRect(310, 10, 231, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        PhaseIDLabel->setFont(font);
        PhaseIDLabel->setAlignment(Qt::AlignCenter);
        PhaseNameLabel = new QLabel(PhaseViewDialog);
        PhaseNameLabel->setObjectName(QString::fromUtf8("PhaseNameLabel"));
        PhaseNameLabel->setGeometry(QRect(170, 60, 511, 71));
        PhaseNameLabel->setFont(font);
        PhaseNameLabel->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(PhaseViewDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 141, 71));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(PhaseViewDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 160, 111, 71));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(PhaseViewDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 160, 131, 71));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(PhaseViewDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 160, 131, 71));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(PhaseViewDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 160, 131, 71));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        QueueSizeLabel = new QLabel(PhaseViewDialog);
        QueueSizeLabel->setObjectName(QString::fromUtf8("QueueSizeLabel"));
        QueueSizeLabel->setGeometry(QRect(30, 220, 111, 71));
        QueueSizeLabel->setFont(font);
        QueueSizeLabel->setAlignment(Qt::AlignCenter);
        ErrorLabel = new QLabel(PhaseViewDialog);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(200, 220, 111, 71));
        ErrorLabel->setFont(font);
        ErrorLabel->setAlignment(Qt::AlignCenter);
        ProducedLabel = new QLabel(PhaseViewDialog);
        ProducedLabel->setObjectName(QString::fromUtf8("ProducedLabel"));
        ProducedLabel->setGeometry(QRect(370, 220, 111, 71));
        ProducedLabel->setFont(font);
        ProducedLabel->setAlignment(Qt::AlignCenter);
        DisposedLabel = new QLabel(PhaseViewDialog);
        DisposedLabel->setObjectName(QString::fromUtf8("DisposedLabel"));
        DisposedLabel->setGeometry(QRect(550, 220, 111, 71));
        DisposedLabel->setFont(font);
        DisposedLabel->setAlignment(Qt::AlignCenter);
        StateLabel = new QLabel(PhaseViewDialog);
        StateLabel->setObjectName(QString::fromUtf8("StateLabel"));
        StateLabel->setGeometry(QRect(690, 220, 161, 71));
        StateLabel->setFont(font);
        StateLabel->setAlignment(Qt::AlignCenter);
        BinnacleTextEdit = new QTextEdit(PhaseViewDialog);
        BinnacleTextEdit->setObjectName(QString::fromUtf8("BinnacleTextEdit"));
        BinnacleTextEdit->setGeometry(QRect(20, 310, 451, 201));
        PauseButton = new QPushButton(PhaseViewDialog);
        PauseButton->setObjectName(QString::fromUtf8("PauseButton"));
        PauseButton->setGeometry(QRect(530, 380, 161, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        PauseButton->setFont(font1);

        retranslateUi(PhaseViewDialog);

        QMetaObject::connectSlotsByName(PhaseViewDialog);
    } // setupUi

    void retranslateUi(QDialog *PhaseViewDialog)
    {
        PhaseViewDialog->setWindowTitle(QCoreApplication::translate("PhaseViewDialog", "Dialog", nullptr));
        PhaseIDLabel->setText(QCoreApplication::translate("PhaseViewDialog", "Phase ID", nullptr));
        PhaseNameLabel->setText(QCoreApplication::translate("PhaseViewDialog", "Phase Name", nullptr));
        label_3->setText(QCoreApplication::translate("PhaseViewDialog", "In Queue", nullptr));
        label_4->setText(QCoreApplication::translate("PhaseViewDialog", "Errors", nullptr));
        label_5->setText(QCoreApplication::translate("PhaseViewDialog", "Produced", nullptr));
        label_6->setText(QCoreApplication::translate("PhaseViewDialog", "Disposed", nullptr));
        label_7->setText(QCoreApplication::translate("PhaseViewDialog", "State", nullptr));
        QueueSizeLabel->setText(QCoreApplication::translate("PhaseViewDialog", "0", nullptr));
        ErrorLabel->setText(QCoreApplication::translate("PhaseViewDialog", "0", nullptr));
        ProducedLabel->setText(QCoreApplication::translate("PhaseViewDialog", "0", nullptr));
        DisposedLabel->setText(QCoreApplication::translate("PhaseViewDialog", "0", nullptr));
        StateLabel->setText(QCoreApplication::translate("PhaseViewDialog", "Producing", nullptr));
        PauseButton->setText(QCoreApplication::translate("PhaseViewDialog", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhaseViewDialog: public Ui_PhaseViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHASEVIEWDIALOG_H
