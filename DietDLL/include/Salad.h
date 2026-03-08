#pragma once
#include <vector>
#include <memory>
#include "Vegetable.h"

class Salad
{
private:
    std::vector<std::shared_ptr<Vegetable>> _ingredients;

public:
    void AddVegetable(std::shared_ptr<Vegetable> vegetable);
    const std::vector<std::shared_ptr<Vegetable>>& GetIngredients() const;
};
