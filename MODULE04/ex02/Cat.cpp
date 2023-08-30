#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    mozg = new Brain;
    std::cout << "Cat's Default constructor was called" << std::endl;
}



Cat::Cat(const Cat &obj) 
{
    std::cout << "Cat's Copy constructor was called" << std::endl;
    this->type = obj.type;    
    mozg = new Brain;
    *mozg = *(obj.mozg);
}

Cat&  Cat::operator=(const Cat &obj)
{
    std::cout << "Cat's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;    
        // mozg = new Brain;
        *mozg = *(obj.mozg);
    }
    return (*this);
}


Cat::~Cat(void)  
{
    delete (mozg);
    std::cout << "Cat's Destructor was called" << std::endl;
}

// Member Functions


void Cat::makeSound() const
{
    std::cout << "MIAU-MIAU!!!" << std::endl;
}