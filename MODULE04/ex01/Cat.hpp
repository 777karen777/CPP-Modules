#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Animal.hpp"


class Cat : public Animal
{
protected:
public:

	Cat();
	Cat(const Cat &obj);
	Cat&  operator=(const Cat &obj);
	virtual ~Cat(void);

	virtual void makeSound() const;

};

#endif