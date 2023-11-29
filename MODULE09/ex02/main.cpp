#include <iostream>
#include <iomanip>  // Added for std::setprecision
#include <vector>
#include <deque>
#include <algorithm>
#include <chrono>
#include <type_traits>

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Wrong Arguments! Please provide a positive integer sequence." << std::endl;
        return 1;
    }
    std::vector<int> v;
    std::string token;
    int num;
    clock_t vec_st, vec_end, dq_st, dq_end;
    for (int i = 1; i < argc; ++i)
    {
        std::istringstream s(argv[i]);
        while(s >> token)
        {
            try
            {
                if(!isNumber(token))
                {
                    throw std::invalid_argument("Arguments should be positive integers!");
                }
                num = std::stoi(token);
                if (num < 0)
                {
                    throw std::invalid_argument("Negative integer!!! Arguments should be positive integers!");
                }
                v.push_back(num);
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error: "  << e.what() << '\n';
                return 1;
            }
            
        }
    }
    PmergeMe obj(v);
    std::vector<int> vec = obj.get_v_nums();
    std::deque<int> dq = obj.get_l_nums();

    displaySequence<std::vector<int>>("Before: ", vec);
    // displaySequence("The deque is ", dq);

    vec_st = clock();
    merge_ins_sort<std::vector<int>>(vec);
    vec_end = clock();
    dq_st = clock();
    merge_ins_sort<std::deque<int>>(dq);
    dq_end = clock();
    displaySequence<std::vector<int>>("After: ", vec);
    std::cout << "Time to process a range of 3000 elements with std::[..] : " << std::fixed <<( static_cast<double>(vec_end - vec_st)) / 1000000 << " us" << std::endl;
    std::cout << "Time to process a range of 3000 elements with std::[..] : " << std::fixed <<( static_cast<double>(dq_end - dq_st)) / 1000000 << " us" << std::endl;
    // std::cout << "Time to process a range of 3000 elements with std::[..] : " << (dq_end - dq_st) / 1000000 << " us" << std::endl;
    // displaySequence<std::deque<int>>("After sort The deque is ", dq);

   /*  for(size_t i = 0; i < dq.size(); ++i)
    {
        std::cout << " " << dq[i];
    } */
    return 0;
}