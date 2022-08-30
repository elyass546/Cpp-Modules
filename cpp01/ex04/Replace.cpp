#include <iostream>
#include <fstream>
#include "Replace.hpp"

void	File::ReplaceFuc(){
	std::ifstream	MyFile(name);
	std::ofstream	NewFile(name + ".replace");
	std::string		temp;
	std::string		temp2;
	std::string		s;
	unsigned long	count = 0;
	// unsigned long	i = 0;
	if(!MyFile)
	{
		std::cout << "file not found :(" << std::endl;
		return ;
	}
	while (getline(MyFile, s)){
		count = s.find(s1, 0);
		if (count == std::string::npos)
		{
			temp2 = s;
		}
		temp = s;
		while (count != std::string::npos){
			temp2 = temp.substr(0, count);
			temp2 += s2;
			temp2 += &temp[count+s1.length()];
			temp = temp2;
			count = temp.find(s1, 0);
		}
		// std::cout << '|' << temp  << '|' << std::endl;
		NewFile << temp2;
		if (!MyFile.eof())
			NewFile << std::endl;
		temp2 = "";
	}
	MyFile.close();
}

/*
found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';
*/