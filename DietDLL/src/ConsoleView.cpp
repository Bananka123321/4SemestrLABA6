#include "../include/ConsoleView.h"

void ConsoleView::ShowTotalCalories(const double& caloriesResult) {
	std::cout << "Total calories result: " << caloriesResult;
}

void ConsoleView::ShowSaladIngredients(const Salad& salad) {
    std::cout << "Salad ingredients:\n";
    for (const auto& veg : salad.GetIngredients())
        std::cout << "- " << veg->GetName() << " " << veg->GetWeight() << "g\n";
}