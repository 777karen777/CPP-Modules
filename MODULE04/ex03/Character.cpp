#include "Character.hpp"

Character::Character()
{
    std::cout << "Character's Default constructor was called" << std::endl;
}

Character::Character(std::string _name) : name(_name)
{
    std::cout << "Character's constructor with parameters was called" << std::endl;
}

Character::Character(const Character &obj) 
{
    std::cout << "Character's Copy constructor was called" << std::endl;
    this->name = obj.name;    
}

Character&  Character::operator=(const Character &obj)
{
    std::cout << "Character's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->name = obj.name;    
    }
    return (*this);
}


Character::~Character(void)  
{
    std::cout << "Character's Destructor was called" << std::endl;
}

// Member Functions

    // Getters
std::string const & Character::getName(void) const
{
    return (this->name);
}

    // Setters

void Character::setName(std::string _name)
{
    // std::cout << "setName member function called"  << std::endl;
    this->name = _name;
}

    // Other member functions

    void Character::equip(AMateria* m)
    {
        
    }
    void Character::unequip(int idx)
    {
        
    }
    void Character::use(int idx, ICharacter& target)
    {
        
    }