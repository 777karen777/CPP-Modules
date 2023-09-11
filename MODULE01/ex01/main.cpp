#include "Zombie.hpp"


int main()
{
	int n = 7;
	Zombie *instanse = zombieHorde(n, "ZOZO");
	for (int i = 0; i < n; i++)
	{
		instanse[i].announce();
	}
	delete[]instanse;
	// instanse.prompt();
	return (EXIT_SUCCESS);
}