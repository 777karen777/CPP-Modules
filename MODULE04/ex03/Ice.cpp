#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice's Default constructor was called" << std::endl;
}

Ice::Ice(const Ice &obj) 
{
    std::cout << "Ice's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

Ice&  Ice::operator=(const Ice &obj)
{
    std::cout << "Ice's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


Ice::~Ice(void)  
{
    std::cout << "Ice's Destructor was called" << std::endl;
}

// Member Functions

AMateria* Ice::clone() const
{
    AMateria *newClone = new Ice();
    std::cout << "Ice's \"clone\" function called." << std::endl;
    return newClone;
}
void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
