#include "RPN.hpp"

void	RPN::Calculation( char c ) {
	if (list.size() < 2)
		ft_error("test test");
	int first, second;
	first = list.top();
	list.pop();
	second = list.top();
	list.pop();
	if (c == '+')
		list.push(second + first);
	else if (c == '-')
		list.push(second - first);
	else if (c == '*')
		list.push(second * first);
	else if (c == '/')
	{
		if (first == 0)
			ft_error("kat9sam 3la 0 wach nta hbil ola malk!");
		list.push(second / first);
	}
}

RPN::RPN( void ){}

RPN::RPN( string line ) {
	std::istringstream ss(line);
	string token;
	while (ss >> token)
	{
		if (token.length() != 1)
			ft_error("Wrong input length.");
		if (isdigit(token[0]))
			list.push(atoi(token.c_str()));
		else
			Calculation(token[0]);
	}
	
}

RPN::RPN( RPN const& rpn ) {
	*this = rpn;
}

RPN RPN::operator=( RPN const& rpn ) {
	list = rpn.list;
	return (*this);
}

RPN::~RPN( void ) {
	std::cout << list.top() << std::endl;
}