#pragma once
#include "Vegetable.h"
#include <memory>

class VegetableFactory {
public:
    virtual std::shared_ptr<Vegetable> Create() const = 0;
    virtual ~VegetableFactory();
};