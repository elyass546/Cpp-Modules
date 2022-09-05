#include "Fixed.hpp"

Fixed::Fixed( void ) {
    this->value = 0;
    std::cout << "Constructor called" << std::endl;
};

Fixed::~Fixed( void ) {
    this->value = 0;
    std::cout << "Default destructor called" << std::endl;
};

Fixed::Fixed(Fixed const & F) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = F.getRawBits();
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