#include "pipelineview.h"
#include "ui_pipelineview.h"

PipelineView::PipelineView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PipelineView)
{
    this->pipeline = nullptr;
    ui->setupUi(this);
}

PipelineView::~PipelineView()
{
    delete ui;
}

void PipelineView::setPipeline(Pipeline *pipeline){
    this->pipeline = pipeline;
}

void PipelineView::on_StopPhase1Button_clicked()
{

}
