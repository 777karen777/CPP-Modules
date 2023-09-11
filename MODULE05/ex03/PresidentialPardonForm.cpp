#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm's Default constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("Presidential Pardon", 25, 5)
{
    target = _target;
    std::cout << "PresidentialPardonForm's  constructor with parameter was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
    target = obj.target;
    std::cout << "PresidentialPardonForm's Copy constructor was called" << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->setIsSigned(obj.getIsSigned());
        target = obj.target;
    }
    return (*this);
}


PresidentialPardonForm::~PresidentialPardonForm(void)  
{
    std::cout << "PresidentialPardonForm's Destructor was called" << std::endl;
}

    // Member function overrides
        //Getters
std::string PresidentialPardonForm::getTarget() const
{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (check(executor))
    {
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
    {
        throw(GradeTooLowException());
    }
}
