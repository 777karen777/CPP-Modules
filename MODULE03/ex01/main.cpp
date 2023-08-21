#include "ScavTrap.hpp"

int main( void ) {

	ScavTrap a("A");
	ScavTrap b("B");
	std::cout << b.getName() << std::endl;
	// a.attack(b.getName());
	// b.takeDamage(a.getattackDamage());
	// b.beRepaired(7);
	
	return 0;
}
