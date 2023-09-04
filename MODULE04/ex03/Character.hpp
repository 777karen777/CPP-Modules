#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include <array>

class ICharacter;


class Character : public ICharacter
{
private:

    std::string name;
    // std::array<AMateria*, 4> slots;
    AMateria *slots[4];
    AMateria *trash[7];
    int trashSize;
    
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
    void emptyTrash(void);
};

#endif