#include <gtest/gtest.h>
#include <memory>
#include "Salad.h"
#include "Celery.h"
#include "Cucumber.h"
#include "CaloriesService.h"

TEST(CaloriesServiceTest, CalculateTotalCalories)
{
    Salad salad;

    auto celery = std::make_shared<Celery>("Celery", 16, 100, true, true);
    auto cucumber = std::make_shared<Cucumber>("Cucumber", 500, 200, false, true);

    salad.AddVegetable(celery);
    salad.AddVegetable(cucumber);

    CaloriesService service;

    double result = service.CalculateTotalCalories(salad);

    double expected = 16 * 100 + 500 * 200;

    EXPECT_DOUBLE_EQ(result, expected);
}