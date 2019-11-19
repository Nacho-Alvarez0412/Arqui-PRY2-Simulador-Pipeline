#include "phase.h"

Phase::Phase(QString name,int productionTime,int errorRange,int id)
{
    this->phaseName = name;
    this->product = nullptr;
    this->pause = false;
    this->running = true;
    this->productionTime = productionTime;
    this->errorRange = errorRange;
    this->id = id;
}

void Phase::run(){


}
