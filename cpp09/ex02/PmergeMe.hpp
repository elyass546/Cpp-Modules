#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <cctype>
#include <sstream>
#include <vector>
#include <string>
#include <unistd.h>
#include <algorithm>

typedef std::vector<size_t> vector;
typedef std::array<size_t, sizeof(size_t)> array;

class PMerge {
	private:
		vector	_Vec;
		array	_Arr;
	public:
		PMerge( void );
		PMerge( char ** );
		PMerge( PMerge const& );
		PMerge	operator=( PMerge const& );
		void	FillCont( char ** );
		~PMerge( void );
};

#endif