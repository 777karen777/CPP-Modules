#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
private:

    const   std::string name;
    bool    isSigned;
    const int   signGrade;
    const int   execGrade;

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


    Form(void);
    Form(std::string _name, int _signGrade, int _execGrade);
    Form(const Form &obj);
	Form&  operator=(const Form &obj);

    ~Form();
    
    
    	//Getters
    std::string const & getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;


	    //Other member functions

    // void incGrade(void);
    // void decGrade(void);
    void beSigned(Bureaucrat&);

};

std::ostream &operator <<(std::ostream &ost, const Form &obj);

#endif