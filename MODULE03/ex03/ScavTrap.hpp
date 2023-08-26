#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap&  operator=(const ScavTrap &obj);
	virtual ~ScavTrap(void);


	void attack(const std::string& target);
	void guardGate() const;
};

#endif