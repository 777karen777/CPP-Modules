#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int rawBits;
	static const int fractionalBits = 8;

public:
	Fixed(void);
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &obj);
	Fixed&  operator=(const Fixed &obj);
	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream &operator <<(std::ostream &ost, const Fixed &obj);

#endif