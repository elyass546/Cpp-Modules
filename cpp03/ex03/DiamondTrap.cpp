#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string str ) : Name(str){
    std::cout << "DiamondTrap default constructor called" << std::endl;
    ClapTrap::Name = str + "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap( void ) {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    Name = "yal3ab";
    ClapTrap::Name = Name + "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const& Diamond) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    Name = Diamond.Name;
    HitPoints = Diamond.HitPoints;
    EnergyPoints = Diamond.EnergyPoints;
    AttackDamage = Diamond.AttackDamage;
}

DiamondTrap DiamondTrap::operator=( DiamondTrap const& Diamond) {
    std::cout << "DiamondTrap copy assignment operator" << std::endl;
    Name = Diamond.Name;
    HitPoints = Diamond.HitPoints;
    EnergyPoints = Diamond.EnergyPoints;
    AttackDamage = Diamond.AttackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap " << Name << " ClapTrap " << ClapTrap::Name << std::endl;
}
