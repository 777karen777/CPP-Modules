#include "RPN.hpp"

RPN::RPN()
{
    // std::cout << "Default constructor called." << std::endl;
}

RPN::RPN(const RPN &obj) : numbers (obj.numbers)
{
    std::cout << "Cpoy constructor called." << std::endl;
}

RPN & RPN::operator=(const RPN &obj)
{
    if(this != &obj)
    {
        numbers = obj.numbers;
    }
    std::cout << "Copy asignment operator called." << std::endl;
    return *this;
}

RPN::~RPN()
{
    // std::cout << "Destructor called." << std::endl;
}

void RPN::evaluateRPN(const std::string& expression)
{
    std::istringstream s(expression);
    std::string token;
    double operand1, operand2;

    while(s >> token)
    {
        if(isdigit(token[0]) or (token[0] == '-' and isdigit(token[1])))
        {
            numbers.push(stod(token));
        }
        else
        {
            if(numbers.size() < 2)
            {
                throw std::runtime_error("Error");
            }

            operand2 = numbers.top();
            numbers.pop();
            operand1 = numbers.top();
            numbers.pop();

            if(token == "+")
            {
                numbers.push(operand1 + operand2);
            }
            else if(token == "-")
            {
                numbers.push(operand1 - operand2);
            }
            else if(token == "*")
            {
                numbers.push(operand1 * operand2);
            }
            else if(token == "/")
            {
                if(operand1 == 0)
                {
                    throw std::runtime_error("Division by zero");
                }
                numbers.push(operand1 / operand2);
            }
            else
            {
                throw std::runtime_error("Error");
            }
        }
    }
    if(numbers.size() != 1)
    {
        throw std::runtime_error("Error");
    }
    std::cout << numbers.top() << std::endl;
    return;
}