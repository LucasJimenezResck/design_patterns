#include "../include/Observer.h"

Observer::Observer(std::string mName) : name(mName)
{

}
void Observer::OnNotify()
{
    std::cout <<name << " says: Hello Viki" << std::endl;
}