#include "Bureaucrat.hpp"

int main(){
    
    try {
        Bureaucrat yal3ab(200, "ilias");
    }
    catch (std::exception & e){
        std::cout << "Exception :" << std::endl;
    }
    try {
        yal3ab.GradeTooLowException();
    }
    catch (std::exception & e){
        std::cout << "Exception :" << std::endl;
    }
}