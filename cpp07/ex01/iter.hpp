#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T> 
void add1(T &test){
    test++;
}

template <typename T> 
void print(T &str){
    std::cout << str;
}

template <typename T> 
void iter(T* str, int len, void (*f)(T &)){
    for (int i = 0; i < len; i++){
        (*f)(str[i]);
    }
}

#endif