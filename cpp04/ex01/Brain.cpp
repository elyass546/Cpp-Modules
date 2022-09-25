#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain( Brain const& brain) {
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = brain;
}

Brain   Brain::operator=( Brain const& brain) {
    std::cout << "Brain copy assignment operator called!" << std::endl;
    for (int i = 0 ; i < 100; i++) {
        ideas[i] = brain.ideas[i];
    }
    return(*this);
}

Brain::~Brain( void ) {
    std::cout << "Brain destructor called!" << std::endl;
}

void    Brain::setIdea(int i, std::string idea) {
    ideas[i] = idea;
}
