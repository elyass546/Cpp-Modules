#include "Fixed.hpp"

Fixed::Fixed( void ) {
    value = 0;
};

Fixed::Fixed( const int val ) {
    value = val << this->numfrac;
};

Fixed::Fixed( const float val ) {
    value = roundf(val * (1 << this->numfrac));
};

Fixed::~Fixed( void ) {};

Fixed::Fixed(Fixed const & F) {
    *this = F;
};

void    Fixed::setRawBits(int const Nbr) {
    value = Nbr;
};

int     Fixed::getRawBits( void ) const {
    return (value);
};

Fixed &Fixed::operator=(Fixed const & F2) {
    this->value = F2.getRawBits();
    return (*this);
}

Fixed Fixed::operator*(Fixed const & F2) {
    Fixed ret (this->toFloat() * F2.toFloat());
    return (ret);
}

Fixed Fixed::operator+(Fixed const & F2) {
    Fixed ret (this->toFloat() + F2.toFloat());
    return (ret);
}

Fixed Fixed::operator-(Fixed const & F2) {
    Fixed ret (this->toFloat() - F2.toFloat());
    return (ret);
}

Fixed Fixed::operator/(Fixed const & F2) {
    Fixed ret (this->toFloat() / F2.toFloat());
    return (ret);
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

bool    Fixed::operator>(Fixed const & F)  const{
    if (this->value > F.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<(Fixed const & F) const{
    if (value < F.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=(Fixed const & F)  const{
    if (this->value >= F.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=(Fixed const & F)  const{
    if (this->toFloat() <= F.toFloat())
        return (true);
    return (false);
}

bool    Fixed::operator==(Fixed const & F)  const{
    if (this->toFloat() == F.toFloat())
        return (true);
    return (false);
}

bool    Fixed::operator!=(Fixed const & F)  const{
    if (this->toFloat() != F.toFloat())
        return (true);
    return (false);
}

Fixed   Fixed::operator++( void ) {
    Fixed F;
    F.value = ++value;
    return (F);
}

Fixed   Fixed::operator++( int ) {
    Fixed F;
    F.value = value++;
    return (F);
}

Fixed   Fixed::operator--( void ) {
    Fixed F;
    F.value = --value;
    return (F);
}

Fixed   Fixed::operator--( int ) {
    Fixed F;
    F.value = value--;
    return (F);
}

Fixed   Fixed::min(Fixed& F1, Fixed& F2){
    if (F1 > F2)
        return (F2);
    return (F1);
}

const Fixed   Fixed::min(Fixed const& F1, Fixed const& F2){
    if (F1 > F2)
        return (F2);
    return (F1);
}

Fixed   Fixed::max (Fixed& F1, Fixed& F2) {
    if (F1 > F2)
        return (F1);
    return (F2);
}

const Fixed   Fixed::max(Fixed const& F1, Fixed const& F2) {
    if (F1 > F2)
        return (F1);
    return (F2);
}
