#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class singleton
{
private:
    static singleton *instance;
    int data;
    singleton()
    {
        data = 1;
    }

public:
    static singleton *getInstance();
    singleton(singleton &other) = delete;
    void operator=(const singleton &) = delete;

public:
    int getData();
    int setData(int data);
};

#endif