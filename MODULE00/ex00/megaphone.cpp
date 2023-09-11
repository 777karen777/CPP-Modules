#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (EXIT_SUCCESS);
	}

	for (int i = 1; i < argc; i++)
	{
		if (i > 1)
		{
			std::cout << " ";
		}
		for (int j = 0; argv[i][j]; j++)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}