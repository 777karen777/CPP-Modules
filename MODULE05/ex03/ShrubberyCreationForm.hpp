#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class ShrubberyCreationForm : public AForm
{
private:
std::string target;     

public:


    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm&  operator=(const ShrubberyCreationForm &obj);

    ~ShrubberyCreationForm();
    
        // Member function overrides

            //Getters
    std::string getTarget() const;


            //Other member functions!

    void execute(Bureaucrat const & executor) const;
};

#endif