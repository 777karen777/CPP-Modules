#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(std::time(nullptr));
	Base *b = NULL;

	switch (std::rand() % 3 + 1)
	{
	case 1:
		b = new(A);
		std::cout << "'A' class type object was created!" << std::endl;
		break;
	
	case 2:
		b = new(B);
		std::cout << "'B' class type object was created!" << std::endl;
		break;
	
	case 3:
		b = new(C);
		std::cout << "'C' class type object was created!" << std::endl;
		break;
	
	default:
		break;
	}
	return b;
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
	{
		std::cout << "'p' is a 'A' class type!" << std::endl;
	}
	else if(dynamic_cast<B*>(p))
	{
		std::cout << "'p' is a 'B' class type!" << std::endl;
	}
	else if(dynamic_cast<C*>(p))
	{
		std::cout << "'p' is a 'C' class type!" << std::endl;
	}
	else
	{
		std::cout << "'p' is a Unknown class type!" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "'p' is a 'A' class type! &" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &a = dynamic_cast<B&>(p);
			(void) a;
			std::cout << "'p' is a 'B' class type! &" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &a = dynamic_cast<C&>(p);
				(void) a;
				std::cout << "'p' is a 'C' class type! &" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "'p' is a Unknown class type! &" << std::endl;
			}
		}
	}	
}

int main()
{
	Base *k = generate();
	identify(k);
	identify(*k);

	// Data *a = new(Data);
	// std::cout << a << std::endl;
	// uintptr_t n = Serializer::serialize(a);
	// std::cout << n << std::endl;
	// Data *b = Serializer::deserialize(n);
	// std::cout << b << std::endl;	
	return 0;
}