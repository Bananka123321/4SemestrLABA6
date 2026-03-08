#include "../include/Vegetable.h"

Vegetable::Vegetable(std::string name, double calories, double weight) : _name(name), _calories(calories), _weight(weight) {}

Vegetable::~Vegetable() = default;

std::string Vegetable::GetName() const {
    return _name;
}

double Vegetable::GetWeight() const {
    return _weight;
}

double Vegetable::GetCalories() const {
    return _calories;
}