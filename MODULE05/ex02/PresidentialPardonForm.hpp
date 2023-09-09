#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class PresidentialPardonForm : public AForm
{
private:
    

public:


    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string _name);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm&  operator=(const PresidentialPardonForm &obj);

    ~PresidentialPardonForm();
    
        // Member function overrides

    void execute(Bureaucrat const & executor) const;


};

#endif