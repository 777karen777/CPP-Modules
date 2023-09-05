#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    mozg = new Brain;
    std::cout << "Dog's Default constructor was called" << std::endl;
}

Dog::Dog(const Dog &obj) 
{
    std::cout << "Dog's Copy constructor was called" << std::endl;
    this->type = obj.type;    
    mozg = new Brain;
    *mozg = *(obj.mozg);
}

Dog&  Dog::operator=(const Dog &obj)
{
    std::cout << "Dog's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;  
        *mozg = *(obj.mozg);
    }
    return (*this);
}


Dog::~Dog(void)  
{
    delete (mozg);
    std::cout << "Dog's Destructor was called" << std::endl;
}

// Member Functions

 
void Dog::makeSound()  const
{
    std::cout << "HAF-HAF!!!" << std::endl;
}