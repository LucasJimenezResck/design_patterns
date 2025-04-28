#pragma once
#include "Observer.h"
#include "Subject.h"
class ConcreteObserver : public Observer
{
public:
    //Call by reference so that any concrete subject can be 
    explicit ConcreteObserver(Subject& subject,int message, const std::string& name);
    virtual void OnNotify(); //Reaction to the notification done by the Subject
    virtual ~ConcreteObserver();
private:
    std::string mName;
    //Register to a subject as soon as creating an instance
    Subject& mSubject;
    int mMessage;
};