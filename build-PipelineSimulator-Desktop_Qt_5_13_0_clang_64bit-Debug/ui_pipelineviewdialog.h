/********************************************************************************
** Form generated from reading UI file 'pipelineviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIPELINEVIEWDIALOG_H
#define UI_PIPELINEVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PipelineViewDialog
{
public:
    QLabel *FactoryLabel;
    QLabel *ProductNameLabel;
    QLabel *PhaseLabel;
    QComboBox *PhasesComboBox;
    QPushButton *InspectButton;
    QLabel *CreatedLabel;
    QLabel *CantCreatedLabel;
    QLabel *ErrorsLabel;
    QLabel *CantErrorsLabel;
    QLabel *DisposedLabel;
    QLabel *CantDisposedLabel;
    QLabel *BinnacleLabel;
    QTextEdit *BinnacleTextEdit;
    QPushButton *StopButton;
    QPushButton *PauseButton;

    void setupUi(QDialog *PipelineViewDialog)
    {
        if (PipelineViewDialog->objectName().isEmpty())
            PipelineViewDialog->setObjectName(QString::fromUtf8("PipelineViewDialog"));
        PipelineViewDialog->resize(928, 656);
        PipelineViewDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        FactoryLabel = new QLabel(PipelineViewDialog);
        FactoryLabel->setObjectName(QString::fromUtf8("FactoryLabel"));
        FactoryLabel->setGeometry(QRect(240, 20, 391, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        FactoryLabel->setFont(font);
        FactoryLabel->setAlignment(Qt::AlignCenter);
        ProductNameLabel = new QLabel(PipelineViewDialog);
        ProductNameLabel->setObjectName(QString::fromUtf8("ProductNameLabel"));
        ProductNameLabel->setGeometry(QRect(30, 110, 411, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        ProductNameLabel->setFont(font1);
        ProductNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PhaseLabel = new QLabel(PipelineViewDialog);
        PhaseLabel->setObjectName(QString::fromUtf8("PhaseLabel"));
        PhaseLabel->setGeometry(QRect(120, 180, 81, 71));
        PhaseLabel->setFont(font1);
        PhaseLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PhasesComboBox = new QComboBox(PipelineViewDialog);
        PhasesComboBox->setObjectName(QString::fromUtf8("PhasesComboBox"));
        PhasesComboBox->setGeometry(QRect(20, 250, 291, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        PhasesComboBox->setFont(font2);
        PhasesComboBox->setEditable(true);
        PhasesComboBox->setMaxVisibleItems(100);
        InspectButton = new QPushButton(PipelineViewDialog);
        InspectButton->setObjectName(QString::fromUtf8("InspectButton"));
        InspectButton->setGeometry(QRect(60, 330, 191, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font3.setPointSize(19);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        InspectButton->setFont(font3);
        CreatedLabel = new QLabel(PipelineViewDialog);
        CreatedLabel->setObjectName(QString::fromUtf8("CreatedLabel"));
        CreatedLabel->setGeometry(QRect(610, 110, 231, 71));
        CreatedLabel->setFont(font1);
        CreatedLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CantCreatedLabel = new QLabel(PipelineViewDialog);
        CantCreatedLabel->setObjectName(QString::fromUtf8("CantCreatedLabel"));
        CantCreatedLabel->setGeometry(QRect(660, 160, 131, 71));
        CantCreatedLabel->setFont(font1);
        CantCreatedLabel->setAlignment(Qt::AlignCenter);
        ErrorsLabel = new QLabel(PipelineViewDialog);
        ErrorsLabel->setObjectName(QString::fromUtf8("ErrorsLabel"));
        ErrorsLabel->setGeometry(QRect(610, 260, 231, 71));
        ErrorsLabel->setFont(font1);
        ErrorsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CantErrorsLabel = new QLabel(PipelineViewDialog);
        CantErrorsLabel->setObjectName(QString::fromUtf8("CantErrorsLabel"));
        CantErrorsLabel->setGeometry(QRect(660, 320, 131, 71));
        CantErrorsLabel->setFont(font1);
        CantErrorsLabel->setAlignment(Qt::AlignCenter);
        DisposedLabel = new QLabel(PipelineViewDialog);
        DisposedLabel->setObjectName(QString::fromUtf8("DisposedLabel"));
        DisposedLabel->setGeometry(QRect(610, 410, 231, 71));
        DisposedLabel->setFont(font1);
        DisposedLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CantDisposedLabel = new QLabel(PipelineViewDialog);
        CantDisposedLabel->setObjectName(QString::fromUtf8("CantDisposedLabel"));
        CantDisposedLabel->setGeometry(QRect(660, 460, 131, 71));
        CantDisposedLabel->setFont(font1);
        CantDisposedLabel->setAlignment(Qt::AlignCenter);
        BinnacleLabel = new QLabel(PipelineViewDialog);
        BinnacleLabel->setObjectName(QString::fromUtf8("BinnacleLabel"));
        BinnacleLabel->setGeometry(QRect(40, 410, 231, 71));
        BinnacleLabel->setFont(font1);
        BinnacleLabel->setAlignment(Qt::AlignCenter);
        BinnacleTextEdit = new QTextEdit(PipelineViewDialog);
        BinnacleTextEdit->setObjectName(QString::fromUtf8("BinnacleTextEdit"));
        BinnacleTextEdit->setGeometry(QRect(23, 480, 291, 151));
        StopButton = new QPushButton(PipelineViewDialog);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));
        StopButton->setGeometry(QRect(350, 570, 241, 51));
        StopButton->setFont(font3);
        PauseButton = new QPushButton(PipelineViewDialog);
        PauseButton->setObjectName(QString::fromUtf8("PauseButton"));
        PauseButton->setGeometry(QRect(350, 500, 241, 51));
        PauseButton->setFont(font3);

        retranslateUi(PipelineViewDialog);

        QMetaObject::connectSlotsByName(PipelineViewDialog);
    } // setupUi

    void retranslateUi(QDialog *PipelineViewDialog)
    {
        PipelineViewDialog->setWindowTitle(QCoreApplication::translate("PipelineViewDialog", "Dialog", nullptr));
        FactoryLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Factory", nullptr));
        ProductNameLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Product : ", nullptr));
        PhaseLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Phase", nullptr));
        InspectButton->setText(QCoreApplication::translate("PipelineViewDialog", "Inspect Phase", nullptr));
        CreatedLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Products Created", nullptr));
        CantCreatedLabel->setText(QCoreApplication::translate("PipelineViewDialog", "0", nullptr));
        ErrorsLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Production Errors", nullptr));
        CantErrorsLabel->setText(QCoreApplication::translate("PipelineViewDialog", "0", nullptr));
        DisposedLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Products Disposed", nullptr));
        CantDisposedLabel->setText(QCoreApplication::translate("PipelineViewDialog", "0", nullptr));
        BinnacleLabel->setText(QCoreApplication::translate("PipelineViewDialog", "Binnacle", nullptr));
        StopButton->setText(QCoreApplication::translate("PipelineViewDialog", "Start Production", nullptr));
        PauseButton->setText(QCoreApplication::translate("PipelineViewDialog", "Pause Production", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PipelineViewDialog: public Ui_PipelineViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIPELINEVIEWDIALOG_H
