#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int value;
        static const int numfrac = 8;
    public:
        Fixed( void );
        Fixed( const float );
        Fixed( const int );
        Fixed( Fixed const& );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        Fixed&  operator=(Fixed const &) ;
        Fixed   operator*(Fixed const &);
        Fixed   operator+(Fixed const &);
        Fixed   operator-(Fixed const &);
        Fixed   operator/(Fixed const &);
        bool    operator>(Fixed const &) const;
        bool    operator<(Fixed const &) const;
        bool    operator!=(Fixed const &) const;
        Fixed  operator++(void);
        Fixed  operator++(int);
        Fixed  operator--(void);
        Fixed  operator--(int);
        bool    operator==(Fixed const &) const;
        bool    operator>=(Fixed const &) const;
        bool    operator<=(Fixed const &) const;
        int     getRawBits( void ) const;
        void    setRawBits( int const );
        static const Fixed   min(Fixed const &, Fixed const &);
        static const Fixed   max(Fixed const &, Fixed const &);
        static Fixed   min(Fixed &, Fixed &);
        static Fixed   max(Fixed &, Fixed &);
        ~Fixed();
};

std::ostream& operator<<(std::ostream& st ,Fixed const & Fix);

#endif