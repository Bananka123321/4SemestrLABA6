#pragma once
#include "Vegetable.h"

class CylinderVegetable : public Vegetable
{
protected:
    bool _hasSmell;

public:
    CylinderVegetable(std::string name, double calories, double weight, bool hasSmell);
};
