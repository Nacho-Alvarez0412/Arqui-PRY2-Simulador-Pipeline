#ifndef PHASEVIEW_H
#define PHASEVIEW_H

#include <QDialog>
#include<phasethread.h>

namespace Ui {
class PhaseView;
}

class PhaseView : public QDialog
{
    Q_OBJECT

public:
    //PhaseThread* thread;
    explicit PhaseView(QWidget *parent = nullptr);
    ~PhaseView();
    Ui::PhaseView *ui;
};

#endif // PHASEVIEW_H
