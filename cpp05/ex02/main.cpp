#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    //Shruberry Test
    try {
        ShrubberyCreationForm    chajara("chajara"); //   Required grades: sign 145, exec 137
        Bureaucrat test0(136, "John Tree");
        test0.signForm(chajara);
        test0.executeForm(chajara);
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    
     //Presidential Test
    try {
        PresidentialPardonForm    president("Obamna"); //    Required grades: sign 25, exec 5
        Bureaucrat test0(4, "John President");
        test0.signForm(president);
        test0.executeForm(president);
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
  
    //Robotomy Test
    try {
        RobotomyRequestForm    robot("R2D2"); //     Required grades: sign 72, exec 45
        Bureaucrat test0(30, "John Robot");
        test0.signForm(robot);
        test0.executeForm(robot);
    }
    catch (std::exception & e){
        std::cout << e.what();
    }
    std::cout << std::endl;
}