#include "Templates.hpp"



template <typename T> void swap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> T min(T &a, T &b)
{
    return a < b ? a : b;
}

template <typename T> T max(T &a, T &b)
{
    return a > b ? a : b;
}

// int main()
// {
int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
    // int a = 2;
    // int b = 1;
    // std::cout << "Max is " << max(a, b) << std::endl;
    /* swap(a,b);
    std::cout << "int a == " << a << std::endl;
    std::cout << "int b == " << b << std::endl;
    char a1 = 'a';
    char b1 = 'b';
    swap(a1,b1);
    std::cout << "char a1 == " << a1 << std::endl;
    std::cout << "char b1 == " << b1 << std::endl; */
//     return 0;
// }