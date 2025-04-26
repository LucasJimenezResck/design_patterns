#pragma once
//Similar to vector for list in Subject
#include <forward_list>
#include <string>
#include <iostream>

class Observer
{
public:
    Observer(std::string mName);
    void OnNotify(); //Reaction to the notification done by the Subject
private:
    std::string name;
};