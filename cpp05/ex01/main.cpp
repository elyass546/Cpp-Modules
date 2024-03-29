#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat test0(10, "John Doe 1");
        Form form("Random Form 1", 15, 10);
        test0.signForm(form);
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    try {
        Bureaucrat test0(20, "John Doe 2");
        Form form("Random Form 2", 10, 10);
        test0.signForm(form);
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    try {
        Bureaucrat test0(0, "John Doe 3");
        Form form("Random Form 3", 10, 10);
        test0.signForm(form);
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
    std::cout << std::endl;
}