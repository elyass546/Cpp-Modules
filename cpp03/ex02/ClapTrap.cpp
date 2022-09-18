#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string str ) {
    std::cout << "Constructor called !" << std::endl;
    Name = str;
    HitPoints = 10;
    EnergyPoints = 10;
    AttakDamage = 0;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor called !" << std::endl;
}

ClapTrap::ClapTrap( void ) {
    std::cout << "Constructor called !" << std::endl;
    Name = "yal3ab";
    HitPoints = 10;
    EnergyPoints = 10;
    AttakDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & Clap){
    *this = Clap;
}

ClapTrap    ClapTrap::operator=(ClapTrap const & Clap) {
    Name = Clap.Name;
    HitPoints = Clap.HitPoints;
    EnergyPoints = Clap.EnergyPoints;
    AttakDamage = Clap.AttakDamage;
    return (*this);
}

void    ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 and EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << "attacks " << target << ", causing " << AttakDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "you have no HitPoints or EnergyPoints left !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " take damage " << amount << std::endl;
        HitPoints -= amount;
    }
    else
    {
        HitPoints = 0;
        std::cout << "he's dead" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "you have healed!" << std::endl;
}
