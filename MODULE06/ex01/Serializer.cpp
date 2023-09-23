#include "Serializer.hpp"

Serializer::Serializer()
{
    
    std::cout << "Serializer's Default constructor was called" << std::endl;
}


Serializer::Serializer(const Serializer &obj)
{
    (void) obj;
    std::cout << "Serializer's Copy constructor was called" << std::endl;
}

Serializer&  Serializer::operator=(const Serializer &obj)
{
    (void) obj;
    std::cout << "Serializer's Copy asignment operator was called" << std::endl;
    
    return (*this);
}


Serializer::~Serializer(void)  
{
    std::cout << "Serializer's Destructor was called" << std::endl;
}



// Member Functions

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
