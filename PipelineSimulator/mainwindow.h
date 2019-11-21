#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "phasecreatordialog.h"
#include "pipeline.h"
#include "pipelineviewdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    pipeline* factory;
    PipelineViewDialog* pipelineView;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddPhaseButton_clicked();

    void on_StartButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
