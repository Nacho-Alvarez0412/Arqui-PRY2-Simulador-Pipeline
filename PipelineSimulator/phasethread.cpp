#include "phasethread.h"

PhaseThread::PhaseThread(QString name,int id,int processTime,int disposeTime,int errorRange,int maxQueueSize,int correctionTime)
{
    this->name = name;
    this->processTime = processTime;
    this->disposeTime = disposeTime;
    this->errorRange = errorRange;
    this->maxQueueSize = maxQueueSize;
    this->correctionTime = correctionTime;
    this->product = nullptr;
    this->productsQueue = new QQueue<Product*>();
    this->nextPhase = nullptr;
    this->pause = false;
    this->running = true;
    this->id = id;
    cantErrors = 0;
    cantProduced = 0;
    cantDisposed = 0;

}

void PhaseThread :: queueProduct(Product* product){
    int actualSize = productsQueue->size();

    if(actualSize >= maxQueueSize){
        productsQueue->dequeue();
        productsQueue->enqueue(product);
    }
    else
        productsQueue->enqueue(product);
}

void PhaseThread :: goNextPhase(){
    if(nextPhase != nullptr){
        nextPhase->queueProduct(product);
        product = productsQueue->dequeue();
    }

}

void PhaseThread :: setPause(){
    pause = !pause;
}

void PhaseThread :: stop(){
    running = false;
}

void PhaseThread :: initGraphics(QLabel*phaseID,QLabel*phaseName,QLabel*errors,QLabel*inQueue,QLabel*produced,QLabel*disposed,QLabel*state,QTextEdit*binnacle){
    graphicComponents = new GraphicComponents(phaseID,phaseName,errors,inQueue,produced,disposed,state,binnacle);
    graphicComponents->phaseID->setText("Phase: " + QString::number(id));
    graphicComponents->phaseName->setText(this->name);
    graphicComponents->state->setText("Running");
    graphicComponents->errors->setNum(this->cantErrors);
    graphicComponents->inQueue->setNum(this->productsQueue->size());
    graphicComponents->disposed->setNum(this->cantDisposed);
    graphicComponents->produced->setNum(this->cantProduced);

}

void PhaseThread :: run(){
    QRandomGenerator random;
    while(running){
        graphicComponents->inQueue->setNum(productsQueue->size());
        graphicComponents->state->setText("Running");
        while(pause){
            graphicComponents->inQueue->setNum(productsQueue->size());
            graphicComponents->state->setText("Paused");
            sleep(1);
        }
        if(product != nullptr){
            graphicComponents->binnacle->append("Product about to enter "+this->name+" phase...");
            sleep(2);

            //
            if(random.generate()%100 <= this->errorRange){
                //

                graphicComponents->binnacle->append("An error ocurred during production, phase put in hault");

                //
                int wait = (random.generate()%this->disposeTime)*2;
                //
                cantErrors++;
                int totalErrors = globalErrors->text().toInt()+1;
                globalErrors->setNum(totalErrors);
                graphicComponents->errors->setNum(cantErrors);
                //
                if(wait >= disposeTime){
                    //
                    graphicComponents->binnacle->append("Product was disposed, part took more recovery time than supported.");
                    cantDisposed++;
                    int totalDisposed = globalDisposed->text().toInt()+1;
                    globalDisposed->setNum(totalDisposed);
                    graphicComponents->disposed->setNum(cantDisposed);
                    product = nullptr;

                }
                else{
                    sleep(wait);
                    graphicComponents->binnacle->append("Product was recovered, continuing with process.");
                    graphicComponents->binnacle->append("Process was succesfull");
                    cantProduced++;
                    graphicComponents->produced->setNum(cantProduced);


                    //
                    if(nextPhase != nullptr){
                        nextPhase->queueProduct(product);
                        graphicComponents->binnacle->append("Product sent to next Process");
                    }
                    else
                        graphicComponents->binnacle->append("Product was terminated succesfully");
                    product = nullptr;

                    if(globalCreated != nullptr)
                        globalCreated->setNum(cantProduced);

                    if(nextPhase != nullptr){
                        nextPhase->queueProduct(product);
                        graphicComponents->binnacle->append("Product sent to next Process");
                    }
                    else
                        graphicComponents->binnacle->append("Product was terminated succesfully");
                    product = nullptr;
                }
            }
            else{
                sleep(this->processTime);
                graphicComponents->binnacle->append("Process was succesfull");
                cantProduced++;
                graphicComponents->produced->setNum(cantProduced);

                if(globalCreated != nullptr)
                    globalCreated->setNum(cantProduced);

                if(nextPhase != nullptr){
                    nextPhase->queueProduct(product);
                    graphicComponents->binnacle->append("Product sent to next Process");
                }
                else
                    graphicComponents->binnacle->append("Product was terminated succesfully");
                product = nullptr;
            }
        }
        else{
            if(!productsQueue->empty()){
                product = productsQueue->dequeue();
            }
            else{
                graphicComponents->binnacle->append("No products to process");
            }
        }
        sleep(1);
    }
}




