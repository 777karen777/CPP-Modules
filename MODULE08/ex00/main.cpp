#include "easyfind.hpp"


int main( void ) 
{
    std::vector<int> vec = {1, 2, 3};
    std::forward_list<int> fList{1, 2, 3};
    
    try
    {
        auto i = easyfind(fList, 31);
        std::cout << "First Occurence is this: " << *i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}