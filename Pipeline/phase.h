#ifndef PHASE_H
#define PHASE_H
#include <QtCore>
#include "product.h"

class Phase : public QThread{
public:
    QString phaseName;
    Product* product;
    bool pause;
    bool running;
    int productionTime;
    int errorRange;
    int id;


    Phase(QString name,int productionTime,int errorRange,int id);
    void run();
};

#endif // PHASE_H
