#ifndef OBJECT1_H
#define OBJECT1_H
#include <iostream>

class object{
private:
    std::string name;
    std::string part1;
    std::string part2;
public:
    std::string* getName(){return &name;}
    std::string* getPart1(){return &part1;}
    std::string* getPart2(){return &part2;}
};

#endif