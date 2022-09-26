#include "Dog.hpp"

Dog::Dog( void ) {
    brain = new Brain();
    setTypeValue("Dog");
    std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::~Dog( void ) {
    delete brain;
    std::cout << "Dog Destructor called!" << std::endl;
}

Dog::Dog( Dog const& Ani ) {
    std::cout << "Dog copy constructor called!" << std::endl;
    type = Ani.type;
}

Dog  Dog::operator=( Dog const & Ani ) {
    std::cout << "Dog copy assignment operator called!" << std::endl;
    delete this->brain;
    brain = new Brain();
    brain = Ani.brain;
    type = Ani.type;
    return (*this);
}

void    Dog::makeSound( void ) {
    std::cout << "The Dog says : Haow " << std::endl;
}
