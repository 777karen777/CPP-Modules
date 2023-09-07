#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";    
};

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
};

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat's Default constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) : name(_name)
{
    if (_grade < 1)
    {
        throw(GradeTooLowException());
    }
    else if (_grade > 150)
    {
        throw(GradeTooHighException());
    }
    grade = _grade;
    // name = _name;
    std::cout << "Bureaucrat's  constructor with parameter was called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    std::cout << "Bureaucrat's Copy constructor was called" << std::endl;
    this->grade = obj.grade;    
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {

        this->grade = obj.grade;
    }
    return (*this);
}


Bureaucrat::~Bureaucrat(void)  
{
    std::cout << "Bureaucrat's Destructor was called" << std::endl;
}

// Member Functions

    // Getters

const std::string& Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}


    // Other member functions

void Bureaucrat::incGrade(void)
{
    if (this->grade + 1 > 150)
    {
        throw(GradeTooHighException());
    }
    this->grade += 1;
}

void Bureaucrat::decGrade(void)
{
    if (this->grade - 1 < 1)
    {
        throw(GradeTooLowException());
    }
    this->grade -= 1;
}

std::ostream & operator <<(std::ostream &ost, const Bureaucrat &obj)
{
    ost << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (ost);
}
