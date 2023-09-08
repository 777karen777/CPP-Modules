#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a(7, "AAA");
		Form dipl("dipl", 21 , 7 );
		//a.incGrade();
		//a.decGrade();
		// std::cout << a.getName() << a.getGrade() << std::endl;
		// a.incGrade();
		

		// a.decGrade();
		// std::cout << a << std::endl;
		std::cout << dipl << std::endl << std::endl;
		dipl.beSigned(a);
		std::cout << dipl << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}