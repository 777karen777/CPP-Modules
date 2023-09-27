#include "Iter.hpp"

template <typename T> void iter(T *arr, size_t length, void (*f)(const T&))
{
    for(size_t i = 0; i < length; ++i)
    {
        f(arr[i]);
    }
}
template <typename T> void printElem(const T &elem)
{
    std::cout << elem << std::endl;
}


int main( void ) 
{
    int a[] = {1,2,3,4,5};
    char c[] = {'a','b', 'c', 'd'};

    int na = sizeof(a) / sizeof(a[0]);    
    int nc = sizeof(c) / sizeof(c[0]);
    iter<int>(a, na, printElem<int>);
    std::cout << std::endl << "next" << std::endl;
    iter<char>(c, nc, printElem<char>);
    return 0;
}