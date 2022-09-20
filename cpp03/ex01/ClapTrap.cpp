#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string str ) {
    std::cout << "ClapTrap default constructor called !" << std::endl;
    Name = str;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destructor called !" << std::endl;
}

ClapTrap::ClapTrap( void ) {
    std::cout << "ClapTrap default constructor called !" << std::endl;
    Name = "yal3ab";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & Clap){
    std::cout << "ClapTrap copy constructor called!" << std::endl;
    this->Name = Clap.Name;
    this->HitPoints = Clap.HitPoints;
    this->EnergyPoints = Clap.EnergyPoints;
    this->AttackDamage = Clap.AttackDamage;
}


ClapTrap    ClapTrap::operator=(ClapTrap const & Clap) {
    std::cout << "ClapTrap copy assignment operator called!" << std::endl;
    this->Name = Clap.Name;
    this->HitPoints = Clap.HitPoints;
    this->EnergyPoints = Clap.EnergyPoints;
    this->AttackDamage = Clap.AttackDamage;
    return (*this);
}

void    ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 and EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "you have no HitPoints or EnergyPoints left !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoints >= 0 && HitPoints >= amount)
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
    std::cout << Name << " you have healed!" << std::endl;
}
