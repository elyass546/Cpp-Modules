#include "easyfind.hpp"

int main() {
    try{
        int i[] = {1, 2, 3, 4, 5, 2434, 34, 665};
        int a = 340;
        size_t size( sizeof(i) / sizeof(int) );
        std::vector<int> vec(i, i + size);
        easyfind(vec , a);
    }
    catch (std::exception& e ){
        std::cout << "Exception : " << e.what() << std::endl;
    }
    try{
        int i[] = {1, 2, 3, 4, 5, 2434, 34, 665};
        int a = 5;
        size_t size( sizeof(i) / sizeof(int) );
        std::vector<int> vec(i, i + size);
        easyfind(vec , a);
    }
    catch (std::exception& e ){
        std::cout << "Exception : " << e.what() << std::endl;
    }
}