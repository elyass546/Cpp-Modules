#include <iostream>
#include <fstream>

int main(){
	std::string s = "Hello";
	std::ofstream Myfile(s);

	Myfile << "alsd;fjk";
	Myfile.close();
}