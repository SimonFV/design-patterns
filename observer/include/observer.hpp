#ifndef OBS_H
#define OBS_H

#include <iostream>
#include <list>
#include <string>

class IObserver
{
public:
    virtual void update(std::string message) = 0;
    virtual ~IObserver() {}
};

class Observer : public IObserver
{
    void update(std::string message);
    virtual ~Observer() {}
};

#endif