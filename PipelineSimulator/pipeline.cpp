#include "pipeline.h"

pipeline::pipeline()
{
    this->phases = new QList<PhaseThread*>();
    pause = false;
}

void pipeline::setGraphics(QLabel*created,QLabel*errors,QLabel*disposed,QTextEdit*mainBinnacle){
    this->created=created;
    this->productionErrors=errors;
    this->productsDisposed=disposed;
    this->mainBinnacle=mainBinnacle;

}

void pipeline::addPhase(PhaseThread * phase){
    if(phases->size() == 0)
        phases->append(phase);
    else{
        phases->last()->nextPhase = phase;
        phases->append(phase);
    }
}

void pipeline::startSimulation(){
    for(int i = 0 ; i < phases->size() ; i++){
        phases->takeAt(i)->start();
    }
}

void pipeline::setPauseFactory(){
    for(int i =0 ; i < phases->size() ; i++){
        PhaseThread* phase = phases->at(i);
        phase->setPause();
    }
    pause = !pause;
}

int pipeline::findPhase(QString name){
    for(int i = 0 ; i < phases->size() ; i++){
        if(phases->at(i)->name == name)
            return i;
    }
}

