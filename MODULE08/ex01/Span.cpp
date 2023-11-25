#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called." << std::endl;
}

Span::Span(size_t _max) : max(_max)
{
    std::cout << "Parametered constructor called." << std::endl;
}

Span::Span(const Span &obj) : max (obj.max) /* , cont(obj.cont) */
{
    // cont = obj.cont;
    cont.assign(obj.cont.begin(), obj.cont.end());
    std::cout << "Cpoy constructor called." << std::endl;
}

Span & Span::operator=(const Span &obj)
{
    if(this != &obj)
    {
        max = obj.max;
        cont = obj.cont;
    }
    std::cout << "Copy asignment operator called." << std::endl;
    return *this;
}

Span::~Span()
{
    std::cout << "Destructor called." << std::endl;
}

void Span::addNumber(int n)
{
    if(cont.size() < max)
    {
        cont.push_back(n);
        return;
    }
    throw std::runtime_error("The container is already full!");
}

size_t Span::shortestSpan()
{
    if(cont.size() > 1)
    {
        std::sort(cont.begin(), cont.end());
        int shortest = cont[1] - cont[0] ;
        for(size_t i = 2; i < cont.size(); ++i)
        {
            if(cont[i] - cont[i - 1] < shortest)
            {
                shortest = cont[i] - cont[i - 1];
            }
        }
        return shortest;
    }
    throw std::runtime_error("There is not enough elements in the container!");
}

size_t Span::longestSpan()
{
    if(cont.size() > 1)
    {
        return *max_element(cont.begin(), cont.end()) - *min_element(cont.begin(), cont.end());
    }
    throw std::runtime_error("There is not enough elements in the container!");
}

void Span::fillCont(std::vector<int> elems)
{
    if(elems.size() + cont.size() <= max)
    {
        cont.insert(cont.end(), elems.begin(), elems.end());
        return;
    }
    throw std::runtime_error("The container can't hold so many elements!");
}



// template <typename T> 
// size_t easyfind(const T &cont, int n)
// {
//     size_t ind = 0;
//     for(auto i = cont.begin(); i != cont.end(); i++)
//     {
//         if(*i == n)
//         {
//             return ind;
//         }
//         ind++;
//     }
//     throw std::runtime_error("No occurrence is found !");
// }