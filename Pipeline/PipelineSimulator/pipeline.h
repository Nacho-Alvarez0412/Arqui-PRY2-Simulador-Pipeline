#ifndef PIPELINE_H
#define PIPELINE_H
#include <QtCore>
#include <QLabel>
#include <QTextEdit>
#include "phasethread.h"

class pipeline
{
public:
    QList<PhaseThread*>* phases;
    QLabel* created;
    QLabel* productionErrors;
    QLabel* productsDisposed;
    QTextEdit* mainBinnacle;
    QString productsName;
    bool pause;

    pipeline();
    void addPhase(PhaseThread*);
    void startSimulation();
    void setGraphics(QLabel*,QLabel*,QLabel*,QTextEdit*);
    void setPauseFactory();
    int findPhase(QString);
};

#endif // PIPELINE_H
