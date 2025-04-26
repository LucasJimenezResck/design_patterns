#pragma once
#include "Observer.h"

class Subject
{
public:
    void AddObserver(Observer* observer);
    void RemoveObserver(Observer* observer);
    void Notify();
private:
    std::forward_list<Observer*> mObservers;
};