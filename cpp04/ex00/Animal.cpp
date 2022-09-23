#include "Animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal Destructor called!" << std::endl;
}

Animal::Animal( Animal const& Ani ) {
    std::cout << "Animal copy constructor called!" << std::endl;
    type = Ani.type;
}

Animal  Animal::operator=( Animal const & Ani ) {
    std::cout << "Animal copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    Animal::makeSound( void ) {
    std::cout << "random animal sound" << std::endl;
}

void    Animal::setTypeValue( std::string Name ) {
    type = Name;
}

std::string Animal::getTypeValue( void ) {
    return (type);
}
