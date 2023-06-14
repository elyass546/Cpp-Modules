#include "PmergeMe.hpp"

void	PMerge::FillCont( char **args ) {
	(void)args;
}

PMerge::PMerge( void ) {}

PMerge::PMerge( char **av, int ac ) {
	int i = 1;
	while (i < ac) {
		int j = 0;
		while (av[i][j]) {
			if (!isdigit(av[i][j]) && av[i][j] != '+')
				ft_error("Wrong input!");
			j++;
		}
		_Vec.push_back(atoi(av[i]));
		i++;
	}
	std::copy(_Vec.begin(), _Vec.end(), std::back_inserter(_List));
	std::cout << "Original vector: ";
  	for (std::list<int>::iterator it = _List.begin(); it != _List.end(); it++) {
  	    std::cout << (*it) << " ";
  	}
  	std::cout << std::endl;
	mergeSortTemp(_Vec, _Vec.begin(), _Vec.size() - 1);
	mergeSortTemp(_List, _List.begin(), _List.size() - 1);
	std::cout << "Original vector: ";
  	for (std::list<int>::iterator it = _List.begin(); it != _List.end(); it++) {
  	    std::cout << (*it) << " ";
  	}
  	std::cout << std::endl;
}

PMerge::PMerge( PMerge const& pmer) {
	*this = pmer;
}

PMerge PMerge::operator=( PMerge const& pmer) {
	_Vec = pmer._Vec;
	_List = pmer._List;
	return (*this);
}

PMerge::~PMerge( void ) {}