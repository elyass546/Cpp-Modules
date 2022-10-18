#include "Intern.hpp"

int main( void )
{
    Intern inter;
    Bureaucrat bureau(1, "John Doe");
    Form *a = inter.makeForm("RobotomyRequestForm","R2D2");
    Form *b = inter.makeForm("ShrubberyCreationForm","Tree");
    Form *c = inter.makeForm("PresidentialPardonForm","Obamna");

    std::cout << std::endl;

    bureau.signForm(*a);
    bureau.executeForm(*a);  
  
    std::cout << std::endl;

    bureau.signForm(*b);
    bureau.executeForm(*b);

    std::cout << std::endl;

    bureau.signForm(*c);
    bureau.executeForm(*c);
}