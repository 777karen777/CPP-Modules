#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Brain
{
protected:
	std::string ideas[100];
public:

	Brain();
	Brain(const Brain &obj);
	Brain&  operator=(const Brain &obj);
	virtual ~Brain(void);

	virtual void makeSound() const;

	//Getters

	std::string getType(void) const;

	//Setters

	void setType(std::string _name);

};

#endif