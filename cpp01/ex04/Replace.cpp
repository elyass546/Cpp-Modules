#include <iostream>
#include <fstream>
#include "Replace.hpp"

void	File::ReplaceFuc(){
	std::ifstream	MyFile(name);
	std::ofstream	NewFile(name + ".replace");
	std::string		str;
	std::string		s;

	if(!MyFile)
	{
		std::cout << "file not found :(" << std::endl;
		return ;
	}
	while (getline(MyFile, str)){
		s += str;
	}
	
	MyFile.close();
}

