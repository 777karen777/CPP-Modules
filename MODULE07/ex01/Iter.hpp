#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <typename T, typename F> void iter(T *arr, size_t length,  void (*f)(const T&));
template <typename T> void printElem(const T &elem);

#endif