#pragma once
#include "VegetableFactory.h"
#include "Cucumber.h"

class CucumberFactory : public VegetableFactory {
public:
    std::shared_ptr<Vegetable> Create() const override;
};