#include "MateriaSource.hpp"



MateriaSource::MateriaSource(void) 
{
	for(int i = 0; i < 4; i++)
	{
		store[i] = nullptr;
	}
	storeSize = 0;
	std::cout << "MateriaSource's Default constructor was called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    std::cout << "MateriaSource's Copy constructor was called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        store[i] = obj.store[i]->clone();
    }
	storeSize = obj.storeSize; 
}

MateriaSource&  MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        for(int i = 0; i < 4; i++)
        {
            if (store[i] != nullptr)
            {
                delete(store[i]);
            }
            store[i] = obj.store[i]->clone();
        }
		storeSize = obj.storeSize; 
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (store[i] == nullptr)
        {
            delete(store[i]);
        }
    }
    std::cout << "MateriaSource's Destructor was called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* obj)
{
	if(storeSize < 4)
	{
		store[storeSize] = obj->clone();
		storeSize++;
	}
	else
	{
		std::cout << "Store is already full!" << std::endl;
	}

}

AMateria* MateriaSource::createMateria(std::string const & _type)
{
	for(int i = 0; i < storeSize; i++)
	{
		if(store[i]->getType() == _type)
		{
			return store[i]->clone();
		}
	}
	return 0;
}
