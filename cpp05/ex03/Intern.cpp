#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::~Intern( void ) {}

Intern::Intern( Intern const & inter) { 
    (void)inter;
}

Form*   Intern::getShru( std::string str ) {
    return( new ShrubberyCreationForm(str));
}

Form*   Intern::getPresident( std::string str ) {
    return (new PresidentialPardonForm(str));
}

Form*   Intern::getRoboto( std::string str )  {
    return (new RobotomyRequestForm(str));
}

Intern&  Intern::operator=( Intern const & inter) { 
    (void)inter;
    return (*this);
}

Form*   Intern::makeForm( std::string Name, std::string Target ) {
    int i;
    std::string s[] = {"Roboto", "Shrubbery", "Presidential"};
    typedef Form* (Intern::*PointertoFunc[])(std::string);
    PointertoFunc CheckPtr = {&Intern::getRoboto, &Intern::getShru, &Intern::getPresident};
    for (i = 0; i < 3; i++){
        if (s[i] == Name)
        {
            std::cout << "Intern creates " << Name << std::endl;
            return ((this->*CheckPtr[i])(Target));
        }
    }
    std::cout << "The name passed is not exist!!" << std::endl;
    return (NULL);
}
