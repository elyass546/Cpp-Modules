#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain( void );
        Brain( Brain const& );
        Brain   operator=( Brain const& );
        virtual ~Brain( void );
        void    setIdea( const std::string &, int );
        virtual std::string getIdea( int  );
};

#endif