#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
#include <climits>
#include <iomanip>




class Serializer
{
private:

    

public:

    Serializer(void);
    Serializer(const Serializer &obj);
	Serializer&  operator=(const Serializer &obj);

    virtual ~Serializer();

        //Other member functions

    // static void convert(std::string);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

    // static void printAll(std::string c, std::string i, std::string f, std::string d);
    // static int validDot(std::string);
    // static int validE(std::string);
    // static int validF(std::string);
    // static int validSumbs(std::string);
    // static double isValid(std::string);
};
#endif