#pragma once
#include "Observer.h"
class ConcreteObserver : public Observer
{
public:
    explicit ConcreteObserver(const std::string& mName);
    virtual void OnNotify(); //Reaction to the notification done by the Subject
private:
    std::string name;
};