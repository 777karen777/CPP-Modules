#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class WrongAnimal
{
protected:
	std::string type;
public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal&  operator=(const WrongAnimal &obj);
	virtual ~WrongAnimal(void);

	void makeSound() const;

	//Getters

	std::string getType(void) const;

	//Setters

	void setType(std::string _name);

};

#endif