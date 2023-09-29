#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template <typename T> 
class Array
{
private:
	T *arr;
	size_t size;
public:
	Array();
	Array(size_t n);
	Array(const Array &obj);
	Array &operator=(const Array &obj);
	T &operator[](const int index) const;
	~Array();

	size_t getArrSize() const;
	T *getArr() const;
};

#include "Array.tpp"

#endif
