#include "PMergeMe.hpp"

void	PMerge::FillCont( char **args ) {
	
}

PMerge::PMerge( void ) {}

PMerge::PMerge( char **args ) {

}

PMerge::PMerge( PMerge const& pmer) {
	*this = pmer;
}

PMerge PMerge::operator=( PMerge const& pmer) {
	_Vec = pmer._Vec;
	_Arr = pmer._Arr;
	return (*this);
}

PMerge::~PMerge( void ) {}