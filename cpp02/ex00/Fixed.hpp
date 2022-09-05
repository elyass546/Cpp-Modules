#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    private:
        int value;
        static const int numfrac = 8;
    public:
        Fixed( void );
        Fixed( Fixed const& );
        Fixed & operator = (Fixed const &);
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const ); 
};
#endif