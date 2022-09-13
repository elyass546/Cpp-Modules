#include "Zombie.hpp"

int main(){
    Zombie* zombies;

    zombies = zombieHorde(10, "Hello");
    for (int i = 0; i < 10 ; i++){
        zombies[i].announce();
    }
    delete[] zombies;
}