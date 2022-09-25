#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat Default constructor called!" << std::endl;
    setTypeValue("Cat");
}

Cat::~Cat( void ) {
    std::cout << "Cat Destructor called!" << std::endl;
}

Cat::Cat( Cat const& Ani ) {
    std::cout << "Cat copy constructor called!" << std::endl;
    type = Ani.type;
}

Cat  Cat::operator=( Cat const & Ani ) {
    std::cout << "Cat copy assignment operator called!" << std::endl;
    type = Ani.type;
    return (*this);
}

void    Cat::makeSound( void ) {
    std::cout << "The cat says : Meow " << std::endl;
}