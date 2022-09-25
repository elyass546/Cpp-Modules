#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include "WrongAnimal.hpp"

class   WrongDog : public WrongAnimal {
    public:
        WrongDog( void );
        WrongDog( WrongDog const& );
        WrongDog  operator=( WrongDog const& );
        ~WrongDog( void );
        void    makeSound( void );
};

#endif