#ifndef DIR_H
#define DIR_H
#include "obj1_builder.hpp"
#include "obj2_builder.hpp"

class director{
private:
    builder* builder1;
public:
    void setBuilder(builder* builderType){
        this->builder1 = builderType;
    }
    void buildMinimumObject(){
        this->builder1->buildName();
        this->builder1->buildPart1();
    }
    void buildFullObject(){
        this->builder1->buildName();
        this->builder1->buildPart1();
        this->builder1->buildPart2();
    }
};

#endif