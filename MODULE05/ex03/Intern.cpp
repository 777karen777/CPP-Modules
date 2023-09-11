#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern's Default constructor was called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	(void) obj;
    std::cout << "Intern's Copy constructor was called" << std::endl;
}

Intern&  Intern::operator=(const Intern &obj)
{
	(void) obj;
    std::cout << "Intern's Copy asignment operator was called" << std::endl;    
    return (*this);
}


Intern::~Intern(void)  
{
    std::cout << "Intern's Destructor was called" << std::endl;
}

// Member Functions

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *ptr = nullptr;
	int c = 1 * (formName == "shrubbery creation") + 2 * (formName == "robotomy request") + 3 * (formName == "presidential pardon");
	switch (c)
	{
	case 1:
		ptr = new ShrubberyCreationForm(formTarget);
		break;
	case 2:
		ptr = new RobotomyRequestForm(formTarget);
		break;
	case 3:
		ptr = new PresidentialPardonForm(formTarget);
		break;
	
	default:
		std::cout << "Form's name doesn't coresponding, please use one of these names: \"shrubbery creation\", \"robotomy request\", \"presidential pardon\"" << std::endl;
		break;
	}
	return ptr;
}
