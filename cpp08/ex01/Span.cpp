#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int Max ) : _Max(Max) {}

void    Span::addNumber( int Num ) {
    for (std::vector<int>::iterator it = _Vec.begin(); it != _Vec.end(); it++){
        if (Num == *it)
            throw Span::DoubleException();
    }
    if (_Vec.size() < _Max){
        _Vec.push_back(Num);
        return ;
    }
    throw Span::SizeException();
}

void    Span::print( void ){
    for (std::vector<int>::iterator it = _Vec.begin(); it != _Vec.end(); it++)
        std::cout << "vector : " << *it << std::endl;
}

const char* Span::SizeException::what() const throw(){return ("Unacceptable size!");}

const char* Span::DoubleException::what() const throw(){return ("Duplicat number!");}

int     Span::longestSpan( void ){
    if (_Vec.size() < 2)
        throw Span::SizeException();
    int min = *std::min_element(_Vec.begin(), _Vec.end());
    int max = *std::max_element(_Vec.begin(), _Vec.end());
    return (max - min);
}

int     Span::shortestSpan( void ) {
    if (_Vec.size() < 2)
        throw Span::SizeException();
    int Short, Check;
    std::vector<int> CopyVec(_Vec);
    std::sort(CopyVec.begin(), CopyVec.end());
    std::vector<int>::iterator it = CopyVec.begin();
    Check = *it+1 - *it;
    while (it != CopyVec.end()){
        
        if ((*it+1 - *it) < Check)
            Short
        it++;
    }
    return (1);
}

Span::~Span( void ){}