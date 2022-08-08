#include "Zombie.hpp"

int main(){
    Zombie *zombie;

    zombie = newZombie("Hello I'm a new Zombie here ;D");
    zombie->announce();
    delete zombie;
}