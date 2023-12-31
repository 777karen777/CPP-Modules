#include "ScavTrap.hpp"

int main( void ) {

	ScavTrap b("B");
	ScavTrap a = b;
	std::cout << a.getName() << std::endl;
	std::cout << a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(7);
	b.guardGate();
	
	return 0;
}
