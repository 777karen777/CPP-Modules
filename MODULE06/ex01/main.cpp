#include "Serializer.hpp"


int main()
{
	Data *a = new(Data);
	std::cout << a << std::endl;
	uintptr_t n = Serializer::serialize(a);
	std::cout << n << std::endl;
	Data *b = Serializer::deserialize(n);
	std::cout << b << std::endl;	
	return 0;
}