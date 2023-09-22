#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
#include <climits>
#include <iomanip>




class ScalarConverter
{
private:

    

public:

    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &obj);
	ScalarConverter&  operator=(const ScalarConverter &obj);

    virtual ~ScalarConverter();

        //Other member functions

    static void convert(std::string);
    static void printAll(std::string c, std::string i, std::string f, std::string d);
    static int validDot(std::string);
    static int validE(std::string);
    static int validF(std::string);
    static int validSumbs(std::string);
    static double isValid(std::string);
};
#endif