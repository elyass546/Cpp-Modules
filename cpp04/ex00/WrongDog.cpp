#include "WrongDog.hpp"

WrongDog::WrongDog( void ) {
    std::cout << "WrongDog Default constructor called!" << std::endl;
    setTypeValue("WrongDog");
}

WrongDog::~WrongDog( void ) {
    std::cout << "WrongDog Destructor called!" << std::endl;
}

WrongDog::WrongDog( WrongDog const& Ani ) {
    std::cout << "WrongDog copy constructor called!" << std::endl;
    type = Ani.type;
}

WrongDog&  WrongDog::operator=( WrongDog const & Ani ) {
    std::cout << "WrongDog copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    WrongDog::makeSound( void ) {
    std::cout << "The WrongDog says : Haow " << std::endl;
}
