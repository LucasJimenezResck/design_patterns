#include "../include/ConcreteSubject.h"

void ConcreteSubject::AddObserver(Observer* observer)
{
    //Instead of push back: similar to stack where last element is the first to be called
    mObservers.push_front(observer);
}
void ConcreteSubject::RemoveObserver(Observer* observer)
{
    mObservers.remove(observer);
}
void ConcreteSubject::Notify()
{
    for(const auto& o: mObservers)
    {
        o->OnNotify();
    }
}