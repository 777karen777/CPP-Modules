#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *arr, size_t length,  void (*f)(const T&));
template <typename T> void printElem(const T &elem);

#endif