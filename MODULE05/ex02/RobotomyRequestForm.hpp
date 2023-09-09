#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class RobotomyRequestForm : public AForm
{
private:
    

public:


    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string _name);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm&  operator=(const RobotomyRequestForm &obj);

    ~RobotomyRequestForm();
    
        // Member function overrides

    void execute(Bureaucrat const & executor) const;


};

#endif