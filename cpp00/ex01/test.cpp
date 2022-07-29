#include "PhoneBook.hpp"

int main()
{
	std::string	str;

	while (1)
	{
		getline(std::cin, str);
		if (str == "salam")
			std::cout << str << "labas" << std::endl;
		if (str == "end")
			exit(1);
	}
}