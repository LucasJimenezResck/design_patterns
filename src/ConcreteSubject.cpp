#include "../include/ConcreteSubject.h"

void ConcreteSubject::AddObserver(int message, Observer* observer)
{
    //Search for specifictype
    auto it = mObservers.find(message);
    if(it == mObservers.end())
    {
        mObservers[message] = ObserversList();
    }
    //Instead of push back: similar to stack where last element is the first to be called
    mObservers[message].push_front(observer);
}
void ConcreteSubject::RemoveObserver(int message, Observer* observer)
{
    auto it = mObservers.find(message);
    if(it != mObservers.end())
    {
        ObserversList& mList = mObservers[message];
        for(ObserversList::iterator li = mList.begin(); li != mList.end(); li++)
        {
            if(*li == observer)
                mList.remove(observer);
            
        }
    }
    mObservers[message].remove(observer);
}
void ConcreteSubject::Notify(int message)
{
    for(const auto &o: mObservers[message])
    {
        o->OnNotify();
    }
}

void ConcreteSubject::NotifyAll()
{
    for(ObserversMap::iterator it = mObservers.begin(); it != mObservers.end(); it++)
    {
        for(const auto& o: mObservers[it->first])
        {
            o->OnNotify();
        }
    }
}