#include "../include/ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(Subject& subject, int message, const std::string& name)
 : mName(name), mSubject(subject), mMessage(message)
{
    mSubject.AddObserver(mMessage, this);
}

ConcreteObserver::~ConcreteObserver()
{
    mSubject.RemoveObserver(mMessage, this);
}
void ConcreteObserver::OnNotify()
{
    std::cout <<mName << " says: Hello Viki" << std::endl;
}