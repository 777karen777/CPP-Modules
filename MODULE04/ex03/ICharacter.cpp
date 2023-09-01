#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria's Default constructor was called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria's Default constructor was called" << std::endl;
}

AMateria::AMateria(const AMateria &obj) 
{
    std::cout << "AMateria's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

AMateria&  AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


AMateria::~AMateria(void)  
{
    std::cout << "AMateria's Destructor was called" << std::endl;
}

// Member Functions

    // Getters
std::string AMateria::getType(void) const
{
    return (this->type);
}

    // Setters

void AMateria::setType(std::string _type)
{
    // std::cout << "setName member function called"  << std::endl;
    this->type = _type;
}

    // Other member functions

