#include "easyfind.hpp"

int main() {
    try{
        int i[] = {1, 2, 3, 4, 5, 2434, 34, 665};
        int a = 34;
        easyfind(i , a);
    }
    catch (std::exception& e ){
        std::cout << "Exception : " << e.what() << std::endl;
    }
    try{
        int i[] = {1, 2, 3, 4, 5, 2434, 34, 665};
        int a = 9;
        easyfind(i , a);
    }
    catch (std::exception& e ){
        std::cout << "Exception : " << e.what() << std::endl;
    }
}