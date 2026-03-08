#pragma once
#include "VegetableFactory.h"
#include "Celery.h"

class CeleryFactory : public VegetableFactory {
public:
	std::shared_ptr<Vegetable> Create() const override;
};