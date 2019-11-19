#ifndef PIPELINE_H
#define PIPELINE_H
#include <QtCore>
#include "phase.h"

class Pipeline : public QThread{
public:

    QList<Phase*>* phases;
    QQueue<Product*>* inLine;
    bool running;
    bool pause;
    int inProduction;
    int done;
    int disposeds;

    Pipeline();
    void run();
    void init(int,int,int,int,int,int,int,int);
};

#endif // PIPELINE_H
