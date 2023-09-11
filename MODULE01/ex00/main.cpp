#include "Zombie.hpp"


int main()
{
	Zombie *instanse = newZombie("Karen");
	instanse->announce();
	randomChump("ADA");
	delete(instanse);
	// instanse.prompt();
	return (EXIT_SUCCESS);
}