#include "Cat.hpp"

Cat::Cat( void ) {
    brain = new Brain();
    setTypeValue("Cat");
    std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::~Cat( void ) {
    delete brain;
    std::cout << "Cat Destructor called!" << std::endl;
}

Cat::Cat( Cat const& Ani ) {
    std::cout << "Cat copy constructor called!" << std::endl;
    type = Ani.type;
}

Cat  Cat::operator=( Cat const & Ani ) {
    std::cout << "Cat copy assignment operator called!" << std::endl;
    delete this->brain;
    brain = new Brain();
    brain = Ani.brain;
    type = Ani.type;
    return (*this);
}

void    Cat::makeSound( void ) {
    std::cout << "The cat says : Meow " << std::endl;
}
