#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

class Span {
    private:
        unsigned int _Max;
        std::vector<int> _Vec;
    public:
        Span( unsigned int );
        Span( void );
        void    addNumber( int );
        void    addRange( std::vector<int>::iterator, std::vector<int>::iterator );
        void    print( void );
        int     shortestSpan( void );
        int     longestSpan( void );
        class   SizeException : public std::exception {
            public :
                virtual const char* what() const throw();
        };
        class   DoubleException : public std::exception {
            public :
                virtual const char* what() const throw();
        };
        unsigned int size( void ) {return _Max;}
        int  operator[](unsigned int);
        ~Span();
};

#endif
