#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade, std::string name) : Name(name), Grade(grade) {
    if (grade > 150)
        throw (Bureaucrat::GradeTooHighException);
    if (grade < 1)
        throw (Bureaucrat::GradeTooLowException);
}

Bureaucrat::Bureaucrat( void ) : Name("ilias"), Grade(7){}

Bureaucrat::Bureaucrat( Bureaucrat const& bureau) {
    *this = bureau;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& bureau ) {
    Grade = bureau.Grade;
    Name = bureau.Name;
    return (*this);
}

int Bureaucrat::getGrade( void ) const  {
    return (Grade);
}

std::string Bureaucrat::getName( void ) const  {
    return (Name);
}

void    Bureaucrat::SetGrade( int i ) {
    Grade = i;
}

Bureaucrat::~Bureaucrat( void ) {}

void    Bureaucrat::GradeTooHighException( void ) {
    if (Grade > 150)
        throw "Grade is too high";
}

void    Bureaucrat::GradeTooLowException( void ) {
    if (Grade < 1)
        throw "Grade is too low";
}

std::ostream& operator<<( std::ostream& st, Bureaucrat const& bur) {
    st << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return (st);
}