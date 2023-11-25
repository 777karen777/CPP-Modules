#ifndef RPN_HPP
# define RPN_HPP


#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>


class RPN
{
private:
    std::stack<double> numbers;
public:
    RPN();
    RPN(const RPN &obj);
    RPN &operator=(const RPN &obj);
    ~RPN();

    void evaluateRPN(const std::string& expression);

};

#endif