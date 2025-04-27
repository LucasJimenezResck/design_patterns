#include "../include/ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(Subject& subject, const std::string& name) : mName(name), mSubject(subject)
{
    mSubject.AddObserver(this);
}

ConcreteObserver::~ConcreteObserver()
{
    mSubject.RemoveObserver(this);
}
void ConcreteObserver::OnNotify()
{
    std::cout <<mName << " says: Hello Viki" << std::endl;
}