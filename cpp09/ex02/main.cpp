#include "PmergeMe.hpp"

void	ft_error( string str )
{
	std::cerr << "Error: " << str << std::endl;
	exit(1);
}

int main(int ac, char **av) {
	if (ac < 2)
		ft_error("Wrong input.");
	PMerge merge(av, ac);
}