#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->ClapTrap::name = this->name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;   
    std::cout << "DiamondTrap's Default constructor was called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name), name(_name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap's constructor with parameter was called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj), name(obj.name) 
{
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    std::cout << "DiamondTrap's Copy constructor was called" << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
        FragTrap::operator=(obj);
        ScavTrap::operator=(obj);
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return (*this);
}


DiamondTrap::~DiamondTrap(void)  
{
    std::cout << "DiamondTrap's Destructor was called" << std::endl;
}

// // Member Functions



void DiamondTrap::whoAmI() 
{
    std::cout << "I am " << this->name << ", ClapTrap name is " << this->ClapTrap::name << std::endl;
}
