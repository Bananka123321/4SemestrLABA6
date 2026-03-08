#include "../include/CeleryFactory.h"

std::shared_ptr<Vegetable> CeleryFactory::Create() const {
	return std::make_shared<Celery>("Celery", 16, 100, 20, true);
}