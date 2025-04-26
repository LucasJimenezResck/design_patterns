#include <iostream>
//Necessary libraries for these examples
#include <iterator>
#include "../include/PeopleIterator.h"
//Fully implemented patterns:
//Command
//Singleton
//Factory (simple version)

//Iterator pattern
//Used when dealing with a collection of elements and want to iterate through the next element
//and traverse the structure. Add consistent way to traverse the structure (many variants as well)
int main()
{

    People* mPeopleData = new People;
    PeopleIterator mIterator;
    mPeopleData->addPersonData("Victoria", 2309);
    mPeopleData->addPersonData("Valeria", 3008);
    mIterator.TraverseData(mPeopleData);
    delete mPeopleData;

    return 0;
}
