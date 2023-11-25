#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <forward_list>

#include <stdexcept>
#include <iostream>

class Span
{
private:
    size_t max;
    std::vector <int> cont;
public:
    Span();
    Span(size_t max);
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    ~Span();

    void addNumber(int);
    size_t shortestSpan();
    size_t longestSpan();
    void fillCont(std::vector<int>);
};

#endif