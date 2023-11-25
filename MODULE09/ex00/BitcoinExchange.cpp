#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    // std::cout << "Default constructor called." << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) : exchange_rates (obj.exchange_rates)
{
    std::cout << "Cpoy constructor called." << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    if(this != &obj)
    {
        exchange_rates = obj.exchange_rates;
    }
    std::cout << "Copy asignment operator called." << std::endl;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "Destructor called." << std::endl;
}

void BitcoinExchange::read_exchange_rate()
{
    std::fstream fin;
    
    fin.open("data.csv", std::ios::in);
    
    std::string line, date, rate;
    getline(fin, line); // To esclude the first ` header line.

    while (getline(fin, line))
    {
        std::stringstream s(line);

        getline(s, date, ',');
        getline(s, rate, ',');
        exchange_rates.insert(std::pair<std::string, double>(remove_ws(date), stod(rate)));
    }
    fin.close();
}

void BitcoinExchange::read_arg_file(std::string file)
{
    std::fstream fin;
    fin.open(file, std::ios::in);
    
    std::string line, date, deposit;
    double total;
    getline(fin, line); // To esclude the first ` header line.

    while (getline(fin, line)) 
    {
        if(valid_word_count(line, '|') != 2)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::stringstream s(line);

        getline(s, date, '|');
        getline(s, deposit, '|');
        
        if(valid_date_check(date, '-') == false)
        {
            std::cout << "Error: bad input7 => " << line << std::endl;
            continue;
        }

        if(valid_deposit_check(deposit) == false)
        {
            continue;
        }
        date = remove_ws(date);
        deposit = remove_ws(deposit);

        total = count_total(date, deposit);
        std::cout << date << " => " << deposit << " = " << std::setprecision(15) << total << std::endl;

    }

    fin.close();
}

double BitcoinExchange::count_total(std::string date, std::string deposit)
{
    Map::iterator itr = exchange_rates.lower_bound(date);
    // std::cout << " M_date - " << itr->first << " M_val - " << itr->second  << " arg_date - " << date << " dep - " << stod(deposit) << "  === ";
    return (stod(deposit) * itr->second);
}


void BitcoinExchange::print_map()
{
    Map::iterator itr = exchange_rates.begin();
    for(; itr != exchange_rates.end(); ++itr)
    {
        std::cout << '\t' << itr->first << '\t' << itr->second << std::endl;
    }
}

int valid_word_count(std::string s, char delim)
{
    int count = 0;
    if(s.front() == delim or s.back() == delim)
    {
        return 0;
    }
    if (!s.empty())
    {
        count++;
    }
    size_t found = s.find(delim);
    while(found != std::string::npos)
    {
        count++;
        found = s.find(delim, found + 1);
    }
    return count;

}

bool valid_date_check(std::string s, char delim)
{
    if(valid_word_count(s, delim) != 3)
    {
        return false;
    }


    const int MAX_VALID_YR = 9999; 
    const int MIN_VALID_YR = 2008;

    int         year, month, day;
    std::string s_year, s_month, s_day;

    std::stringstream str(s);

    getline(str, s_year, delim);
    getline(str, s_month, delim);
    getline(str, s_day, delim);
    
    if(isNumber(s_year) == false or isNumber(s_month) == false or isNumber(s_day) == false)
    {
        return false;
    }

    year = stoi(s_year);
    month = stoi(s_month);
    day = stoi(s_day);
 
    if (year > MAX_VALID_YR || year < MIN_VALID_YR) 
        return false; 
    if (month < 1 || month > 12) 
        return false; 
    if (day < 1 || day > 31) 
        return false; 
  
    // Handle February month  
    // with leap year 
    if (month == 2) 
    { 
        if (isLeap(year)) 
            return (day <= 29); 
        else
            return (day <= 28); 
    } 
  
    // Months of April, June,  
    // Sept and Nov must have  
    // number of days less than 
    // or equal to 30. 
    if (month == 4 || month == 6 || month == 9 || month == 11) 
        return (day <= 30); 
  
    return true; 
}

bool valid_deposit_check(std::string s)
{
    if(!isNumber(s))
    {
        return false;
    }
    double deposit = stod(s);
    if(deposit < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else if(deposit > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool isNumber(const std::string& str)
{
    std::string s = remove_ws(str);
    std::istringstream iss(s);
    double num;
    char remaining;

    // Attempt to extract a double
    if (!(iss >> num) || iss.get(remaining))
    {
        return false; // Failed to extract a valid double or there are extra characters
    }

    // Check for overflow or underflow
    if (num == std::numeric_limits<double>::infinity() || num == -std::numeric_limits<double>::infinity()) {
        return false;
    }

    return true;
}



bool isLeap(int year) 
{ 
    // Return true if year  
    // is a multiple of 4 and 
    // not multiple of 100. 
    // OR year is multiple of 400. 
    return (((year % 4 == 0) &&  
            (year % 100 != 0)) || 
            (year % 400 == 0)); 
} 

bool isFileNotEmpty(const std::string& filename)
{
    std::ifstream file(filename);

    // Check if the file is open (exists)
    if (!file.is_open()) {
        std::cerr << "Error: File '" << filename << "' not found or could not be opened." << std::endl;
        return false;
    }

    // Check if the file is empty
    file.seekg(0, std::ios::end);
    if (file.tellg() == 0) {
        std::cerr << "Error: File '" << filename << "' is empty." << std::endl;
        return false;
    }

    return true;
}

std::string remove_ws(const std::string& str)
{
    size_t first_not_ws = str.find_first_not_of(" \t\n\r\f\v");
    size_t last_not_ws = str.find_last_not_of(" \t\n\r\f\v");
    if(first_not_ws == std::string::npos)
    {
        return "";
    }
    return str.substr(first_not_ws, last_not_ws - first_not_ws + 1);
}
