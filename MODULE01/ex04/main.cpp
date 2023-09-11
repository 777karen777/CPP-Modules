// obtaining file size
#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv) {
	std::streampos size;
	char *memblock;
	std::string src;
	size_t startPos = 0;
	size_t foundPos = 0;

	if (argc != 4)
	{
		std::cout << "!!! Wrong Arguments !!!" << std::endl;
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return (1);
	}

	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	std::ifstream inputFile(filename, std::ios::in | std::ios::binary | std::ios::ate);
	std::ofstream outputFile(filename + ".replace");

	if(!inputFile.is_open())
	{
		std::cerr << "Error !!! Unafle to open input file '" << filename << std::endl;
		return (1);
	}
	if(!outputFile.is_open())
	{
		std::cerr << "Error !!! Unafle to open output file '" << filename << ".replace" << std::endl;
		return (1);
	}
	size = inputFile.tellg();
	memblock = new char [size];
	inputFile.seekg (0, std::ios::beg);
	inputFile.read (memblock, size);
	inputFile.close();
	src = memblock;
	delete[] memblock;

	foundPos = src.find(s1, startPos);
	while (foundPos != std::string::npos)
	{
		outputFile << src.substr(startPos, foundPos - startPos) << s2;
		startPos = foundPos + s1.length();
		foundPos = src.find(s1, startPos);
	}
	outputFile << src.substr(startPos);
	
  return 0;
}

/* ./replace "my_file.txt" "gsd
dfg" "Hello" */