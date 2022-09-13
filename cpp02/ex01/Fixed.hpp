#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int value;;
        static const int numfrac = 8;
    public:
        Fixed( void );
        Fixed( const float );
        Fixed( const int );
        Fixed( Fixed const& );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(Fixed const &);
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const );
};

std::ostream& operator<<(std::ostream& st ,Fixed const & Fix);

#endif