#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
template<typename T>
class Array {
    private:
        unsigned int    _N;
        T*              _Array;
    public:
        Array( void ){
            _N = 0;
            _Array = new T();
            _Array = nullptr;
        }
        Array( unsigned int n) : _N(n), _Array(new T[n]()){}
        Array( Array const& a) : _N(a._N), _Array(new T[n]()) {
            for (int i = 0 ; i < a._N; i++){
                _Array[i] = a._Array[i];
            }
        }
        Array*   operator new[]( Array const & A){
            Array*  NewArray = new T[A._N]();
            return (NewArray);
        }
        Array& operator=( Array const& a) : _N(a._N), _Array(new T[a._N]()) {
            for (int i = 0 ; i < a._N; i++){
                _Array[i] = a._Array[i];
            }
            return (*this);
        }
        unsigned int getN( void ){return _N;}
        T*  getArray( void ) {return _Array;}
        ~Array(){}
};



#endif