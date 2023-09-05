#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Animal
{
protected:
	std::string type;
public:

	Animal();
	Animal(const Animal &obj);
	Animal&  operator=(const Animal &obj);
	virtual ~Animal();

	virtual void makeSound() const;

	//Getters

	std::string getType(void) const;

	//Setters

	void setType(std::string _name);

};

#endif