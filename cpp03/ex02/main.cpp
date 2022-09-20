#include "FragTrap.hpp"

int main() {
    FragTrap    salam("salam");
    FragTrap    labas("labas");
    ScavTrap    ilias("ilias");
    salam.attack("labas");
    labas.takeDamage(5);
    labas.attack("ilias");
    ilias.guardGate();
    ilias.attack("labas");
    labas.takeDamage(40);
    return 0;
}