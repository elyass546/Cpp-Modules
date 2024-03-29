#include "Fixed.hpp"

Fixed::Fixed( void ) {
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed( void ) {
    this->value = 0;
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
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
};

Fixed &Fixed::operator=(Fixed const & F2){
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = F2.getRawBits();
    return (*this);
}