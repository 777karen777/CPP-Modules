#include "Character.hpp"

Character::Character() : trashSize(0)
{
    for(int i = 0; i < 4; i++)
    {
        slots[i] = nullptr; 
    }
    std::cout << "Character's Default constructor was called" << std::endl;
}

Character::Character(std::string _name) : name(_name), trashSize(0)
{
    for(int i = 0; i < 4; i++)
    {
        slots[i] = nullptr;
    }
    std::cout << "Character's constructor with parameters was called" << std::endl;
}

Character::Character(const Character &obj) 
{
    std::cout << "Character's Copy constructor was called" << std::endl;
    this->name = obj.name;
    for(int i = 0; i < 4; i++)
    {
        slots[i] = obj.slots[i]->clone();
    }
    for(int i = 0; i < 7; i++)
    {
        trash[i] = obj.trash[i]->clone();
    }
    trashSize = obj.trashSize;
    
}

Character&  Character::operator=(const Character &obj)
{
    std::cout << "Character's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        for(int i = 0; i < 4; i++)
        {
            if (slots[i] != nullptr)
            {
                delete(slots[i]);
            }
            slots[i] = obj.slots[i]->clone();
        }
        this->name = obj.name;    
    }
    for(int i = 0; i < 7; i++)
    {
        trash[i] = obj.trash[i]->clone();
    }
    trashSize = obj.trashSize;
    
    return (*this);
}


Character::~Character(void)  
{
    for(int i = 0; i < 4; i++)
    {
        if (slots[i] == nullptr)
        {
            delete(slots[i]);
        }
    }
    for(int i = 0; i < trashSize; i++)
    {    
        delete(trash[i]);
        trash[i] = nullptr;    
    }

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
        for(int i = 0; i < 4; i++)
        {
            if (slots[i] == nullptr)
            {
                slots[i] = m->clone();
                return;
            }
        }
        
    }
    void Character::unequip(int idx)
    {
        if (idx >= 0 && idx < 4 &&  slots[idx] != nullptr)
        {
            if (trashSize < 7)
            {
                trash[trashSize] = slots[idx];
                slots[idx] = nullptr;
                trashSize++;
            }
            else
            {
                std::cout << "Function \"unequip\" failed because trash is full, please empty trash!" << std::endl;
            }
        }
        
    }
    void Character::use(int idx, ICharacter& target)
    {
        if(slots[idx] != nullptr)
        {
            slots[idx]->use(target);
        }
    }

    void Character::emptyTrash(void)
    {
        for(int i = 0; i < trashSize; i++)
        {    
            delete(trash[i]);
            trash[i] = nullptr;    
        }
        trashSize = 0;
    }