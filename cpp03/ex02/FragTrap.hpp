#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap( std::string );
        FragTrap( void );
        FragTrap( FragTrap const& );
        FragTrap    operator=( FragTrap const& );
        ~FragTrap( void );
};


#endif