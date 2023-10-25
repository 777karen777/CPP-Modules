#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"
//#include <iostream>

template <typename T>
Array<T>::Array() : arr(NULL), size(0)
{
	std::cout << "Default constructor was called!" << std::endl;
}

template <typename T> 
Array<T>::Array(size_t n) : size(n)
{
	arr = new T[n];
	std::cout << "Parametered constructor was called!" << std::endl;
}

template <typename T> 
Array<T>::Array(const Array &obj)
{
	// objArr = obj.getArr();
	this->size = obj.getArrSize();
	T* objArr = obj.getArr();
	arr = new T[size];
	for(size_t i = 0; i < size; ++i)
	{
		arr[i] = objArr[i];
	}
	
	std::cout << "Copy constructor was called!" << std::endl;
}

template <typename T> 
Array<T>& Array<T>::operator=(const Array &obj)
{
	if(this != &obj)
	{
		// objArr = obj.getArr();
		delete[] arr;
		this->size = obj.getArrSize();
		T* objArr = obj.getArr();
		arr = new T[size];
		for(size_t i = 0; i < size; ++i)
		{
			arr[i] = objArr[i];
		}

	}
	
	std::cout << "Copy asignment operator was called!" << std::endl;
	return *this;
}

template <typename T>
T & Array<T>::operator[](const int index) const
{
	if(index < 0 || index >= static_cast<int>(this->getArrSize()))
	{
		throw std::out_of_range("Index is out of bounds!!!");
	}
	return this->arr[index];
}

template <typename T> 
Array<T>::~Array()
{
	delete[] arr;
	std::cout << "Destructor was called!" << std::endl;
}

template <typename T> 
size_t Array<T>::getArrSize() const
{
	return this->size;
}

template <typename T> 
T * Array<T>::getArr() const
{
	return this->arr;
}



#endif

