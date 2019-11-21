#ifndef PRODUCT_H
#define PRODUCT_H
#include <QtCore>

class Product
{
public:
    QString name;
    bool productionState;

    Product(QString name);

    void setProductionState(bool);
};

#endif // PRODUCT_H
