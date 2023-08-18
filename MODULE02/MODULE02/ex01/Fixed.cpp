#include "Fixed.hpp"

Fixed::Fixed(void):rawBits(0)  
{
    std::cout << "Default constructor was called" << std::endl;
}
Fixed::Fixed(const int value):rawBits(value << fractionalBits)  
{
    std::cout << "Int constructor was called" << std::endl;
}
Fixed::Fixed(const float value):rawBits(roundf(value * (1 << fractionalBits)))  
{
    std::cout << "Float constructor was called" << std::endl;
}
Fixed::Fixed(const Fixed &obj) 
{
    std::cout << "Copy constructor was called" << std::endl;
    *this = obj;    
}
Fixed&  Fixed::operator=(const Fixed &obj)
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

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(rawBits) / (1 << fractionalBits));
}
int Fixed::toInt( void ) const
{
    return (rawBits >> fractionalBits);
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

std::ostream &operator <<(std::ostream &ost, const Fixed &obj)
{
    ost << obj.toFloat();
    return ost;
}

