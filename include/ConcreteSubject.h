#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject
{
public:
    virtual void AddObserver(int message, Observer* observer);
    virtual void RemoveObserver(int message, Observer* observer);
    virtual void Notify(int message);
    virtual void NotifyAll();
private:
    
};