#include "BitcoinExchange.hpp"

int	ft_error(const std::string & str)
{
	std::cerr << "Error: " << str << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		return(ft_error("could not open file."));
		return (1);
	}
	i = open(av[1], O_RDONLY);
	if (i == -1)
	{
		return(ft_error("file does not exist."));
		return (1);
	}
	close(i);
	BitCoinExchange	btc(av[1]);
	// std::istringstream iss(av[1]);
	// while (getline(Myfile, str))
	// {
	// 	std::cout << "check lines : " << str << std::endl;
	// }
	return (0);
}