#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class   WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( WrongAnimal const& );
        WrongAnimal  &operator=( WrongAnimal const& );
        ~WrongAnimal( void );
        void    setTypeValue( std::string );
        std::string getTypeValue( void );
        void    makeSound( void );
};

#endif