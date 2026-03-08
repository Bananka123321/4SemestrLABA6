#pragma once
#include "StemVegetable.h"

class Celery : public StemVegetable
{
private:
    bool _isCrunchy;

public:
    Celery(std::string name, double calories, double weight, double stemLength, bool isCrunchy);
    std::string ToString() const override;
    std::string GetTypeName() const override;
};
