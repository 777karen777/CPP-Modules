#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int	energyPoints;
	int	attackDamage;

public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap&  operator=(const ClapTrap &obj);
	~ClapTrap(void);


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//Getters

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getattackDamage(void) const;

};

#endif