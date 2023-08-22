#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	
	std::string name;

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap&  operator=(const DiamondTrap &obj);
	~DiamondTrap(void);

	void whoAmI();
	// void attack(const std::string& target);
	// void guardGate() const;
	// void highFivesGuys(void) const;
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	// //Getters

	// std::string getName(void) const;
	// int getHitPoints(void) const;
	// int getEnergyPoints(void) const;
	// int getAttackDamage(void) const;

};

#endif