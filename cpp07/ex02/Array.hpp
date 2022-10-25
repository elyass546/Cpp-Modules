#ifndef ARRAY_HPP
#define ARRAY_HPP

class Array {
    private:
        /* data */
    public:
        Array( void );
        Array( unsigned int );
        Array( Array const& );
        Array& operator=( Array const& );
        ~Array();
};



#endif