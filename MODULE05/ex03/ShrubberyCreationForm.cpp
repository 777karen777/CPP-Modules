#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm's Default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("Shrubbery Creation", 145, 137)
{    
    target = _target;
    std::cout << "ShrubberyCreationForm's  constructor with parameter was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
    target = obj.getTarget();
    std::cout << "ShrubberyCreationForm's Copy constructor was called" << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm's Copy asignment operator was called" << std::endl;
    if(this != &obj)
    {
        target = obj.getTarget();
        this->setIsSigned(obj.getIsSigned());
    }
    return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)  
{
    std::cout << "ShrubberyCreationForm's Destructor was called" << std::endl;
}

    // Member function overrides

        //Getters
std::string ShrubberyCreationForm::getTarget() const
{
    return target;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (check(executor))
    {
        std::string n;
        n = this->getTarget() + "_shrubbery";
        std::ofstream f(n);
        f << "               ,@@@@@@@,\n"
            ",,,.   ,@@@@@@/@@,  .oo8888o.\n"
            ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        "`&%\\ ` /%&'    |.|        \\ '|8'\n"
            "|o|        | |         | |\n"
            "|.|        | |         | |\n"
        "777 \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
        f.close();
    }
    else
    {
        throw(GradeTooLowException()); 
    }
}
