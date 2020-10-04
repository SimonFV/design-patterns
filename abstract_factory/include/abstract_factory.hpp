#ifndef FACT_H
#define FACT_H

#include <iostream>
#include "car_factory.hpp"
#include "motorcycle_factory.hpp"

class factory
{
public:
    virtual car *createCar(carColor color) const = 0;
    virtual motorcycle *createMotorcycle(motorcycleColor color) const = 0;
    ~factory() { std::cout << "destroying factory...\n"; }
};

class carFactory : public factory
{
public:
    car *createCar(carColor color) const override;
    motorcycle *createMotorcycle(motorcycleColor color) const override { return nullptr; }
};

class motorcycleFactory : public factory
{
public:
    motorcycle *createMotorcycle(motorcycleColor color) const override;
    car *createCar(carColor color) const override { return nullptr; }
};

#endif