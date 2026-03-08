#pragma once
#include <iostream>
#include "Salad.h"

class ConsoleView {
public:
	void ShowSaladIngredients(const Salad& salad);
	void ShowTotalCalories(const double& caloriesResult);
};