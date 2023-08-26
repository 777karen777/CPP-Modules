#include "DiamondTrap.hpp"

int main( void ) {

	DiamondTrap a ("A");
	DiamondTrap b("B");
	std::cout << a.getName() << std::endl;
	std::cout << a.getHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(7);
	b.guardGate();
	b.highFivesGuys();
	
	return 0;
}
