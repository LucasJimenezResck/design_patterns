#pragma once
#include "Observer.h"

class Subject
{
public:
    virtual void AddObserver(Observer* observer) = 0;
    virtual void RemoveObserver(Observer* observer) = 0;
    virtual void Notify() = 0;
    virtual ~Subject() {}
private:
    std::forward_list<Observer*> mObservers;
};