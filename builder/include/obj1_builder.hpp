#ifndef BUILDER1_H
#define BUILDER1_H
#include "builder.hpp"

class obj1_builder : public builder{
private:
    object* obj1;
public:
    obj1_builder(){
        reset();
    }
    ~obj1_builder(){
        delete obj1;
    }
    void reset(){
        obj1 = new object();
    }
    void buildName(){
        *obj1->getName() = "Object 1";
    }
    void buildPart1(){
        *obj1->getPart1() = "obj1 - Part 1";
    }
    void buildPart2(){
        *obj1->getPart2() = "obj1 - Part 2";
    }
    object* getObject(){
        object* new_obj1 = obj1;
        reset();
        return new_obj1;
    }
};

#endif