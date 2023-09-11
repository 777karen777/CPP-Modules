#ifndef HUMANB_H
# define HUMANB_H

#include "weapon.hpp"

class HumanB
{
private:

	Weapon* _weapon;
	std::string _name;

public:

	int	index;

	HumanB(std::string name);
	~HumanB(void);

	void attack(void) const;
	void setWeapon(Weapon &weapon);

};

#endif