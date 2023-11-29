#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Default constructor called." << std::endl;
}

PmergeMe::PmergeMe(std::vector<int> v) : v_nums(v)
{
    std::deque<int> l(v.begin(), v.end());
    l_nums = l;
    // std::cout << "Default constructor called." << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &obj) : v_nums (obj.v_nums), l_nums (obj.l_nums)
{
    std::cout << "Cpoy constructor called." << std::endl;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &obj)
{
    if(this != &obj)
    {
        v_nums = obj.v_nums;
        l_nums = obj.l_nums;
    }
    std::cout << "Copy asignment operator called." << std::endl;
    return *this;
}

PmergeMe::~PmergeMe()
{
    // std::cout << "Destructor called." << std::endl;
}

std::vector<int> PmergeMe::get_v_nums()
{
    return v_nums;
}

std::deque<int> PmergeMe::get_l_nums()
{
    return l_nums;
}

bool isNumber(const std::string& s)
{
    // std::string s = remove_ws(str);
    std::istringstream iss(s);
    int num;
    char remaining;

    // Attempt to extract a int
    if (!(iss >> num) || iss.get(remaining))
    {
        return false; // Failed to extract a valid int or there are extra characters
    }

    // Check for overflow or underflow
    if (num == std::numeric_limits<int>::infinity() || num == -std::numeric_limits<int>::infinity()) {
        return false;
    }

    return true;
}





