#ifndef PmergeMe_HPP
# define PmergeMe_HPP


#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
#include <iostream>
#include <iomanip>  // Added for std::setprecision
#include <vector>
#include <deque>
#include <algorithm>
#include <chrono>
#include <type_traits>
#include <time.h>


class PmergeMe
{
private:
    std::vector<int> v_nums;
    std::deque<int> l_nums;
public:
    PmergeMe();
    PmergeMe(std::vector<int> v);
    PmergeMe(const PmergeMe &obj);
    PmergeMe &operator=(const PmergeMe &obj);
    ~PmergeMe();
    std::vector<int> get_v_nums();
    std::deque<int> get_l_nums();


};
bool isNumber(const std::string& str);


template <typename Container, typename T>
int binarySearch(const Container& arr, const T& key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low;
}

// Insertion sort using binary search
template <typename Container, typename T>
void insertion_sort(Container& sortedContainer, const Container& toInsert) {
    typename Container::const_iterator it = toInsert.begin();

    while (it != toInsert.end()) {
        int position = binarySearch(sortedContainer, *it, 0, sortedContainer.size() - 1);
        sortedContainer.insert(sortedContainer.begin() + position, *it);
        ++it;
    }
}

template <typename Container>
void displaySequence(const std::string& text, const Container& container) {
    std::cout << text;
    
    for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    
    std::cout << std::endl;
}


template<typename Container>
void merge_ins_sort(Container &v)
{
    if(v.size() == 1)
    {
        return;
    }
    Container a, b;
    typename Container::iterator it = v.begin();
    for(; it != v.end() && it + 1 != v.end(); it += 2)
    {
        a.push_back((*it > *(it + 1)) ? *it : *(it + 1));
        b.push_back((*it < *(it + 1)) ? *it : *(it + 1));
        /* if(*it > *(it + 1))
        {
            a.push_back(*it);
            b.push_back(*(it + 1));
        }
        else
        {
            a.push_back(*(it + 1));
            b.push_back(*it);
        } */
    }
    if(it != v.end())
    {
        b.push_back(*it);
    }
    merge_ins_sort(a);
    insertion_sort<Container, int>(a, b);
    v = a;
}
#endif