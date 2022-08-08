#include "HumanA.hpp"

void    HumanA::attack( void ){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA( std::string str , Weapon& weap) : name(str) , weapon(weap) {

}

HumanA::~HumanA( void ) {

}

