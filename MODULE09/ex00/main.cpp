#include "BitcoinExchange.hpp"

// using namespace std;

/* void read_exchange_rate()
{
    // File pointer
    std::fstream fin; // Changed fstream to ifstream for reading

    // Open an existing file
    fin.open("data.csv", std::ios::in);

   
    // Map exchange_rates;
    std::string line, date, rate;
    getline(fin, line); // To esclude the first ` header line.

    while (getline(fin, line)) // Removed the redundant fin >> temp
    {
        std::stringstream s(line);

        getline(s, date, ',');
        getline(s, rate, ',');
        // if(date == "date")
        // {
        //     continue;
        // }


        exchange_rates.insert(std::pair<std::string, int>(date, stod(rate)));
            
       
    }
} */

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
        // obj.print_map(); // to remove
    }

    // std::cout << valid_word_count("2001-42-42|g", '|') << std::endl;


    return 0;     
}
 