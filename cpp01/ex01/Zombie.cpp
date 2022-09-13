#include "Zombie.hpp"

Zombie::Zombie( void ){}

void    Zombie::setName( std::string name) {
    zombie_name = name;
}

std::string    Zombie::getName( void ) {
    return (zombie_name);
}

Zombie::~Zombie( void ){
    std::cout << this->zombie_name << " destroyed" << std::endl;
}

void    Zombie::announce( void ){
    std::cout << getName() << " Created" << std::endl;
};