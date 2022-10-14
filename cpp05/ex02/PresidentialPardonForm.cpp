#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {
    _Name = "President";
    _SignGrade = 25;
    _ExecuteGrade = 5;
    std::cout << _Name << " has been pardoned by Zaphod Beeblebrox.";
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