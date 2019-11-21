#include "pipelineviewdialog.h"
#include "ui_pipelineviewdialog.h"

PipelineViewDialog::PipelineViewDialog(QString name,pipeline* factory,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PipelineViewDialog)
{
    ui->setupUi(this);
    this->factory = factory;
    this->productName = name;
    ui->ProductNameLabel->setText("Product: "+name);
    ui->BinnacleTextEdit->append("New factory created.\nProduct: "+name+"\nTotal Phases: "+QString::number(factory->phases->size()));
    views = new QList<PhaseViewDialog*>();
    productGenerator = nullptr;

    setPhases();
    initWindows();
    passMainWindowGraphics();
    startThreads();
}

void PipelineViewDialog::passMainWindowGraphics(){
    for (int i = 0;i<factory->phases->size();i++) {
        factory->phases->at(i)->globalErrors = this->ui->CantErrorsLabel;
        factory->phases->at(i)->globalDisposed = this->ui->CantDisposedLabel;
    }
    factory->phases->last()->globalCreated = this->ui->CantCreatedLabel;
}

void PipelineViewDialog::startThreads(){
    for(int i =0 ; i<factory->phases->size() ; i++){
        factory->phases->at(i)->start();
    }
}

void PipelineViewDialog::setPhases(){
    for(int i = 0 ; i<factory->phases->size() ; i++){
        ui->PhasesComboBox->addItem(factory->phases->at(i)->name);
    }
}

PipelineViewDialog::~PipelineViewDialog()
{
    delete ui;
}

void PipelineViewDialog::on_PauseButton_clicked()
{
    if(factory->pause)
        this->ui->PauseButton->setText("Pause");
    else
        this->ui->PauseButton->setText("Resume");
    factory->setPauseFactory();
}

void PipelineViewDialog::initWindows(){
    for(int i = 0 ; i<factory->phases->size() ; i++){
        PhaseViewDialog* view = new PhaseViewDialog(factory->phases->at(i));
        views->append(view);
    }
}


void PipelineViewDialog::on_InspectButton_clicked()
{
    QString phaseName = ui->PhasesComboBox->currentText();
    int phase = factory->findPhase(phaseName);
    views->at(phase)->show();

}

void PipelineViewDialog::on_StopButton_clicked()
{
    if(productGenerator == nullptr){
        this->productGenerator = new ProductGenerator(factory->phases->at(0),1,this->productName);
        this->ui->StopButton->setText("Stop Production");
        productGenerator->start();
    }
    else{
        if(productGenerator->pause){
            this->ui->StopButton->setText("Stop Production");
        }
        else{
            this->ui->StopButton->setText("Resume Production");
        }
        productGenerator->pause = !productGenerator->pause;
    }
}
