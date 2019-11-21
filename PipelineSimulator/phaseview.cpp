#include "phaseview.h"
#include "ui_phaseview.h"

PhaseView::PhaseView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhaseView)
{
    ui->setupUi(this);
}

PhaseView::~PhaseView()
{
    delete ui;
}
