#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class   Cat : public Animal {
    public:
        Cat( void );
        Cat( Cat const& );
        Cat  &operator=( Cat const& );
        ~Cat( void );
        void    makeSound( void );
};

#endif