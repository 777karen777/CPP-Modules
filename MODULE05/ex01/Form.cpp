#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";    
}

const char* Form::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

Form::Form() : name("I'm default"), isSigned(false), signGrade(7), execGrade(7)
{
    std::cout << "Form's Default constructor was called" << std::endl;
}

Form::Form(std::string _name, int _signGrade, int _execGrade) : name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
    if (_signGrade < 1 || _execGrade < 1)
    {
        throw(GradeTooHighException());
    }
    else if (_signGrade > 150 || _execGrade > 150)
    {
        throw(GradeTooLowException());
    }
    std::cout << "Form's  constructor with parameter was called" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
    std::cout << "Form's Copy constructor was called" << std::endl;
}

Form&  Form::operator=(const Form &obj)
{
    std::cout << "Form's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        this->isSigned = obj.isSigned;
    }
    return (*this);
}


Form::~Form(void)  
{
    std::cout << "Form's Destructor was called" << std::endl;
}

// Member Functions

    // Getters

const std::string& Form::getName() const
{
    return (this->name);
}

bool Form::getIsSigned() const
{
    return (this->isSigned);
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecGrade() const
{
    return (this->execGrade);
}


    // Other member functions

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= signGrade)
    {
        isSigned = true;
    }
    else
    {
        throw(GradeTooLowException());
    }
}

std::ostream & operator <<(std::ostream &ost, const Form &obj)
{
    ost << obj.getName() << ", Form grade to sign is " << obj.getSignGrade() << ", grade to execute is " << obj.getExecGrade() << ", and the stattus of signed is " << obj.getIsSigned();
    return (ost);
}
