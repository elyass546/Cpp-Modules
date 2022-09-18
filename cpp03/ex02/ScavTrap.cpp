#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string str ): ClapTrap( str ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    AttakDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
}

ScavTrap::~ScavTrap ( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap ( void ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    Name = "yal3ab";
    AttakDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
}

ScavTrap::ScavTrap( ScavTrap const & Scav) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    Name = Scav.Name;
    HitPoints = Scav.HitPoints;
    EnergyPoints = Scav.EnergyPoints;
    AttakDamage = Scav.AttakDamage;
}

ScavTrap ScavTrap::operator=( ScavTrap const& Scav) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    Name = Scav.Name;
    HitPoints = Scav.HitPoints;
    EnergyPoints = Scav.EnergyPoints;
    AttakDamage = Scav.AttakDamage;
    return (*this);
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}
