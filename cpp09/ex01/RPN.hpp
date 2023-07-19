#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <cctype>
#include <sstream>
#include <stack>
#include <string>
#include <unistd.h>

typedef std::string string;
typedef std::stack<int> stack;

class RPN
{
	private:
		stack list;
	public:
		// Canonical form 
		RPN( void );
		RPN( string );
		RPN( RPN const & );
		RPN operator=( RPN const & );
		~RPN();
		// Other Methods
		void	Calculation( char );
};

int		IsOperatorValid( char c );
void	ft_error( string );

#endif