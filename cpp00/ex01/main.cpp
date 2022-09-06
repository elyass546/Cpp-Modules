#include  "PhoneBook.hpp"
#include <fstream>
int	main(void)
{
	PhoneBook	rec;
	std::string	str;
	std::string	s2;
	static int	i;
	int			ret;

	std::cout << "Welcome to 80's PhoneBook" << std::endl;
	std::cout << "allowed commands ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "🙂 enter cmd 🙂: ";
		getline(std::cin, str);
		if (str == "EXIT" || std::cin.eof())
		{
			std::cout << "Good bye" << std::endl;
			break;
		}
		else if (str == "ADD")
		{
			i = i % 8;
			if (rec.add(str, i) != -1)
				i++;
		}
		else if (str == "SEARCH")
		{
			ret = -1;
			rec.preprint();
			rec.Search();
			while (1)
			{
				std::cout << "Enter an index for more information or 0 for exit : ";
				getline(std::cin, s2);
				if((atoi(s2.c_str()) > 0) && (atoi(s2.c_str()) < 9))
					ret = rec.print(atoi(s2.c_str()));
				else if (atoi(s2.c_str()) == 0)
					break ;
				else
					std::cout << "Try another number between 1 and 8" << std::endl;
				if (ret == 0)
					break ;
			}
		}
		else
			std::cout << "Wrong Command" << std::endl;
	}
	return 0;
}
