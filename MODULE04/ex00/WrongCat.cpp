#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat's Default constructor was called" << std::endl;
}



WrongCat::WrongCat(const WrongCat &obj) 
{
    std::cout << "WrongCat's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

WrongCat&  WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
    }
    return (*this);
}


WrongCat::~WrongCat(void)  
{
    std::cout << "WrongCat's Destructor was called" << std::endl;
}

// Member Functions


void WrongCat::makeSound() const
{
    std::cout << "MIAU-MIAU!!!" << std::endl;
}