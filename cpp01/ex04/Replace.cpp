#include <iostream>
#include <fstream>
#include "Replace.hpp"

void	File::ReplaceFuc(){
	std::ifstream	MyFile(name);
	std::ofstream	NewFile(name + ".replace");
	std::string		str;
	std::string		s;
	// unsigned long	i = 0;
	if(!MyFile)
	{
		std::cout << "file not found :(" << std::endl;
		return ;
	}
	while (getline(MyFile, str)){
		s += str;
	}
	std::cout << s << std::endl;/*
	while (i < s.length())
	{
		if (s.compare(i, s1.length(), s2) == 0)
		{
			s.erase(i, s1.length());
			s.insert(i, s2);
		}
		i++;
	}
	NewFile << s;*/
	MyFile.close();
}

