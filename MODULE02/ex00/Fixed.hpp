#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Fixed
{
private:
	int rawBits;
	static const int fractionalBits = 8;

public:
	Fixed(void);
	Fixed(Fixed &obj);
	Fixed&  operator=(Fixed &obj);
	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif