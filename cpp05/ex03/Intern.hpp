#ifndef INTERN_HPP
#define INTERN_HPP
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {
    public:
        Form* makeForm(std::string, std::string);
        Intern( void );
        Intern( Intern const & );
        Intern& operator=( Intern const & );
        Form*   getShru( std::string )  ;
        Form*   getPresident( std::string )  ;
        Form*   getRoboto( std::string )  ;
        ~Intern();
};


#endif