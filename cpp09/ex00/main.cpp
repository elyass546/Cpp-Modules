#include "BitcoinExchange.hpp"

void	ft_error(const std::string & str)
{
	std::cout << "Error: " << str << std::endl;
	exit(1);
}

int main(int ac, char **av)
{
	std::string	str;
	int	i;

	if (ac != 2)
		ft_error("could not open file.");
	i = open(av[1], O_RDONLY);
	if (i == -1)
		ft_error("file does not exist.");
	std::ifstream Myfile(av[1]);
	while (getline(Myfile, str))
	{
		std::cout << "check lines : " << str << std::endl;
	}

}