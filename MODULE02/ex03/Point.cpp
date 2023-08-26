#include "Point.hpp"

Point::Point(void):x(0), y(0)  
{
    std::cout << "Default constructor was called" << std::endl;
}

Point::~Point(void)  
{
    std::cout << "Destructor was called" << std::endl;
}

Point::Point(const Fixed& a, const Fixed& b):x(a), y(b)  
{
    std::cout << "With arguments constructor was called" << std::endl;
}

Point::Point(const Point &obj): x(obj.getX()), y(obj.getY())
{
    std::cout << "Copy constructor was called" << std::endl;
}

Point&  Point::operator=(const Point &obj)
{
    (void) obj;
    std::cout << "Copy asignment operator was called" << std::endl;
    
    return (*this);
}

const Fixed& Point::getX(void) const
{
    return this->x;
}

const Fixed& Point::getY(void) const
{
    return this->y;
}

float area(const Point A, const Point B, const Point C)
{
    float area = 0.5 * ((B.getX() - A.getX()) * (C.getY() - A.getY()) - (C.getX() - A.getX()) * (B.getY() - A.getY())).toFloat();
    return  area >= 0.0 ? area : -area;
}