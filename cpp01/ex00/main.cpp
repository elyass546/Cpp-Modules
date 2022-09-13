#include "Zombie.hpp"

int main(){
    Zombie *zombie;

    zombie = newZombie("ilias");
    zombie->announce();
    delete zombie;
    randomChump("ilias");
}