#include "Zombie.hpp"

Zombie::Zombie( std::string name){
    this->name = name;
}


Zombie::~Zombie( void ){
    std::cout << this->name << " destroyed" << std::endl;
}

Zombie::Zombie( void ){}

void    Zombie::announce( void ){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};