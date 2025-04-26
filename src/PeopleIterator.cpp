#include "../include/PeopleIterator.h"

void PeopleIterator::TraverseData(People* peopledata)
{
    //Prints out the values like a stack, last elements first
    for(it = peopledata->getMap().begin(); it != peopledata->getMap().end(); it++)
    {
        std::cout << it->first << " - " << it->second <<std::endl;
    }
}