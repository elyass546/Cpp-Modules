#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class IndexNotFound : public std::exception {
    public:
        virtual const char *what() const throw(){return ("No number found!");}
};

template<typename T>
void    easyfind(T first, int second){
    typename T::iterator iter = std::find(first.begin(), first.end(), second);
    if (iter == first.end())
        throw IndexNotFound();
    std::cout << "Element found at position : " << iter - first.begin() << std::endl;
}

#endif