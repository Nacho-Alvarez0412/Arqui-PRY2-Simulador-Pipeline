#include "pipeline.h"

Pipeline::Pipeline()
{
    phases = new QList<Phase*>();
    inLine = new QQueue<Product*>();
    running = true;
    pause = false;
    inProduction = 0;
    done = 0;
    disposeds = 0;
}

void::Pipeline::init(int time,int error1,int error2,int error3,int error4,int error5,int correctionTime,int disposeTime){
    phases->append(new Phase("Ensamblaje del CPU",time,error1,1));
    phases->append(new Phase("Integracion del GPU",time,error2,2));
    phases->append(new Phase("Ensamblaje del teclado",time,error3,3));
    phases->append(new Phase("Ensamblaje de la pantalla",time,error4,4));
    phases->append(new Phase("Union a la carcasa",time,error5,5));
}

void Pipeline::run(){

}
