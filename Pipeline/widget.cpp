#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label_12->setPixmap(QPixmap("/home/ignacio/Desktop/Proyects/Pipeline/ComputerImage.png"));
    pipeline = new Pipeline();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    int time = ui->TimeSpinBox->value();
    int error1 = ui->Phase1SpinBox->value();
    int error2 = ui->Phase2SpinBox->value();
    int error3 = ui->Phase3SpinBox->value();
    int error4 = ui->Phase4SpinBox->value();
    int error5 = ui->Phase5SpinBox->value();
    int correctionTime = ui->CorrectionTimeSpinBox->value();
    int disposeTime = ui->DisposeTimeSpinBox->value();

    pipeline->init(time,error1,error2,error3,error4,error5,correctionTime,disposeTime);

    view.setPipeline(this->pipeline);
    view.show();
    this->close();
    qDebug()<< "Ejecutado";
}
