#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : IMateriaSource
{
public:
    MateriaSource(void);
    MateriaSource(std::string _name);
	MateriaSource(const MateriaSource &obj);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif