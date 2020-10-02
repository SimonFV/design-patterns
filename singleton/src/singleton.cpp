#include "singleton.hpp"

singleton *singleton::instance = nullptr;

singleton *singleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new singleton();
    }
    return instance;
}

int singleton::getData()
{
    return this->data;
}

void singleton::setData(int data)
{
    this->data = data;
}