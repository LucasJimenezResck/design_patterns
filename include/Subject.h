#pragma once
#include "Observer.h"

#include <unordered_map>


//There will now be many types of observer with their own features, and to keep track of them new 
//attributes need to be added
//Possible small improvements to the code may include using smart pointers instead of raw pointers
//or other data structures like vectors to accelerate traversion
//There is also linked implementation to avoid dynamic allocation
typedef enum {PLAYSOUND, HANDLEPHYSICS, LOG} MessageType;
class Subject
{
public:
    virtual void AddObserver(int message, Observer* observer) = 0;
    virtual void RemoveObserver(int message, Observer* observer) = 0;
    virtual void Notify(int message) = 0;
    virtual void NotifyAll() = 0;
    Subject() {}
    virtual ~Subject() {}
protected:
    //Using special types for different types of observers
    typedef std::forward_list<Observer*> ObserversList; 
    //std::forward_list<Observer*> mObservers;
    //Int refers to a key which 
    typedef std::unordered_map<int, ObserversList> ObserversMap;
    
    ObserversMap mObservers;
};