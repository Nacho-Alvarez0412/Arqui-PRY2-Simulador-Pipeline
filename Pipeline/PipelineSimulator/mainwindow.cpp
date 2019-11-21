#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    factory = new pipeline();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddPhaseButton_clicked()
{
    PhaseCreatorDialog w;
    w.setFactory(factory);
    w.setModal(true);
    w.exec();
}

void MainWindow::on_StartButton_clicked()
{
    pipelineView = new PipelineViewDialog(ui->ProductNameTextEdit->text(),factory);
    pipelineView->show();
    this->setVisible(false);

}
