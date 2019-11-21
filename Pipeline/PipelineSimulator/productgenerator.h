#ifndef PRODUCTGENERATOR_H
#define PRODUCTGENERATOR_H
#include "phasethread.h"

class ProductGenerator : public QThread
{
public:
    PhaseThread* firstPhase;
    int waitTime;
    bool running;
    bool pause;
    QString name;
    ProductGenerator(PhaseThread*,int,QString);
    void run();

};

#endif // PRODUCTGENERATOR_H
