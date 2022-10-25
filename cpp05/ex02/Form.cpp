#include "Form.hpp"

Form::Form( std::string str, int sign, int exec) : _Name(str), _SignGrade(sign) , _ExecuteGrade(exec){
	_Indice = false;
	if (_SignGrade > 150)
		throw Form::GradeTooLowException();
	if (_SignGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form( void ) : _Name("ilias"){
	_Indice = false;
	_SignGrade = 130;
	_ExecuteGrade = 12;
}

Form::~Form( void ) {}

Form::Form( Form const & f) {
    *this = f;
}

Form& Form::operator=( Form const & f) {
    _ExecuteGrade = f._ExecuteGrade;
    _Indice = f._Indice;
    _SignGrade = f._SignGrade;
	return (*this);
}

bool	Form::getIndice( void ) const {
	return (_Indice);
}

int	Form::getExecuteGrade( void ) const {
	return (_ExecuteGrade);
}

std::string Form::getName( void ) const {
	return (_Name);
}

int	Form::getSigngrade( void ) const {
	return (_SignGrade);
}

void	Form::beSigned(Bureaucrat const& bur) {
	if (_SignGrade >= bur.getGrade())
		_Indice = true;
	else
		throw Form::UnsignedFormException();
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low!");
}

const char  *Form::UnsignedFormException::what() const throw() {
    return ("Form unsigned!");
}

std::ostream& operator<<(std::ostream& st, Form const& f) {
	st << f.getName() << ", bureaucrat sign grade " << f.getSigngrade() << " ,bureaucrat execute grade " << f.getExecuteGrade();
	return (st);
}
