#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;


class Character : ICharacter
{
private:

    std::string name;
    AMateria *slots[4];
    
public:
    Character(void);
    Character(std::string _name);
	Character(const Character &obj);
	Character&  operator=(const Character &obj);

    ~Character();
    std::string const & getName() const;
    void setName(std::string _name);

    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif