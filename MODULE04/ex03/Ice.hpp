#ifndef ICE_HPP
# define ICE_HPP


#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
protected:

public:
    Ice(void);
    Ice(const Ice &obj);
	Ice&  operator=(const Ice &obj);

    ~Ice();
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif