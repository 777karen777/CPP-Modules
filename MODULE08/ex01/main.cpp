// #include "easyfind.hpp"


// int main( void ) 
// {
//     std::vector<int> vec = {1, 2, 3};
//     std::forward_list<int> fList{1, 2, 3};
    
//     try
//     {
//         int i = easyfind(fList, 3);
//         std::cout << "First Occurence is at " << i << " index!" << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     return 0;
// }

#include "Span.hpp"

int main()
{

     try
    {
        Span sp = Span(5);
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // std::vector<int> v = {6, 3, 17, 25, 11};
        // sp.fillCont(v);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}