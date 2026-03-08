#pragma once
#include "Vegetable.h"

class StemVegetable : public Vegetable
{
protected:
    double _stemLength;
public:
    StemVegetable(std::string name, double calories, double weight, double stemLength);
};
