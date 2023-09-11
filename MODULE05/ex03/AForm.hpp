#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
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


    AForm(void);
    AForm(std::string _name, int _signGrade, int _execGrade);
    AForm(const AForm &obj);
	AForm&  operator=(const AForm &obj);

    virtual ~AForm();
    
    
    	//Getters
    std::string const & getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

        //Setters

    void    setIsSigned(bool);


	    //Other member functions

    virtual void execute(Bureaucrat const & executor) const = 0;
    void beSigned(Bureaucrat&);
    bool check(Bureaucrat const & executor) const;


};

std::ostream &operator <<(std::ostream &ost, const AForm &obj);

#endif