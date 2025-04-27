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
    ConcreteObserver obs1(subject, "Lucas");
    ConcreteObserver obs2(subject, "Sofi");
    //Problems arise when calling an observer or adding it out of scope
    {
    ConcreteObserver obs3(subject, "Liz");
    //Add observer function is now called in the constructor
    //subject.AddObserver(&obs3);
    //subject.AddObserver(&obs1);
    //subject.AddObserver(&obs2);
    }
    subject.Notify();
    std::cout << std::endl;

    //subject.RemoveObserver(&obs2);
    subject.Notify();


    return 0;
}
