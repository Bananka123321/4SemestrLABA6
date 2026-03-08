#include "../include/CylinderVegetable.h"

CylinderVegetable::CylinderVegetable(std::string name, double calories, double weight, bool hasSmell) : Vegetable(name, calories, weight), _hasSmell(hasSmell) {}