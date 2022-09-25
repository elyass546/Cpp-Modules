#include "Dog.hpp"
#include "Cat.hpp"

int main(){
    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    std::cout << dog->getTypeValue() << std::endl;
    std::cout << cat->getTypeValue() << std::endl;
    std::cout << animal->getTypeValue() << std::endl;

    animal->makeSound();
    std::cout << std::endl;
    dog->makeSound();
    std::cout << std::endl;
    cat->makeSound();
    std::cout << std::endl;
    delete cat;
    delete dog;
    delete animal;
}

// #include "WrongCat.hpp"
// #include "WrongDog.hpp"

// int main() {
//     WrongAnimal *animal = new WrongAnimal();
//     WrongAnimal *dog = new WrongDog();
//     WrongAnimal *cat = new WrongCat();
//     std::cout << dog->getTypeValue() << std::endl;
//     std::cout << cat->getTypeValue() << std::endl;
//     std::cout << animal->getTypeValue() << std::endl;
//     animal->makeSound();
//     std::cout << std::endl;
//     dog->makeSound();
//     std::cout << std::endl;
//     cat->makeSound();
//     std::cout << std::endl;
//     delete cat;
//     delete dog;
//     delete animal;
// }
