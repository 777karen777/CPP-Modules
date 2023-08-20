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

// comparison operators overloading

bool Fixed::operator>(const Fixed &obj) const
{
    return(this->rawBits > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
    return(this->rawBits < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return (this->rawBits >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return (this->rawBits <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
    return (this->rawBits == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return (this->rawBits != obj.getRawBits());
}

// arithmetic operators overloading

const Fixed Fixed::operator+(const Fixed &obj) const
{
   Fixed newObj;
   newObj.rawBits = this->rawBits + obj.getRawBits();
   return newObj;
}

const Fixed Fixed::operator-(const Fixed &obj) const
{
   Fixed newObj;
//    std::cout << "hi " << this->rawBits << " kk " << obj.getRawBits() << std::endl;
   newObj.rawBits = this->rawBits - obj.getRawBits();
   return newObj;
}
const Fixed Fixed::operator*(const Fixed &obj) const
{
   Fixed newObj;
   newObj.rawBits = this->rawBits * obj.getRawBits() / (1 << this->fractionalBits);
   return newObj;
}
const Fixed Fixed::operator/(const Fixed &obj) const
{
   Fixed newObj;
   newObj.rawBits = this->rawBits * (1 << this->fractionalBits) / obj.getRawBits();
   return newObj;
}

// increment/decrement (pre-increment and post-increment, 
//pre-decrement and post-decrement)  operators overloading

Fixed& Fixed::operator++(void) // pre-increment
{
    this->rawBits++;
    return (*this);
}

Fixed& Fixed::operator--(void) // pre-decrement
{
    this->rawBits--;
    return (*this);
}

Fixed Fixed::operator++(int) // post-increment
{
    Fixed tmpObj = *this;
    this->rawBits++;
    return (tmpObj);
}
Fixed Fixed::operator--(int) // post-decrement
{
    Fixed tmpObj = *this;
    this->rawBits--;
    return (tmpObj);
}




// Destructor

Fixed::~Fixed(void)  
{
    std::cout << "Destructor was called" << std::endl;
}

// Member Functions

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




// Non Member Functions

std::ostream &operator <<(std::ostream &ost, const Fixed &obj)
{
    ost << obj.toFloat();
    return ost;
}

