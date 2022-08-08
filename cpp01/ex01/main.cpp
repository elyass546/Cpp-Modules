#include "Zombie.hpp"

int main(){
    Zombie* zombies;
    std::string str;

    for (int i = 0; i < 3 ; i++)
    {
        zombies = zombieHorde(3, "Hello");
        zombies[i].announce();
    }
    delete[] zombies;
}