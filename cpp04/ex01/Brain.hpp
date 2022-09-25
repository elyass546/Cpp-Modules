#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        void    setIdea(int, std::string);
        Brain( void );
        Brain( Brain const& );
        Brain   operator=( Brain const& );
        ~Brain( void );
};


#endif