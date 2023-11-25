#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
#include <iterator>
#include <ctype.h>
#include <iomanip>


typedef std::map<std::string, double, std::greater<std::string> > Map;



class BitcoinExchange
{
private:
    Map exchange_rates;
public:
    BitcoinExchange();
   // BitcoinExchange(size_t max);
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange &operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

    // void addNumber(int);
    // size_t shortestBitcoinExchange();
    // size_t longestBitcoinExchange();
    // void fillCont(std::vector<int>);

    void read_exchange_rate();
    void read_arg_file(std::string file);
    void print_map(); //remove
    double count_total(std::string date, std::string deposit);

};

int valid_word_count(std::string s, char delim);
bool valid_date_check(std::string s, char delim);
bool isNumber(const std::string& s);
bool isLeap(int year);
bool valid_deposit_check(std::string s);
bool isFileNotEmpty(const std::string& filename);
std::string remove_ws(const std::string& str);



#endif