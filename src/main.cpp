#include <iostream>
#include "../include/Subject.h"
//Fully implemented patterns:
//Command
//Singleton
//Factory (simple version)


int main()
{
    Subject subject;
    Observer obs1("Lucas");
    Observer obs2("Sofi");

    subject.AddObserver(&obs1);
    subject.AddObserver(&obs2);
    subject.Notify();
    std::cout << std::endl;

    subject.RemoveObserver(&obs2);
    subject.Notify();


    return 0;
}
