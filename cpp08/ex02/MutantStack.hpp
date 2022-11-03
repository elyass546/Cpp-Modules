#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <vector>
#include <stack>

template<template T>
class MutantStack : public std::stack<T> {
    public:
        typedef<typename iterator> std::stack<T>::container_type;
        MutantStack( void );
        ~MutantStack( void );

        iterator begin(){return std::stack<T>::c.begin();}
        iterator end(){return std::stack<T>::c.end();}
};


#endif