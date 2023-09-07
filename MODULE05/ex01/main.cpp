#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a(150, "AAA");
		Form dipl("dipl", 77 , 77 );
		//a.incGrade();
		//a.decGrade();
		std::cout << a.getName() << a.getGrade() << std::endl;
		// a.incGrade();

		// a.decGrade();
		std::cout << a << std::endl;
		std::cout << dipl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}