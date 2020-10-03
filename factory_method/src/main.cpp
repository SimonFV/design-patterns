
#include "factory.hpp"

int main()
{
    car *myCar = car::createCar(red);
    myCar->showColor();
    delete myCar;
    myCar = car::createCar(green);
    myCar->showColor();
    delete myCar;
    return 0;
}