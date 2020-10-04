
#include "abstract_factory.hpp"

car *carFactory::createCar(carColor color) const
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

motorcycle *motorcycleFactory::createMotorcycle(motorcycleColor color) const
{
    if (color == blue)
    {
        return new blueMotorcycle();
    }
    else if (color == white)
    {
        return new whiteMotorcycle();
    }
    else
    {
        std::cout << "Invalid entry.\n";
        return nullptr;
    }
}
