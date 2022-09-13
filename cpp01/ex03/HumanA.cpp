#include "HumanA.hpp"

HumanA::HumanA( std::string str , Weapon& weap) : name(str) , weapon(weap) {}

HumanA::~HumanA( void ) {}

void    HumanA::attack( void ){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
