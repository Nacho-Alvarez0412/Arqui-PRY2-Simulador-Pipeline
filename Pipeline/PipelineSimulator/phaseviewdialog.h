#ifndef PHASEVIEWDIALOG_H
#define PHASEVIEWDIALOG_H

#include <QDialog>
#include "phasethread.h"

namespace Ui {
class PhaseViewDialog;
}

class PhaseViewDialog : public QDialog
{
    Q_OBJECT

public:
    PhaseThread* controller;

    void passControl();
    explicit PhaseViewDialog(PhaseThread*,QWidget *parent = nullptr);
    ~PhaseViewDialog();

private slots:
    void on_PauseButton_clicked();

private:
    Ui::PhaseViewDialog *ui;
};

#endif // PHASEVIEWDIALOG_H
