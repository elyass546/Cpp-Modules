#include "Form.hpp"

Form::Form( std::string str, int sign, int exec) : _Name(str), _SignGrade(sign) , _ExecuteGrade(exec){
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

int	Form::getExecuteGrade( void ) const {
	return (_ExecuteGrade);
}

Form::~Form( void ) {}

bool	Form::getIndice( void ) const {
	return (_Indice);
}

void	Form::beSigned(Bureaucrat const& bur) {
	if (_SignGrade >= bur.getGrade())
		_Indice = true;
	else
		throw Form::UnsignedFormException();
}

Form::Form( Form const & f) {
    *this = f;
}

std::string Form::getName( void ) const {
	return (_Name);
}

int	Form::getSignGrade( void ) const {
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

const char	*Form::UnsignedFormException::what() const throw() {
	return ("Unsigned Form!!");
}

std::ostream& operator<<(std::ostream& st, Form const& f) {
	st << f.getName() << ", Form sign grade, " << f.getSignGrade() << ", Form execute grade " << f.getExecuteGrade();
	return (st);
}
