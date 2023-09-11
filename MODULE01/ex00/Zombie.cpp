#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name){}
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " destructed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}