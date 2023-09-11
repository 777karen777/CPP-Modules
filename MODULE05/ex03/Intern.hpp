#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	
public:
	Intern();
    Intern(const Intern &obj);
	Intern&  operator=(const Intern &obj);
	~Intern();

		//MEMBER FUNCTIONS
	
	AForm *makeForm(std::string formName, std::string formTarget);
};


#endif