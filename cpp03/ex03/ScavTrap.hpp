#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap( std::string );
        ScavTrap( void );
        ~ScavTrap( void );
        ScavTrap( ScavTrap const& );
        ScavTrap   operator=( ScavTrap const& );
        void	guardGate( void );
        void attack(const std::string& target);
};

#endif