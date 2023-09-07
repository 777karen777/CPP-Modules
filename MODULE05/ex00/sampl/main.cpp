#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"





int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // std::cout << std::endl << tmp->getType() << std::endl << std::endl;
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    // std::cout << std::endl << "!!! PRIV !!!" << std::endl << std::endl;
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    // system("leaks Materia");
    return 0;
}