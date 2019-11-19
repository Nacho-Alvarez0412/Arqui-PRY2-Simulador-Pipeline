#ifndef PIPELINEVIEW_H
#define PIPELINEVIEW_H

#include <QDialog>
#include "pipeline.h"

namespace Ui {
class PipelineView;
}

class PipelineView : public QDialog
{
    Q_OBJECT

public:
    Pipeline* pipeline;

    explicit PipelineView(QWidget *parent = nullptr);
    ~PipelineView();

    void setPipeline(Pipeline*);

private slots:
    void on_StopPhase1Button_clicked();

private:
    Ui::PipelineView *ui;
};

#endif // PIPELINEVIEW_H
