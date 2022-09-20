#include "ScavTrap.hpp"

int main() {
    ScavTrap    test1("test1");
    ScavTrap    test2("test2");
    test1.attack("test2");
    test2.takeDamage(5);
    test2.attack("test1");
    test1.takeDamage(5);
    test1.beRepaired(5);
    test1.attack("test2");
    test2.guardGate();
    return 0;
}