#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's Default constructor was called" << std::endl;
}

Brain::Brain(const Brain &obj) 
{
    std::cout << "Brain's Copy constructor was called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = obj.ideas[i];
    }
}

Brain&  Brain::operator=(const Brain &obj)
{
    std::cout << "Brain's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}


Brain::~Brain(void)  
{
    std::cout << "Brain's Destructor was called" << std::endl;
}

	// setter & getter

	std::string Brain::getIndexedIdea(int index) const
    {
        if (index >=0 && index < 100)
        {
            return (this->ideas[index]);
        }
        return NULL;
    }


	void Brain::setIndexedIdea(int index, std::string _idea)
    {
        if (index >=0 && index < 100)
        {
            this->ideas[index] = _idea;
        }
        return ;

    }

