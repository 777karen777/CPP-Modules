#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T> 
size_t easyfind(const T &cont, int n)
{
    size_t ind = 0;
    for(auto i = cont.begin(); i != cont.end(); i++)
    {
        if(*i == n)
        {
            return ind;
        }
        ind++;
    }
    throw std::runtime_error("No occurrence is found !");
}

#endif