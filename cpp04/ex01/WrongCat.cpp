#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "WrongCat Default constructor called!" << std::endl;
    setTypeValue("WrongCat");
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat Destructor called!" << std::endl;
}

WrongCat::WrongCat( WrongCat const& Ani ) {
    std::cout << "WrongCat copy constructor called!" << std::endl;
    type = Ani.type;
}

WrongCat  WrongCat::operator=( WrongCat const & Ani ) {
    std::cout << "WrongCat copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    WrongCat::makeSound( void ) {
    std::cout << "The Wrongcat says : Meow " << std::endl;
}