#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    {
        Weapon club = Weapon("fardi");
        HumanA bob("ilias", club);
        bob.attack();
        club.setType("another fardi");
        bob.attack();
    }
    {
        Weapon club = Weapon("kabos");
        HumanB jim("jad");
        jim.setWeapon(club);
        jim.attack();
        club.setType("another kabos");
        jim.attack();
    }
    return (0);
}
