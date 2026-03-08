#include "../include/StemVegetable.h"

StemVegetable::StemVegetable(std::string name, double calories, double weight, double stemLength) : Vegetable(name, calories, weight), _stemLength(stemLength) {}