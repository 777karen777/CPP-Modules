#include "Iter.hpp"

template <typename T, typename F> void iter(T *arr, size_t length, F f/* void (*f)(const T&) */)
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


// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }