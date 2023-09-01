#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain *mozg;
public:

	Dog();
	Dog(const Dog &obj);
	Dog&  operator=(const Dog &obj);
	virtual ~Dog(void);

	virtual void makeSound() const;

};

#endif