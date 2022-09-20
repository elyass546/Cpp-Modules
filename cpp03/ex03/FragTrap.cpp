#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "FragTrap default constructor called" << std::endl;
    Name = "yal3ab";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap( std::string str ) : ClapTrap(str) {
    std::cout << "FragTrap default constructor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap( FragTrap const& Frag) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    Name = Frag.Name;
    HitPoints = Frag.HitPoints;
    EnergyPoints = Frag.EnergyPoints;
    AttackDamage = Frag.AttackDamage;
}

FragTrap FragTrap::operator=( FragTrap const& Frag ) {
    std::cout << "FragTrap copy assignment operator" << std::endl;
    Name = Frag.Name;
    HitPoints = Frag.HitPoints;
    EnergyPoints = Frag.EnergyPoints;
    AttackDamage = Frag.AttackDamage;
    return (*this);
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FrapTrap requesting highfives" << std::endl;
}
