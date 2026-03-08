#include "../include/App.h"

void Application::Run() {
    Salad salad;
    CeleryFactory celeryFactory;
    CucumberFactory cucumberFactory;

    salad.AddVegetable(celeryFactory.Create());
    salad.AddVegetable(cucumberFactory.Create());

    CaloriesService service;
    double total = service.CalculateTotalCalories(salad);

    ConsoleView view;
    view.ShowSaladIngredients(salad);
    view.ShowTotalCalories(total);
}