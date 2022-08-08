#include "Zombie.hpp"

Zombie::Zombie( ){

}


Zombie::~Zombie( ){
    std::cout << this->zombie_name << " destroyed" << std::endl;
}

void    Zombie::announce( void ){
    std::cout << getName() << " Created" << std::endl;
};