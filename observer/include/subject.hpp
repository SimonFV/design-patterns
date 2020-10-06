#ifndef SUB_H
#define SUB_H

#include "observer.hpp"

class ISubject
{
public:
    virtual ~ISubject() {}
    virtual void attach(IObserver *observer) = 0;
    virtual void dettach(IObserver *observer) = 0;
    virtual void notify() = 0;
};

class Subject : public ISubject
{
};

#endif