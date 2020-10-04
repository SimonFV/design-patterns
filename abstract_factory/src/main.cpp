
#include "abstract_factory.hpp"

int main()
{
    factory *myFactory = new carFactory();
    car *myCar = myFactory->createCar(red);
    myCar->showColor();
    delete myCar;
    delete myFactory;

    myFactory = new motorcycleFactory();
    motorcycle *myMotorcycle = myFactory->createMotorcycle(blue);
    myMotorcycle->showColor();
    delete myMotorcycle;
    delete myFactory;
    return 0;
}