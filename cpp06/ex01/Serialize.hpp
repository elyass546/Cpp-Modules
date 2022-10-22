#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <iostream>
#include <cstdint>

struct Data {
    std::string Name;
    int number;
};

uintptr_t   serialize(Data* ptr);
Data*   deserialize(uintptr_t raw);

#endif