#include "../include/People.h"

void People::addPersonData(std::string name, int date)
{
    name_birthday[name] = date;
}

//EXPERIMENTATION CODE (I didn't know where to put it, they show other examples of iteration)


//Create iterator which traverses the vector, it can also be set to constant so no value of
//The structure can be modified during the iteration
//there is also reverse_iterator with rbegin and rend
#if 0
std::vector<int> values {0,1,2,3,4,5,6,7,8,9};
for(std::vector<int>::const_iterator it = values.cbegin(); it != values.end(); it++)
{

    std::cout << *it << ",";
    //(*it)++; //Not allowed for constant iteration
}
#endif

#if 0
std::vector<int> values {0,1,2,3,4,5,6,7,8,9};
//Advanced use of iterators
//There is also the for(const auto e: values)
auto it = values.begin();
while(it != values.end())
{
    auto element = std::next(it, 0); //Pick the current element of it (0)
    std::cout << *element << ",";
    std::advance(it, 1); //Equivalent to it++
}
std::cout << std::endl;
#endif