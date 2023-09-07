#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a(150, "AAA");
		//a.incGrade();
		//a.decGrade();
		std::cout << a.getName() << a.getGrade() << std::endl;
		a.incGrade();

		// a.decGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}