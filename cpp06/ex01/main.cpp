#include "Serialize.hpp"


int main(){
    Data* asdf = new Data();
    Data data;
    uintptr_t   test1;

    data.Name = "ilias";
    data.number = 53;
    test1 = serialize(&data);
    std::cout << "test after casting : " << test1 << std::endl;
    asdf = deserialize(test1);
    std::cout << "asdf Name after casting : " << asdf->Name << std::endl;
    std::cout << "asdf num after casting : " << asdf->number << std::endl;
    delete asdf;
    return 0;
}