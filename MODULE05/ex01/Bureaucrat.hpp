#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"


class Form;


class Bureaucrat
{
private:

    const std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception 
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };


    Bureaucrat(void);
    Bureaucrat(int _grade, std::string _name);
    Bureaucrat(const Bureaucrat &obj);
	Bureaucrat&  operator=(const Bureaucrat &obj);

    ~Bureaucrat();
    
    
    	//Getters
    std::string const & getName() const;
    int getGrade() const;


	    //Other member functions

    void incGrade(void);
    void decGrade(void);
    void signForm(Form &) const;


};

std::ostream &operator <<(std::ostream &ost, const Bureaucrat &obj);

#endif