#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap a("A");
	ClapTrap b("B");
	a.attack(b.getName());
	b.takeDamage(a.getattackDamage());
	b.beRepaired(7);
	
	return 0;
}
