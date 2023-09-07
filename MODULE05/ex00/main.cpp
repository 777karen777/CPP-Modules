#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a(5, "AAA");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}