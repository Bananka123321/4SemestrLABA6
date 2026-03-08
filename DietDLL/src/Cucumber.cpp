#include "../include/Cucumber.h"

Cucumber::Cucumber(std::string name, double calories, double weight, bool hasSmell, bool isNew) : CylinderVegetable(name, calories, weight, hasSmell), _isNew(isNew) {}

std::string Cucumber::GetTypeName() const {
    return "Cucumber";
}

std::string Cucumber::ToString() const {
    return "Type: Cucumber | Sort: " + _name + " | Calories: " + std::to_string(_calories) + " | Weight: " + std::to_string(_weight) +" | Has smell: " + std::string(_hasSmell ? "Yes" : "No") + " | New: " + std::string(_isNew ? "Yes" : "No");
}