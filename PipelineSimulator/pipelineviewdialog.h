#ifndef PIPELINEVIEWDIALOG_H
#define PIPELINEVIEWDIALOG_H

#include <QDialog>
#include "pipeline.h"
#include "productgenerator.h"
#include "phasethread.h"
#include "phaseviewdialog.h"
#include "productgenerator.h"

namespace Ui {
class PipelineViewDialog;
}

class PipelineViewDialog : public QDialog
{
    Q_OBJECT

public:
    QString productName;
    pipeline* factory;
    QList<PhaseViewDialog*>* views;
    ProductGenerator* productGenerator;

    explicit PipelineViewDialog(QString,pipeline*,QWidget *parent = nullptr);
    ~PipelineViewDialog();
    void setPhases();
    void initWindows();
    void assignWindows();
    void startThreads();
    void passMainWindowGraphics();

private slots:
    void on_PauseButton_clicked();

    void on_InspectButton_clicked();

    void on_StopButton_clicked();

private:
    Ui::PipelineViewDialog *ui;
};

#endif // PIPELINEVIEWDIALOG_H
