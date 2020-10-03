#ifndef FACT_H
#define FACT_H

#include <iostream>

enum carColor
{
    red,
    green
};

class car
{
public:
    virtual void showColor() {}
    static car *createCar(carColor color);
    ~car() { std::cout << "destroying car...\n"; }
};

class redCar : public car
{
public:
    void showColor() { std::cout << "Red color.\n"; }
};

class greenCar : public car
{
public:
    void showColor() { std::cout << "Green color.\n"; }
};

#endif