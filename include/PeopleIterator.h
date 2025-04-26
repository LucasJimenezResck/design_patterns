#pragma once
#include "People.h"
#include <iostream>
#include <iterator>
class PeopleIterator
{
private:
    data_map::iterator it;
public:
    void TraverseData(People* peopledata);
};