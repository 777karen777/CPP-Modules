#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's Default constructor was called" << std::endl;
}
ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setattackDamage(20);
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
        this->name = obj.getName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getattackDamage();
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

// int ClapTrap::getattackDamage(void) const
// {
//     // std::cout << "getattackDamage member function called"  << std::endl;
//     return (this->attackDamage);
// }

//     // Other Member Functions

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
        std::cout << "ScavTrap " << this->name << " naw hase " << this->energyPoints << " energyPoints left!" << std::endl;

    }
    else
    {
        std::cout << "ScavTrap " << this->name << "can't attack because it doesn't have energyPoint or hitPoints!" << std::endl;
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


