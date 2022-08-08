#include  "PhoneBook.hpp"
#include <fstream>
int	main(void)
{
	PhoneBook	rec;
	std::string	str;
	static int	i;
	int			ret;

	std::cout << "Welcome to 80's PhoneBook" << std::endl;
	std::cout << "allowed commands ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "🙂enter cmd : ";
		getline(std::cin, str);
		if (str == "EXIT")
		{
			std::cout << "Good bye" << std::endl;
			break;
		}
		else if (str == "ADD")
		{
			i = i % 8;
			if (rec.add(str, i + 1) != -1)
				i++;
		}
		else if (str == "SEARCH")
		{
			rec.preprint();
			rec.Search();
			while (1)
			{
				std::cout << "Enter index for more information : ";
				getline(std::cin, str);
				if((atoi(str.c_str()) >= 1) && (atoi(str.c_str()) <= 8))
					ret = rec.print(atoi(str.c_str()));
				if (ret == 0)
					break ;
			}
		}
		else if (std::cin.eof())
			break ;
			
		else
			std::cout << "Wrong Command" << std::endl;
	}
	return 0;
}
