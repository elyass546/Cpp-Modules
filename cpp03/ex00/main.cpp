#include "ClapTrap.hpp"

int main() {
    ClapTrap test("test1");
    ClapTrap test2("test2");
    test.attack("test2");
    test2.takeDamage(10);
    test2.beRepaired(50);
    test2.attack("test1");
    test.takeDamage(20);
    return 0;
}