#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"



class RobotomyRequestForm : public AForm
{
private:
std::string target;     

public:


    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm&  operator=(const RobotomyRequestForm &obj);

    ~RobotomyRequestForm();
    
        // Member function overrides

            //Getters
    std::string getTarget() const;


            //Other member functions!

    void execute(Bureaucrat const & executor) const;


};

#endif