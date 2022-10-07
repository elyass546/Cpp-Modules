#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class   Animal {
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( Animal const& );
        Animal  &operator=( Animal const& );
        virtual ~Animal( void );
        void    setTypeValue( std::string );
        std::string getTypeValue( void );
        virtual void    makeSound( void );
};

#endif