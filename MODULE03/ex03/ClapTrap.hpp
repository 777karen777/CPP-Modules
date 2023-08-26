#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int	energyPoints;
	int	attackDamage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap&  operator=(const ClapTrap &obj);
	virtual ~ClapTrap(void);


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//Getters

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;
	
	//Setters

	void setName(std::string _name);
	void setHitPoints(int n);
	void setEnergyPoints(int n);
	void setAttackDamage(int n);

};

#endif