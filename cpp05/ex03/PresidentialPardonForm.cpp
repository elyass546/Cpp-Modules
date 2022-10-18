#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("President", 25, 5) {
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & sa) : Form(sa){
    _target = sa._target;
}

void    PresidentialPardonForm::execution( void ) const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox.";
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & sa) {
    _target = sa._target;
    return (*this);
}

void    PresidentialPardonForm::execute( Bureaucrat const & bur ) const {
    if (getIndice() == false)
        throw Form::UnsignedFormException();
    if (bur.getGrade() > getExecuteGrade())
		throw Form::GradeTooLowException();
    execution();
}

PresidentialPardonForm::~PresidentialPardonForm ( void ) {}