#include "Array.hpp"


int main(){
    try{
        Array<std::string> test(5);
        std::string s = test[2];
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
        Array<int> test(56);
        std::cout << "Numbers of elements in the array is : " << test.size() << std::endl;
    }
    catch( std::exception& e){
        std::cout << "test test ta mal 3a9lak" << std::endl;
        (void)e;
    }
}
