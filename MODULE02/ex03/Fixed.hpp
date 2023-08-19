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

	bool operator>(const Fixed &obj) const;
	bool operator<(const Fixed &obj) const;
	bool operator>=(const Fixed &obj) const;
	bool operator<=(const Fixed &obj) const;
	bool operator==(const Fixed &obj) const;
	bool operator!=(const Fixed &obj) const;

	const Fixed operator+(const Fixed &obj) const;
	const Fixed operator-(const Fixed &obj) const;
	const Fixed operator*(const Fixed &obj) const;
	const Fixed operator/(const Fixed &obj) const;

	Fixed& operator++(void); // pre-increment
	Fixed& operator--(void); // pre-decrement
	Fixed operator++(int); // post-increment
	Fixed operator--(int); // post-decrement


	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed& min(Fixed &obj1, Fixed &obj2) 
	{
		return (obj1 < obj2 ? obj1 : obj2);
	}

	static const Fixed& min(const Fixed &obj1, const Fixed &obj2)
	{
		return (obj1 < obj2 ? obj1 : obj2);
	}
	static Fixed& max(Fixed &obj1, Fixed &obj2) 
	{
		return (obj1 > obj2 ? obj1 : obj2);
	}

	static const Fixed& max(const Fixed &obj1, const Fixed &obj2)
	{
		return (obj1 > obj2 ? obj1 : obj2);
	}
};
	std::ostream &operator <<(std::ostream &ost, const Fixed &obj);

#endif