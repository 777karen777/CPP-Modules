#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap&  operator=(const ScavTrap &obj);
	~ScavTrap(void);


	void attack(const std::string& target);
	void guardGate() const;
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	// //Getters

	// std::string getName(void) const;
	// int getHitPoints(void) const;
	// int getEnergyPoints(void) const;
	// int getAttackDamage(void) const;

};

#endif