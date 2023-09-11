#include <iomanip>      // std::setw
#include <iostream>



int main()
{
	std::string greeting = "HI THIS IS BRAIN";
	std::string *stringPTR = &greeting;
	std::string &stringRef = greeting;

	std::cout << "Memory address of string variable \"greeting\" is:" << std::endl << std::setw(100) << &greeting << std::endl;
	std::cout << "Memory address held by string pointer variable \"stringPTR\" is:" << std::endl << std::setw(100) << stringPTR << std::endl;
	std::cout << "Memory address held by string refference variable \"stringRef\" is:" << std::endl << std::setw(100) << &stringRef << std::endl << std::endl;
	
	std::cout << "The value of the string variable\"greeting\" is:" << std::endl << std::setw(100) << greeting << std::endl;
	std::cout << "The value of the string pointer variable \"stringPTR\" is:" << std::endl << std::setw(100) << *stringPTR << std::endl;
	std::cout << "The value of the string refference variable \"stringRef\" is:" << std::endl << std::setw(100) << stringRef << std::endl;
	return (EXIT_SUCCESS);
}

