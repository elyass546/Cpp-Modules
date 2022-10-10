#include "Form.hpp"

Form::Form( std::string str, int sign) : _Name(str), _SignGrade(sign) {
	_Indice = false;
	if (_SignGrade > 150)
		throw Form::GradeTooLowException();
	if (_SignGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form( void ) {
	_Indice = false;
	_Name = "ilias";
	_SignGrade = 130;
	_ExecuteGrade = 12;
}

Form::~Form( void ) {}

void	Form::beSigned(Bureaucrat const& bur) {
	if (_SignGrade >= bur.getGrade())
		_Indice = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::signForm( void ) {
	if (_Indice = true)
		std::cout << "Bureaucrat " << _Name << "signed " << std::endl;
	else	
		
}

Form::Form( Form const & f) {
    *this = f;
}

std::string Form::getName( void ) const {
	return (_Name);
}

int	Form::getSigngrade( void ) const {
	return (_SignGrade);
}

Form& Form::operator=( Form const & f) {
    _ExecuteGrade = f._ExecuteGrade;
    _Indice = f._Indice;
    _SignGrade = f._SignGrade;
    _Name = f._Name;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low!");
}

std::ostream& operator<<(std::ostream& st, Form const& f) {
	st << f.getName() << ", bureaucrat sign grade " << f.getSigngrade() << " ,bureaucrat execute grade " << f.getexecutegrade();
	return (st);
}
