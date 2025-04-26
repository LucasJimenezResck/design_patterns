#include "../include/Subject.h"

void Subject::AddObserver(Observer* observer)
{
    //Instead of push back: similar to stack where last element is the first to be called
    mObservers.push_front(observer);
}
void Subject::RemoveObserver(Observer* observer)
{
    mObservers.remove(observer);
}
void Subject::Notify()
{
    for(const auto& o: mObservers)
    {
        o->OnNotify();
    }
}