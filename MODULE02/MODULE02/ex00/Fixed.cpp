#include "Fixed.hpp"

Fixed::Fixed(void):rawBits(0)  
{
    std::cout << "Default constructor was called" << std::endl;
}
Fixed::Fixed(Fixed &obj) 
{
    std::cout << "Copy constructor was called" << std::endl;
    *this = obj;    
    // this->rawBits = obj.getRawBits();
}
Fixed&  Fixed::operator=(Fixed &obj)
{
    std::cout << "Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->rawBits = obj.getRawBits();

    }
    return (*this);
}
Fixed::~Fixed(void)  
{
    std::cout << "Destructor was called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return (this->rawBits);
}

void Fixed::setRawBits( int const raw )
{
    this->rawBits = raw;
}
