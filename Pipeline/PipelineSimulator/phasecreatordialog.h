#ifndef PHASECREATORDIALOG_H
#define PHASECREATORDIALOG_H

#include <QDialog>
#include "pipeline.h"

namespace Ui {
class PhaseCreatorDialog;
}

class PhaseCreatorDialog : public QDialog
{
    Q_OBJECT

public:
    pipeline* factory;
    void setFactory(pipeline*);
    explicit PhaseCreatorDialog(QWidget *parent = nullptr);
    ~PhaseCreatorDialog();

private slots:
    void on_AddButton_clicked();

private:
    Ui::PhaseCreatorDialog *ui;
};

#endif // PHASECREATORDIALOG_H
