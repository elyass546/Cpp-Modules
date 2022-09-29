#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class   Animal {
    private:
        Brain *brain;
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( Animal const& );
        virtual Brain * getBrain() const;
        void    setIdea( const std::string & , int );
        std::string getIdea( int  );
        Animal  operator=( Animal const& );
        virtual ~Animal( void );
        void    setTypeValue( std::string );
        std::string getTypeValue( void );
        virtual void    makeSound( void ) = 0;
};

#endif