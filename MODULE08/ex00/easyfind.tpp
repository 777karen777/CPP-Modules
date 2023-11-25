#ifndef EASYFIND_TPP
# define EASYFIND_TPP
#include "easyfind.hpp"

template <typename T> 
typename T::iterator easyfind(T &cont, int n)
{
    typename T::iterator i = std::find(cont.begin(), cont.end(), n);    
    // if(*i == n)
    if(i != cont.end())
    {
        return i;
    }    
    throw std::runtime_error("No occurrence is found !");
}

#endif