#ifndef BUILDER2_H
#define BUILDER2_H
#include "builder.hpp"

class obj2_builder : public builder{
private:
    object* obj2;
public:
    obj2_builder(){
        reset();
    }
    ~obj2_builder(){
        delete obj2;
    }
    void reset(){
        obj2 = new object();
    }
    void buildName(){
        *obj2->getName() = "Object 2";
    }
    void buildPart1(){
        *obj2->getPart1() = "obj2 - Part 1";
    }
    void buildPart2(){
        *obj2->getPart2() = "obj2 - Part 2";
    }
    object* getObject(){
        object* new_obj2 = obj2;
        reset();
        return obj2;
    }
};

#endif