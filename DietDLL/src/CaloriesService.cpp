#include "../include/CaloriesService.h"
#include <iostream>

double CaloriesService::CalculateTotalCalories(const Salad& salad) const {
    double count = 0.0;
    for (const auto& vegetable : salad.GetIngredients()){
        count += vegetable->GetWeight();
    }
    return count;
}