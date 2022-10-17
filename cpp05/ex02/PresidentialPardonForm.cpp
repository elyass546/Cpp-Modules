#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) {
    _Name = "President";
    _SignGrade = 25;
    _ExecuteGrade = 5;
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & sa){
    *this = sa;
}

void    PresidentialPardonForm::execution( void ) const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox.";
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & sa){
    _Name = sa._Name;
    _SignGrade = sa._SignGrade;
    _ExecuteGrade = sa._ExecuteGrade;
    _target = sa._target;
    return (*this);
}

void    PresidentialPardonForm::execute( Bureaucrat const & bur ) const {
    if (getIndice() == false)
        throw Form::UnsignedFormException();
    if (bur.getGrade() > _ExecuteGrade)
		throw Form::GradeTooLowException();
    execution();
}

PresidentialPardonForm::~PresidentialPardonForm ( void ) {}