#include "HumanB.hpp"

void    HumanB::attack( void ){
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB( std::string str ) : name(str) {

}

HumanB::~HumanB( void ) {
    
}