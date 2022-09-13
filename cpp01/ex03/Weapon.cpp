#include "Weapon.hpp"

Weapon::Weapon( std::string str) {
    this->type = str;
}

Weapon::~Weapon ( void ) {}


void    Weapon::setType( std::string str) {
    type = str;
}

std::string Weapon::getType( void ) {
    return (type);
}