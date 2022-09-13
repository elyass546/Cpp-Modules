#include "HumanB.hpp"

HumanB::HumanB( std::string str ) : name(str) {}

HumanB::~HumanB( void ) {}

void    HumanB::attack( void ){
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w) {
    weapon = &w;
}
