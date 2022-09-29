#include "Animal.hpp"

Animal::Animal( void )  {
    std::cout << "Animal Default constructor called!" << std::endl;
    setTypeValue("Animal");
}

Animal::~Animal( void ) {
    std::cout << "Animal Destructor called!" << std::endl;
}

Animal::Animal( Animal const& Ani ) {
    std::cout << "Animal copy constructor called!" << std::endl;
    (*this) = Ani;
}

Animal  Animal::operator=( Animal const & Ani ) {
    std::cout << "Animal copy assignment operator called!" << std::endl;
    type = Ani.type;
    brain = Ani.brain;
    return (*this);
}

Brain * Animal::getBrain() const {
    return (this->brain);
}

void    Animal::makeSound( void ) {
    std::cout << "random animal's sound" << std::endl;
}

void    Animal::setTypeValue( std::string Name ) {
    type = Name;
}

std::string Animal::getTypeValue( void ) {
    return (type);
}

void    Animal::setIdea( const std::string &str, int i) {
    this->getBrain()->setIdea(str, i);
}

std::string Animal::getIdea( int i ) {
    return (this->getBrain()->getIdea(i));
}
