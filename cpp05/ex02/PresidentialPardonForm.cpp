#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) {
    _Name = "President";
    _SignGrade = 25;
    _ExecuteGrade = 5;
    std::cout << target << " has been pardoned by Zaphod Beeblebrox.";
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & sa){
    *this = sa;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & sa){
    _Name = sa._Name;
    _SignGrade = sa._SignGrade;
    _ExecuteGrade = sa._ExecuteGrade;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm ( void ) {}