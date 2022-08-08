#include <iostream>
#include <fstream>
#include "Replace.hpp"

int main(int ac, char **av)
{
	File file;

	if (ac != 4)
	{
		std::cout << "Error in argument" << std::endl;
		std::cout << "Filename , s1 , s2" << std::endl;
		return (1);
	}
	file.name = av[1];
	file.s1 = av[2];
	file.s2 = av[3];
	file.ReplaceFuc();
	return (0);
}