#include "phasecreatordialog.h"
#include "ui_phasecreatordialog.h"

PhaseCreatorDialog::PhaseCreatorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhaseCreatorDialog)
{
    ui->setupUi(this);
}

PhaseCreatorDialog::~PhaseCreatorDialog()
{
    delete ui;
}

void PhaseCreatorDialog::setFactory(pipeline *factory){
    this->factory = factory;
}

void PhaseCreatorDialog::on_AddButton_clicked()
{
    QString phaseName = this->ui->PhaseNameLineEdit->text();
    int duration = ui->DurationSpinBox->value();
    int errorRange = ui->ErrorRangeSpinBox->value();
    int maxSize = ui->MaxQueueSpinBox->value();
    int correctionTime = ui->CorrectionSpinBox->value();
    int disposeTime = ui->DisposeSpinBox->value();
    factory->addPhase(new PhaseThread(phaseName,factory->phases->size()+1,duration,disposeTime,errorRange,maxSize,correctionTime));
    qDebug()<<"Phase "+phaseName+" created successfully";
    close();
}
