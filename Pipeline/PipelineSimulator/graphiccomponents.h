#ifndef GRAPHICCOMPONENTS_H
#define GRAPHICCOMPONENTS_H
#include <QLabel>
#include <QTextEdit>

class GraphicComponents
{
public:
    QLabel* phaseID;
    QLabel* phaseName;
    QLabel* errors;
    QLabel* inQueue;
    QLabel* produced;
    QLabel* disposed;
    QLabel* state;
    QTextEdit* binnacle;

    GraphicComponents(QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QLabel*,QTextEdit*);
};

#endif // GRAPHICCOMPONENTS_H
