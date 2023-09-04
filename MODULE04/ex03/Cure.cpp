#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure's Default constructor was called" << std::endl;
}

Cure::Cure(const Cure &obj) 
{
    std::cout << "Cure's Copy constructor was called" << std::endl;
    this->type = obj.type;    
}

Cure&  Cure::operator=(const Cure &obj)
{
    std::cout << "Cure's Copy asignment operator was called" << std::endl;
    // if(this != &obj)
    // {
    //     this->type = obj.type;    
    // }
    return (*this);
}


Cure::~Cure(void)  
{
    std::cout << "Cure's Destructor was called" << std::endl;
}

// Member Functions

AMateria* Cure::clone() const
{
    AMateria *newClone = new Cure();
    std::cout << "Cure's \"clone\" function called." << std::endl;
    return newClone;
}
void Cure::use(ICharacter& target)
{
    std::cout << "heals << " << target.getName() << "’s wounds." << std::endl;
}
