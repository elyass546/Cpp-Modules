#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int grade, std::string name) : Name(name), Grade(grade) {
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( void ) {}

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

Bureaucrat::~Bureaucrat( void ) {}

std::ostream& operator<<( std::ostream& st, Bureaucrat const& bur) {
    st << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return (st);
}

const char *Bureaucrat::GradeTooHighException::what() const throw (){
    return ("Grade too high!!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw (){
    return ("Grade too Low!!");
}
