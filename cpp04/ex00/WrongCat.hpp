#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
    public:
        WrongCat( void );
        WrongCat( WrongCat const& );
        WrongCat  &operator=( WrongCat const& );
        ~WrongCat( void );
        void    makeSound( void );
};

#endif