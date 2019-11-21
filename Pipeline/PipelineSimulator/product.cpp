#include "product.h"

Product::Product(QString name)
{
    this->name = name;
    this->productionState = false;
}

void Product::setProductionState(bool state){
    this->productionState = state;
}
