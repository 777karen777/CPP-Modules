#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Wrong arguments!!!" << std::endl;
        return 0;
    }
    try
    {
        RPN obj;
        obj.evaluateRPN(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;     
}