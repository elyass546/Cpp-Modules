#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::~Intern( void ) {}

Intern::Intern( Intern const & inter) { 
    (void)inter;
}

Intern&  Intern::operator=( Intern const & inter) { 
    (void)inter;
    return (*this);
}

Form*   Intern::makeForm( std::string Name, std::string Target ) {
    int i;
    std::string s[] = {"Roboto", "Shrubbery", "Presidential"};
    typedef Form* (Intern::*PointertoFunc[])(std::string);
    PointertoFunc CheckPtr = {&Form::RobotomyRequestForm, &Form::ShrubberyCreationForm, &Form::PresidentialPardonForm};
    for (i = 0; i < 3; i++){
        if (s[i] == Name)
            break;
    }
    return ((this->*CheckPtr[i])(Target));
}
