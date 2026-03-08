#pragma once
#include <string>

class Vegetable {
protected:
    std::string _name;
    double _calories;
    double _weight;

public:
    Vegetable(std::string name, double calories, double weight);
    virtual ~Vegetable();

    std::string GetName() const;
    double GetWeight() const;
    double GetCalories() const;

    virtual std::string ToString() const = 0;
    virtual std::string GetTypeName() const = 0;
};
