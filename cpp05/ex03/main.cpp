#include "Intern.hpp"

int main( void )
{
    Intern inter;
    Bureaucrat bureau(23, "John Doe");
    Form *a = inter.makeForm("asdf","R2D2");
    Form *b = inter.makeForm("Shrubbery","Tree");
    Form *c = inter.makeForm("Presidential","Obamna");

    if (!a || !b || !c)
        return 
    std::cout << a->getName() << std::endl;
    std::cout << b->getName() << std::endl;
    std::cout << c->getName() << std::endl;
}