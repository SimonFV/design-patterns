#ifndef BUILDER_H
#define BUILDER_H
#include "object.hpp"

class builder{
public:
    virtual ~builder(){}
    virtual void buildName() = 0;
    virtual void buildPart1() = 0;
    virtual void buildPart2() = 0;
};

#endif