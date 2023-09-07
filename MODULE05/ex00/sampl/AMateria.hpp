#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
    AMateria(void);
    AMateria(std::string const & _type);
    AMateria(const AMateria &obj);
	AMateria&  operator=(const AMateria &obj);

    virtual ~AMateria();
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    	//Getters
    std::string const & getType() const; //Returns the materia type


	    //Setters

	void setType(std::string _name);
};

#endif