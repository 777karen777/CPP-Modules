#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm's Default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("Robotomy Request", 72, 45)
{    
    target = _target;
    std::cout << "RobotomyRequestForm's  constructor with parameter was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
    target = obj.target;
    std::cout << "RobotomyRequestForm's Copy constructor was called" << std::endl;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        target = obj.target;
        this->setIsSigned(obj.getIsSigned());
    }
    return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(void)  
{
    std::cout << "RobotomyRequestForm's Destructor was called" << std::endl;
}

    // Member function overrides
        //Getters
std::string RobotomyRequestForm::getTarget() const
{
    return target;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (check(executor))
    {
        std::cout << "!!! dril !!! - !!! dril !!! - !!! dril !!!" << std::endl << std::endl;
        std::cout << getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
    {
        std::cout << "The robotomy failed !" << std::endl << std::endl;
        throw(GradeTooLowException());
    }
}
