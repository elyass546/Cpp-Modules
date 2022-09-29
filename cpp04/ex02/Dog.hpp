#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal {
    private:
        Brain   *brain;
    public:
        Dog( void );
        Dog( Dog const& );
        Dog  operator=( Dog const& );
        ~Dog( void );
        void    setBrain( const std::string&, int );
        std::string getBrain( int );
        Brain * getBrain() const;
        void    makeSound( void );
};

#endif