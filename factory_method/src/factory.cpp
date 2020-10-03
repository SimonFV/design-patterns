
#include "factory.hpp"

car *car::createCar(carColor color)
{
    if (color == red)
    {
        return new redCar();
    }
    else if (color == green)
    {
        return new greenCar();
    }
    else
    {
        std::cout << "Invalid entry.\n";
        return nullptr;
    }
}