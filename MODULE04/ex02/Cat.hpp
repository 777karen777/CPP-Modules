#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain *mozg;
	
public:

	Cat();
	Cat(const Cat &obj);
	Cat&  operator=(const Cat &obj);
	virtual ~Cat(void);

	virtual void makeSound() const;

};

#endif