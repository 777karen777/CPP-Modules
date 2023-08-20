#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) 
{
    std::cout << "Copy constructor was called" << std::endl;
    *this = obj;    
}

ClapTrap&  ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->name = obj.getName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getattackDamage();
    }
    return (*this);
}


ClapTrap::~ClapTrap(void)  
{
    std::cout << "Destructor was called" << std::endl;
}

// Member Functions

    // Getters
std::string ClapTrap::getName(void) const
{
    return (this->name);
}

int ClapTrap::getHitPoints(void) const
{
    // std::cout << "getHitPoints member function called"  << std::endl;
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
    // std::cout << "getEnergyPoints member function called"  << std::endl;
    return (this->energyPoints);
}

int ClapTrap::getattackDamage(void) const
{
    // std::cout << "getattackDamage member function called"  << std::endl;
    return (this->attackDamage);
}

    // Other Member Functions

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " naw hase " << this->energyPoints << " energyPoints left!" << std::endl;

    }
    else
    {
        std::cout << "ClapTrap " << this->name << "can't attack because it doesn't have energyPoint!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " gets " << amount << " points of damage!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " hase been repaired and gets " << amount << " points of hitPoints!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " naw hase " << this->hitPoints << " hitPoints and " << this->energyPoints << " energyPoints left!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << "can't be repaired because it doesn't have energyPoint!" << std::endl;
    }
}

