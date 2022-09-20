#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string str ): ClapTrap( str ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    AttackDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
}

ScavTrap::~ScavTrap ( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap ( void ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    Name = "yal3ab";
    AttackDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
}

ScavTrap::ScavTrap( ScavTrap const & Scav) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    Name = Scav.Name;
    HitPoints = Scav.HitPoints;
    EnergyPoints = Scav.EnergyPoints;
    AttackDamage = Scav.AttackDamage;
}

ScavTrap ScavTrap::operator=( ScavTrap const& Scav) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    Name = Scav.Name;
    HitPoints = Scav.HitPoints;
    EnergyPoints = Scav.EnergyPoints;
    AttackDamage = Scav.AttackDamage;
    return (*this);
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (HitPoints > 0 and EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "you have no HitPoints or EnergyPoints left !" << std::endl;
}
