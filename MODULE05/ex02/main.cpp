#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	try
	{
		Bureaucrat a(5, "AAA");
		ShrubberyCreationForm S("Shrubb");
		RobotomyRequestForm R("Rob");
		PresidentialPardonForm P("President");
		//a.incGrade();
		//a.decGrade();
		// std::cout << a.getName() << a.getGrade() << std::endl;
		// a.incGrade();
		P.beSigned(a);
		// S.execute(a);
		a.executeForm(P);

		// a.decGrade();
		// std::cout << a << std::endl;
		// std::cout << dipl << std::endl << std::endl;
		// dipl.beSigned(a);
		// std::cout << dipl << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}