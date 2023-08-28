#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";

    std::cout << "Dog's Default constructor was called" << std::endl;
}

Dog::Dog(const Dog &obj) 
{
    std::cout << "Dog's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

Dog&  Dog::operator=(const Dog &obj)
{
    std::cout << "Dog's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


Dog::~Dog(void)  
{
    std::cout << "Dog's Destructor was called" << std::endl;
}

// Member Functions

 
void Dog::makeSound()  const
{
    std::cout << "HAF-HAF!!!" << std::endl;
}