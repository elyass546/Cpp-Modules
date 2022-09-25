#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Dog Default constructor called!" << std::endl;
    brain = new Brain();
    setTypeValue("Dog");
}

Dog::~Dog( void ) {
    std::cout << "Dog Destructor called!" << std::endl;
    delete brain;
}

Dog::Dog( Dog const& Ani ) {
    std::cout << "Dog copy constructor called!" << std::endl;
    type = Ani.type;
}

Dog  Dog::operator=( Dog const & Ani ) {
    std::cout << "Dog copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    Dog::makeSound( void ) {
    std::cout << "The Dog says : Haow " << std::endl;
}
