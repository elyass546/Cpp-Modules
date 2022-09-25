#include "Dog.hpp"
#include "Cat.hpp"

int main(){
    Animal *animal = new Animal();
    Dog *dog = new Dog();
    Cat *cat = new Cat();

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