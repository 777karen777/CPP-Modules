#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm's Default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _name) : AForm(_name, 72, 45)
{    
    std::cout << "RobotomyRequestForm's  constructor with parameter was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
    std::cout << "RobotomyRequestForm's Copy constructor was called" << std::endl;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->setIsSigned(obj.getIsSigned());
    }
    return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(void)  
{
    std::cout << "RobotomyRequestForm's Destructor was called" << std::endl;
}

    // Member function overrides

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (check(executor))
    {
        std::cout << "!!! dril !!! - !!! dril !!! - !!! dril !!!" << std::endl << std::endl;
        std::cout << getName() << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
    {
        std::cout << "The robotomy failed !" << std::endl << std::endl;
        throw(GradeTooLowException());
    }
}
