#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    std::cout << "WrongAnimal Default constructor called!" << std::endl;
    setTypeValue("WrongAnimal");
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal Destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const& Ani ) {
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    type = Ani.type;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const & Ani ) {
    std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    WrongAnimal::makeSound( void ) {
    std::cout << "random Wronganimal sound" << std::endl;
}

void    WrongAnimal::setTypeValue( std::string Name ) {
    type = Name;
}

std::string WrongAnimal::getTypeValue( void ) {
    return (type);
}
