#include <iostream>
#include "director.hpp"

int main(int arg, char* args[]){
    obj1_builder* builder1 = new obj1_builder();
    director* director1 = new director();

    director1->setBuilder(builder1);
    director1->buildFullObject();

    object* obj1 = builder1->getObject();

    std::cout<<*obj1->getName()<<std::endl;
    std::cout<<*obj1->getPart1()<<std::endl;
    std::cout<<*obj1->getPart2()<<std::endl;

    delete obj1;
    delete builder1;
    delete director1;

}
