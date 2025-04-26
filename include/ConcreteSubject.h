#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject
{
public:
    virtual void AddObserver(Observer* observer);
    virtual void RemoveObserver(Observer* observer);
    virtual void Notify();
private:
    std::forward_list<Observer*> mObservers;
};