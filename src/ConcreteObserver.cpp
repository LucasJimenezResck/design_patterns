#include "../include/ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(const std::string& mName) : name(mName)
{

}
void ConcreteObserver::OnNotify()
{
    std::cout <<name << " says: Hello Viki" << std::endl;
}