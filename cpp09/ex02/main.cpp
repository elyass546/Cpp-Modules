#include "PmergeMe.hpp"

void	ft_error( string str )
{
	std::cerr << "Error: " << str << std::endl;
	exit(1);
}

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

int main(int ac, char **av)
{
	if (ac <= 2)
		return (0);

	for (int i = 1; i < ac; i++) {
		if (std::string(av[i]).find_first_not_of("0123456789 ") != std::string::npos)
			ft_error("Wrong input");
	}

	PmergeMe pmm(av, ac);

	return 0;
}