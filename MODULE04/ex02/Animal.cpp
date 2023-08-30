#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal's Default constructor was called" << std::endl;
}

Animal::Animal(const Animal &obj) 
{
    std::cout << "Animal's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

Animal&  Animal::operator=(const Animal &obj)
{
    std::cout << "Animal's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


Animal::~Animal(void)  
{
    std::cout << "Animal's Destructor was called" << std::endl;
}

// Member Functions

    // Getters
std::string Animal::getType(void) const
{
    return (this->type);
}

    // Setters

void Animal::setType(std::string _type)
{
    // std::cout << "setName member function called"  << std::endl;
    this->type = _type;
}

    // Other member functions

// void Animal::makeSound() const
// {
//     std::cout << "Animals make different sounds." << std::endl;
// }