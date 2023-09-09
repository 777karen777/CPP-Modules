#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";    
}

const char* AForm::GradeTooLowException::what() const throw() 
{
    return "Grade is too low! or Form is not signed!";
}

AForm::AForm() : name("I'm default"), isSigned(false), signGrade(145), execGrade(137)
{
    std::cout << "AForm's Default constructor was called" << std::endl;
}

AForm::AForm(std::string _name, int _signGrade, int _execGrade) : name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
    if (_signGrade < 1 || _execGrade < 1)
    {
        throw(GradeTooHighException());
    }
    else if (_signGrade > 150 || _execGrade > 150)
    {
        throw(GradeTooLowException());
    }
    std::cout << "AForm's  constructor with parameter was called" << std::endl;
}

AForm::AForm(const AForm &obj) : name(obj.getName()), isSigned(obj.getIsSigned()), signGrade(obj.getSignGrade()), execGrade(obj.getExecGrade())
{
    std::cout << "AForm's Copy constructor was called" << std::endl;
}

AForm&  AForm::operator=(const AForm &obj)
{
    std::cout << "AForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->isSigned = obj.getIsSigned();
    }
    return (*this);
}


AForm::~AForm(void)  
{
    std::cout << "AForm's Destructor was called" << std::endl;
}

// Member Functions

    // Getters

const std::string& AForm::getName() const
{
    return (this->name);
}

bool AForm::getIsSigned() const
{
    return (this->isSigned);
}

int AForm::getSignGrade() const
{
    return (this->signGrade);
}

int AForm::getExecGrade() const
{
    return (this->execGrade);
}

    //Setters

void    AForm::setIsSigned(bool b)
{
    this->isSigned = b;
}


    // Other member functions

void AForm::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= signGrade)
    {
        isSigned = true;
        b.signAForm(*this);
    }
    else
    {
        b.signAForm(*this);
        throw(GradeTooLowException());
    }
}

bool AForm::check(Bureaucrat const & executor) const
{
    if (!(this->getIsSigned() && executor.getGrade() <= this->getExecGrade()))
    {
        return false;
    }
    return true;
}


std::ostream & operator <<(std::ostream &ost, const AForm &obj)
{
    ost << obj.getName() << ", AForm grade to sign is " << obj.getSignGrade() << ", grade to execute is " << obj.getExecGrade() << ", and the stattus of signed is " << obj.getIsSigned();
    return (ost);
}
