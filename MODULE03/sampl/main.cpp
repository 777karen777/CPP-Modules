#include "Point.hpp"

int main( void ) {
	// Point a(Fixed(0), Fixed(0));
	// Point b(Fixed(4), Fixed(0));
	// Point c(Fixed(2), Fixed(4));
	// Point p(Fixed(1), Fixed(1));

	// if(bsp(a,b,c,p))
	// {
	// 	std::cout << "TRUE: p is in Triangel" << std::endl;
	// }
	// else
	// {
	// 	std::cout << "FALSE: p is not in Triangel" << std::endl;
	// }
	///////////////////////
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(4), Fixed(0));
	Point c(Fixed(2), Fixed(4));
	Point p(Fixed(3.5f), Fixed(1));

	if(bsp(a,b,c,p))
	{
		std::cout << "\nTRUE: p2 is in Triangel\n" << std::endl;
	}
	else
	{
		std::cout << "\nFALSE: p2 is not in Triangel\n" << std::endl;
	}
	
	return 0;
}
