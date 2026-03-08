#pragma once
#include "CylinderVegetable.h"

class Cucumber : public CylinderVegetable
{
private:
    bool _isNew;

public:
    Cucumber(std::string name, double calories, double weight, bool hasSmell,bool isNew);
    std::string ToString() const override;
    std::string GetTypeName() const override;
};
