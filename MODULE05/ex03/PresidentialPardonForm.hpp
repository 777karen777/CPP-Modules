#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class PresidentialPardonForm : public AForm
{
private:
std::string target;    

public:


    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string _target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm&  operator=(const PresidentialPardonForm &obj);

    ~PresidentialPardonForm();
    
        // Member function overrides

            //Getters
    std::string getTarget() const;


            //Other member functions!
    void execute(Bureaucrat const & executor) const;


};

#endif