#pragma once
//Similar to vector for list in Subject
#include <forward_list>
#include <string>
#include <iostream>

class Observer
{
public:
    virtual ~Observer() {} //Useful for creation of other eventual observers
    virtual void OnNotify() = 0; //Reaction to the notification done by the Subject   
};