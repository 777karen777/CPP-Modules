#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's Default constructor was called" << std::endl;
}
ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
    // hitPoints = 100;
    // energyPoints = 50;
    // attackDamage = 20;
    std::cout << "ScavTrap's constructor with parameter was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) 
{
    std::cout << "ScavTrap's Copy constructor was called" << std::endl;
    *this = obj;    
}

ScavTrap&  ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->setName(obj.getName());
        this->setHitPoints(obj.getHitPoints());
        this->setEnergyPoints(obj.getEnergyPoints());
        this->setAttackDamage(obj.getAttackDamage());
    }
    return (*this);
}


ScavTrap::~ScavTrap(void)  
{
    std::cout << "ScavTrap's Destructor was called" << std::endl;
}

// // Member Functions

//     // Getters
// std::string ClapTrap::getName(void) const
// {
//     return (this->name);
// }

// int ClapTrap::getHitPoints(void) const
// {
//     // std::cout << "getHitPoints member function called"  << std::endl;
//     return (this->hitPoints);
// }

// int ClapTrap::getEnergyPoints(void) const
// {
//     // std::cout << "getEnergyPoints member function called"  << std::endl;
//     return (this->energyPoints);
// }

// int ClapTrap::getAttackDamage(void) const
// {
//     // std::cout << "getAttackDamage member function called"  << std::endl;
//     return (this->attackDamage);
// }

//     // Other Member Functions

void ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " naw hase " << this->getEnergyPoints() << " energyPoints left!" << std::endl;

    }
    else
    {
        std::cout << "ScavTrap " << this->getName() << " can't attack because it doesn't have energyPoint or hitPoints!" << std::endl;
    }
}

// void ClapTrap::takeDamage(unsigned int amount)
// {
//     std::cout << "ClapTrap " << this->name << " gets " << amount << " points of damage!" << std::endl;
//     this->hitPoints -= amount;
// }

// void ClapTrap::beRepaired(unsigned int amount)
// {
//     if (this->energyPoints > 0)
//     {
//         std::cout << "ClapTrap " << this->name << " hase been repaired and gets " << amount << " points of hitPoints!" << std::endl;
//         this->hitPoints += amount;
//         this->energyPoints--;
//         std::cout << "ClapTrap " << this->name << " naw hase " << this->hitPoints << " hitPoints and " << this->energyPoints << " energyPoints left!" << std::endl;
//     }
//     else
//     {
//         std::cout << "ClapTrap " << this->name << "can't be repaired because it doesn't have energyPoint!" << std::endl;
//     }
// }

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}


