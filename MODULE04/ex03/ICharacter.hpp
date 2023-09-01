#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string type;

public:
    AMateria(void);
    AMateria(std::string const & type);
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    	//Getters
    std::string const & getType() const; //Returns the materia type


	//Setters

	void setType(std::string _name);
};