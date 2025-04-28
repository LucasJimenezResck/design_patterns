#include <iostream>
#include "../include/ConcreteSubject.h"
#include "../include/ConcreteObserver.h"
//Fully implemented patterns:
//Command
//Singleton
//Factory (simple version)


int main()
{
    ConcreteSubject subject;
    ConcreteObserver obs1(subject, LOG, "Lucas");
    ConcreteObserver obs2(subject, HANDLEPHYSICS,"Sofi");
    //Problems arise when calling an observer or adding it out of scope
    
    {
    ConcreteObserver obs3(subject, PLAYSOUND, "Liz");
    //Add observer function is now called in the constructor
    //subject.AddObserver(&obs3);
    //subject.AddObserver(&obs1);
    //subject.AddObserver(&obs2);
    }
    ConcreteObserver obs4(subject, PLAYSOUND, "Liz");
    subject.NotifyAll();
    std::cout << std::endl;

    //subject.RemoveObserver(&obs2);
    subject.Notify(LOG);


    return 0;
}
