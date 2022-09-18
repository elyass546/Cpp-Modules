#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    Name = "yal3ab";
    HitPoints = 100;
    EnergyPoints = 100;
    AttakDamage = 30;
}

FragTrap::FragTrap( std::string str ) : ClapTrap(str) {
    HitPoints = 100;
    EnergyPoints = 100;
    AttakDamage = 30;
}
