#ifndef COMPUTER_H
#define COMPUTER_H
#include <QtCore>

class Product{
public:
    QList<bool> phases;
    QString actualState;
    Product();
};

#endif // COMPUTER_H
