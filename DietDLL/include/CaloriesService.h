#pragma once
#include "Salad.h"

class CaloriesService {
public:
	double CalculateTotalCalories(const Salad& salad) const;
};