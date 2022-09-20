#ifndef DIAMOND_HPP
#define DIAMOND_HPP
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap , public ScavTrap{
    private:
        std::string Name;
    public:
        DiamondTrap( std::string );
        DiamondTrap( void );
        DiamondTrap( DiamondTrap const& );
        DiamondTrap operator=( DiamondTrap const& );
        ~DiamondTrap( void );
        void attack(const std::string& target);
        void    whoAmI( void );
};



#endif