#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>      // std::setw
#include <stdlib.h>     /* atoi */

class  Weapon
{
private:
	std::string type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);	

	void setType(std::string type);
	const std::string &getType(void) const;
};

#endif