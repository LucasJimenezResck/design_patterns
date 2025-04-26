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
    ConcreteObserver obs1("Lucas");
    ConcreteObserver obs2("Sofi");

    subject.AddObserver(&obs1);
    subject.AddObserver(&obs2);
    subject.Notify();
    std::cout << std::endl;

    subject.RemoveObserver(&obs2);
    subject.Notify();


    return 0;
}
