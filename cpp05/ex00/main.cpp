#include "Bureaucrat.hpp"

int main(){
    try {
        Bureaucrat yal3ab(200, "ilias");
    }
    catch (std::exception & e){
        std::cout << "Exception : " << e.what() << std::endl;
    }
    try{
        Bureaucrat yal3ab(100, "jad");
        std::cout << yal3ab << std::endl;
    }
    catch (std::exception & e){
        std::cout << "Exception : " << e.what() << std::endl;
    }
    try{
        Bureaucrat yal3ab(0, "zak");
    }
    catch (std::exception & e){
        std::cout << "Exception : " << e.what() << std::endl;
    }
}