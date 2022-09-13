#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed( const int val ) {
    value = val << this->numfrac;
    std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed( const float val ) {
    value = roundf(val * (1 << this->numfrac));
    std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(Fixed const & F) {
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
};

void    Fixed::setRawBits(int const Nbr) {
    value = Nbr;
};

int     Fixed::getRawBits( void ) const {
    return (value);
};

Fixed &Fixed::operator=(Fixed const & F2){
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = F2.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& st ,Fixed const & Fix) {
    st << Fix.toFloat();
    return (st);
}

int Fixed::toInt( void ) const {
    return (value / (1 << numfrac));
}

float Fixed::toFloat( void ) const {
    return ( float(value) / float(1 << this->numfrac));
}
