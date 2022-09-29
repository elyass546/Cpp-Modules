#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();
    Animal *animal[10];

    std::string str = "Hello Wrold!";

    i->setIdea(str+"cat", 1);
    j->setIdea(str+"dog", 1);

    std::cout << i->getIdea(1) << std::endl;
    std::cout << j->getIdea(1) << std::endl;

    delete j;//should not create a leak
    delete i;

    for(int i = 0; i < 5; i++)
        animal[i] = new Dog();

    for(int i = 5; i < 10; i++)
        animal[i] = new Cat();

    for (int i = 0; i < 10; i++){
        std::cout << animal[i]->getTypeValue() << std::endl;
        animal[i]->makeSound();
    }

    for (int i = 0;i < 10; i++)
        delete animal[i];

}
