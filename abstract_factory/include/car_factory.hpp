#ifndef CARFACT_H
#define CARFACT_H

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
    ~car() { std::cout << "destroying car...\n"; }
};

class redCar : public car
{
public:
    void showColor() { std::cout << "Red car.\n"; }
};

class greenCar : public car
{
public:
    void showColor() { std::cout << "Green car.\n"; }
};

#endif