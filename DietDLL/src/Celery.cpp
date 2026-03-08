#include "../include/Celery.h"

Celery::Celery(std::string name, double calories, double weight, double stemLength, bool isCrunchy) : StemVegetable(name, calories, weight, stemLength), _isCrunchy(isCrunchy){}

std::string Celery::GetTypeName() const {
    return "Celery";
}

std::string Celery::ToString() const {
    return "Type: Celery | Sort: " + _name + " | Calories: " + std::to_string(_calories) + " | Weight: " + std::to_string(_weight) + " | Stem length: " + std::to_string(_stemLength) + " | Crunchy: " + std::string(_isCrunchy ? "Yes" : "No");
}