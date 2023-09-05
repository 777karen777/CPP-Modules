#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
public:

	WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat&  operator=(const WrongCat &obj);
	~WrongCat(void);

	void makeSound() const;

};

#endif