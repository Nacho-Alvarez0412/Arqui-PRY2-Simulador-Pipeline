#include "productgenerator.h"

ProductGenerator::ProductGenerator(PhaseThread*phase,int waitTime,QString name)
{
    this->firstPhase = phase;
    this->waitTime = waitTime;
    running = true;
    pause = false;
    this->name = name;
}

void ProductGenerator::run(){
    while(running){
        firstPhase->queueProduct(new Product(name));
        qDebug()<<"producto encolado";
        sleep(waitTime);

        while(pause){
            sleep(1);
        }
    }

}
