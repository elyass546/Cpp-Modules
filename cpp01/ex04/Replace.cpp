#include <iostream>
#include <fstream>
#include "Replace.hpp"

void	File::ReplaceFuc(){
	std::ifstream	MyFile(name);
	std::ofstream	NewFile(name + ".replace");
	std::string		temp2;
	std::string		s;
	unsigned long	count = 0;

	if(!MyFile){
		std::cout << "file not found :(" << std::endl;
		return ;
	}
	while (getline(MyFile, s)){
		count = s.find(s1, 0);
		if (count == std::string::npos){
			temp2 = s;
		}
		while (count != std::string::npos){
			temp2 = s.substr(0, count);
			temp2 += s2;
			temp2 += &s[count+s1.length()];
			s = temp2;
			count = s.find(s1, 0);
		}
		NewFile << temp2;
		if (!MyFile.eof())
			NewFile << std::endl;
		temp2 = "";
	}
	MyFile.close();
}
