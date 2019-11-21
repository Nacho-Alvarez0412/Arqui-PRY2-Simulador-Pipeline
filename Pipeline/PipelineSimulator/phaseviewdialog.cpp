#include "phaseviewdialog.h"
#include "ui_phaseviewdialog.h"

PhaseViewDialog::PhaseViewDialog(PhaseThread*controller,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhaseViewDialog)
{
    this->controller = controller;
    ui->setupUi(this);
    passControl();
}

void PhaseViewDialog::passControl(){
    controller->initGraphics(ui->PhaseIDLabel,ui->PhaseNameLabel,ui->ErrorLabel,ui->QueueSizeLabel,ui->ProducedLabel,ui->DisposedLabel,ui->StateLabel,ui->BinnacleTextEdit);
}

PhaseViewDialog::~PhaseViewDialog()
{
    delete ui;
}

void PhaseViewDialog::on_PauseButton_clicked()
{
    if(controller->pause)
        ui->PauseButton->setText("Pause");
    else
        ui->PauseButton->setText("Resume");
    controller->setPause();

}
