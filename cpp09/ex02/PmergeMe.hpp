#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
# define MICROSECOND 100000

typedef std::string string;
typedef std::vector<unsigned int> vector;
typedef std::list<unsigned int> list;

class PmergeMe {
    private:
        list    _list;
        vector  _vec;
	public:
		PmergeMe( void );
		PmergeMe( char **, int );
		PmergeMe( const PmergeMe& );
		PmergeMe &operator=( const PmergeMe& );
		~PmergeMe( void );

		void SortVector( void );
		void sortList( void );
};

unsigned int    ft_stou( const std::string& );
void            PrintVector( vector& );
void        	ft_error( string  );
#endif