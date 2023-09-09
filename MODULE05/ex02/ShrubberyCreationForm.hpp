#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class ShrubberyCreationForm : public AForm
{
private:
    

public:


    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string _name);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm&  operator=(const ShrubberyCreationForm &obj);

    ~ShrubberyCreationForm();
    
        // Member function overrides

    void execute(Bureaucrat const & executor) const;
};

#endif