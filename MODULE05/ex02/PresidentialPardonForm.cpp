#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm's Default constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _name) : AForm(_name, 25, 5)
{    
    std::cout << "PresidentialPardonForm's  constructor with parameter was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
    std::cout << "PresidentialPardonForm's Copy constructor was called" << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->setIsSigned(obj.getIsSigned());
    }
    return (*this);
}


PresidentialPardonForm::~PresidentialPardonForm(void)  
{
    std::cout << "PresidentialPardonForm's Destructor was called" << std::endl;
}

    // Member function overrides

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (check(executor))
    {
        std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
    {
        // std::cout << "The robotomy failed !" << std::endl << std::endl;
        throw(GradeTooLowException());
    }
}
