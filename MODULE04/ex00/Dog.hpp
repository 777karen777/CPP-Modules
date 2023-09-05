#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Animal.hpp"


class Dog : public Animal
{
protected:
public:

	Dog();
	Dog(const Dog &obj);
	Dog&  operator=(const Dog &obj);
	~Dog(void);

	void makeSound() const;

};

#endif