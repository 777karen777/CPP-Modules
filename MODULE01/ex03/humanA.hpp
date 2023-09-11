#ifndef HUMANA_H
# define HUMANA_H

#include "weapon.hpp"

class HumanA
{
private:

	Weapon& _weapon;
	std::string _name; 

public:

	int	index;

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void) const;

};

#endif