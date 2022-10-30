#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>


class fouss : public std::exception {
    public:
        virtual const char *what() const throw(){
            return ("No number found!");
        }
};

template<typename T>
void    easyfind(T* first, T second){
    for (int i = 0; first[i] ; i++){
        if (second == first[i])
        {
            std::cout << "found in index : " << i << std::endl;
            return ;
        }
    }
    throw fouss();
}

#endif