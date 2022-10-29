#include "Array.hpp"


void salam( void ){
    Array<int>  intArray(3);
    Array<int>  test(4);
    Array<int>  hello;
    test = intArray;
    test = hello;
}

int main(){
    Array<int>            intArray(6);
    Array<std::string>    stringArray(10);
    Array<std::string>    otherStringArray;

//****************************************************

    try{
        stringArray[0] = "Hi ";
        stringArray[1] = "Hello ";
        stringArray[2] = "How are you? ";
        stringArray[3] = "Fine and you? ";
        stringArray[4] = "Doing great thanks! ";
        stringArray[5] = "You're very welcome ";
        std::cout << "intArray.size() = " << intArray.size() << std::endl;
        std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
        otherStringArray = stringArray;
        otherStringArray[3] = "I'm good, how about you? ";
        intArray[0] = 123;
        intArray[1] = 87;
        intArray[2] = 456;
        intArray[3] = 54654;
        intArray[4] = 4564578;
        intArray[5] = 1230157;
    }
    catch ( std::exception& e){
        std::cout << "Exception 1 : "<< e.what() << std::endl;
    }

//****************************************************

    try{
        std::cout << stringArray[59] << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Exception 2 : " << e.what() << std::endl;
    }

//****************************************************

    try{
        for (int i = 0; i < 8; i++){
            std::cout << stringArray[i] << i << std::endl;
            std::cout << otherStringArray[i] << i << std::endl;
        }
        for (int i = 0; i < 6; i++){
            std::cout << "i :" << i << ' ' << intArray[i] << std::endl;
        }
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    salam();
    system("leaks Array");
}
