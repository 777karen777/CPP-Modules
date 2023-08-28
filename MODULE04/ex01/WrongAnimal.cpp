#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal's Default constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) 
{
    std::cout << "WrongAnimal's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


WrongAnimal::~WrongAnimal(void)  
{
    std::cout << "WrongAnimal's Destructor was called" << std::endl;
}

// Member Functions

    // Getters
std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

    // Setters

void WrongAnimal::setType(std::string _type)
{
    // std::cout << "setName member function called"  << std::endl;
    this->type = _type;
}

    // Other member functions

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimals make different sounds." << std::endl;
}