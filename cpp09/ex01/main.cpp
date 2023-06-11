#include "RPN.hpp"

void	ft_error( string str )
{
	std::cerr << "Error: " << str << std::endl;
	exit(1);
}

int	IsOperatorValid( char c ) {
	if (c != '*' && c != '/' && c != '+' && c != '-')
		return (0);
	return (1);
}

int	IsSpace( char c )
{
	if (c != ' ' && !IsOperatorValid(c))
		return (0);
	return (1);
}

int	CheckLine( string str ) {
	for (size_t i = 0; i < str.length(); i++) {
		if ((!isdigit(str[0]) || !isdigit(str[2])) || str[1] != ' ')
			return (0);
		else if (!isdigit(str[i]) && !IsSpace(str[i]))
			return (0);
	}
	return (1);
}

int main( int ac, char **av) {
	if ( ac != 2 )
		ft_error("wrong number of args!");
	if (!CheckLine(av[1]))
		ft_error("Wrong input!");
	RPN calc(av[1]);
}