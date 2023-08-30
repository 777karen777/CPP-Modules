#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <array>

class Brain
{
protected:
	std::string ideas[100];
	// std::array<std::string("kar"), 100> _ideas;
public:

	Brain();
	Brain(const Brain &obj);
	Brain&  operator=(const Brain &obj);
	~Brain(void);

	// setter & getter

	std::string getIndexedIdea(int index) const;


	void setIndexedIdea(int index, std::string _idea);
};

#endif