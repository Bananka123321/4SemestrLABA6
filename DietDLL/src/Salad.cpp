#include "../include/Salad.h"

void Salad::AddVegetable(std::shared_ptr<Vegetable> vegetable) {
    _ingredients.push_back(std::move(vegetable));
}

const std::vector<std::shared_ptr<Vegetable>>& Salad::GetIngredients() const {
    return _ingredients;
}