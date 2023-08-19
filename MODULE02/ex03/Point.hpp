#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point(void);
    Point(const Fixed a, const Fixed b);
    Point(const Point &obj);
    Point& operator=(const Point &obj);
    ~Point();

    //Member Functions

    const Fixed& getX(void) const;
    const Fixed& getY(void) const;

};
float area(const Point A, const Point B, const Point C);
bool bsp(const Point a, const Point b, const Point c, const Point point);




#endif