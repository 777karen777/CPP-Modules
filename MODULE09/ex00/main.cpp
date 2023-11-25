#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 0;
    }
    if(isFileNotEmpty(argv[1]))
    {
        BitcoinExchange obj;
        obj.read_exchange_rate();
        obj.read_arg_file(argv[1]);
    }
    
    return 0;     
}
 