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
        Array( void ) : _N(0), _Array(nullptr){}

        Array( unsigned int n) : _N(n), _Array(new T[n]()){}

        Array( Array const& a) : _N(a._N), _Array(new T[a._N]()) {
            for (unsigned int i = 0 ; i < a._N; i++){
                _Array[i] = a._Array[i];
            }
        }

        Array& operator=( Array const& a){
            _N = a._N;
            if (_Array)
                delete[] _Array;
            _Array = new T[a._N];
            for (unsigned int i = 0 ; i < a._N; i++){
                _Array[i] = a._Array[i];
            }
            return (*this);
        }

        class throwObject : public std::exception {
            public:
                virtual const char* what() const throw(){
                    return ("The number is out of bounds");
                }
        };

        T&  operator[]( unsigned int Num ){
            if (Num >= _N){
                throw throwObject();
            }
            return (_Array[Num]);
        }

        unsigned int size( void ){return _N;}

        ~Array(){delete[] _Array;}
};

#endif