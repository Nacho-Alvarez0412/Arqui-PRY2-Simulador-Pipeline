/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *TitleLabel;
    QLabel *ProductLabel;
    QLineEdit *ProductNameTextEdit;
    QPushButton *StartButton;
    QPushButton *AddPhaseButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TitleLabel = new QLabel(centralwidget);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(130, 30, 521, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setPointSize(31);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        TitleLabel->setFont(font);
        TitleLabel->setAlignment(Qt::AlignCenter);
        ProductLabel = new QLabel(centralwidget);
        ProductLabel->setObjectName(QString::fromUtf8("ProductLabel"));
        ProductLabel->setGeometry(QRect(170, 180, 451, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        ProductLabel->setFont(font1);
        ProductNameTextEdit = new QLineEdit(centralwidget);
        ProductNameTextEdit->setObjectName(QString::fromUtf8("ProductNameTextEdit"));
        ProductNameTextEdit->setGeometry(QRect(200, 250, 381, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        ProductNameTextEdit->setFont(font2);
        ProductNameTextEdit->setAlignment(Qt::AlignCenter);
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(270, 470, 221, 61));
        StartButton->setFont(font2);
        AddPhaseButton = new QPushButton(centralwidget);
        AddPhaseButton->setObjectName(QString::fromUtf8("AddPhaseButton"));
        AddPhaseButton->setGeometry(QRect(230, 370, 301, 61));
        AddPhaseButton->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TitleLabel->setText(QCoreApplication::translate("MainWindow", "Pipeline Simulator", nullptr));
        ProductLabel->setText(QCoreApplication::translate("MainWindow", "Enter your product's name:", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start Simulation", nullptr));
        AddPhaseButton->setText(QCoreApplication::translate("MainWindow", "Add Phase to pipeline", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
