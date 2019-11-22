#ifndef PHASETHREAD_H
#define PHASETHREAD_H
#include <QtCore>
#include "graphiccomponents.h"
#include "product.h"

extern "C"{
    int _randomGenerator(int, int);
    int _greaterThan(int,int);
    int _lessThan(int,int);
}

class PhaseThread : public QThread
{
public:
    QString name;
    int id;
    int processTime;
    int disposeTime;
    int errorRange;
    int maxQueueSize;
    int correctionTime;
    int cantErrors;
    int cantProduced;
    int cantDisposed;
    bool running;
    bool pause;
    Product * product;
    QQueue<Product*> * productsQueue;
    PhaseThread* nextPhase;
    GraphicComponents* graphicComponents;
    QLabel* globalErrors;
    QLabel* globalDisposed;
    QLabel* globalCreated;


    PhaseThread(QString,int,int,int,int,int,int);

    void queueProduct(Product*);
    void goNextPhase();
    void run();
    void setPause();
    void stop();
    void initGraphics(QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QTextEdit*);



};

#endif // PHASETHREAD_H
