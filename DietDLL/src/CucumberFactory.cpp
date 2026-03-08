#include "../include/CucumberFactory.h"

std::shared_ptr<Vegetable> CucumberFactory::Create() const {
	return std::make_shared<Cucumber>("Cucumber", 500, 200, 10, false);
}