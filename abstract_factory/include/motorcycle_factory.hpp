#ifndef MOTFACT_H
#define MOTFACT_H

#include <iostream>

enum motorcycleColor
{
    blue,
    white
};

class motorcycle
{
public:
    virtual void showColor() {}
    ~motorcycle() { std::cout << "destroying motorcycle...\n"; }
};

class blueMotorcycle : public motorcycle
{
public:
    void showColor() { std::cout << "Blue motorcycle.\n"; }
};

class whiteMotorcycle : public motorcycle
{
public:
    void showColor() { std::cout << "White motorcycle.\n"; }
};

#endif