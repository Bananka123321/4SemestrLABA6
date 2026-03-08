#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "Salad.h"
#include "Celery.h"
#include "Cucumber.h"
#include "Vegetable.h"
#include "ConsoleView.h"
#include "CeleryFactory.h"
#include "CucumberFactory.h"
#include "CaloriesService.h"

class Application {
public:
    void Run();
};