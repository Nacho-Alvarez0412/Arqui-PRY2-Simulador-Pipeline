#include "graphiccomponents.h"

GraphicComponents::GraphicComponents(QLabel*phaseID,QLabel*phaseName,QLabel*errors,QLabel*inQueue,QLabel*produced,QLabel*disposed,QLabel*state,QTextEdit*binnacle)
{
    this->phaseID=phaseID;
    this->phaseName=phaseName;
    this->errors=errors;
    this->inQueue=inQueue;
    this->produced=produced;
    this->disposed=disposed;
    this->state=state;
    this->binnacle=binnacle;
}
