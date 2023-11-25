#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <forward_list>

#include <stdexcept>
#include <iostream>

template <typename T> 
typename T::iterator easyfind(T &cont, int n);

#include "easyfind.tpp"


#endif