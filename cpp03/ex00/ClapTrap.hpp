#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	private:
		std::string 	Name;
		unsigned int 	HitPoints;
		unsigned int 	EnergyPoints;
		unsigned int 	AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &);
		ClapTrap	operator=(ClapTrap const &);
		void 		attack(const std::string &target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
};

#endif