#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap&  operator=(const FragTrap &obj);
	virtual ~FragTrap(void);


	void attack(const std::string& target);
	void guardGate() const;
	void highFivesGuys(void) const;
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	// //Getters

	// std::string getName(void) const;
	// int getHitPoints(void) const;
	// int getEnergyPoints(void) const;
	// int getAttackDamage(void) const;

};

#endif