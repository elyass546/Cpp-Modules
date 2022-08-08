#include <iostream>
#include <string>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR;
    std::string& stringREF = str;

    stringPTR = &str;
    std::cout << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
    std::cout << str << std::endl << *stringPTR << std::endl << stringREF << std::endl;

}
