#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
#include <climits>
#include <iomanip>
#include "Data.hpp"




class Serializer
{
private:    

public:

    Serializer(void);
    Serializer(const Serializer &obj);
	Serializer&  operator=(const Serializer &obj);

    virtual ~Serializer();

        //Other member functions

    
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
#endif