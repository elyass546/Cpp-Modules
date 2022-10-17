#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) {
    _Name = "test";
    _SignGrade = 72;
    _ExecuteGrade = 45;
    _target = target;
}

void    RobotomyRequestForm::execution( void ) const {
    std::cout << _target << " make noise!" << std::endl;
    srand(time(NULL));
    bool a = rand() % 2;
    if (a)
        std::cout << _target << " robotomy succeeded" << std::endl;
    else
        std::cout << _target << " robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& robot) {
    *this = robot;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & robot) {
    _Name = robot._Name;
    _SignGrade = robot._SignGrade;
    _ExecuteGrade = robot._ExecuteGrade;
    return (*this);
}

void    RobotomyRequestForm::execute( Bureaucrat const & bur ) const {
    if (getIndice() == false)
        throw Form::UnsignedFormException();
    if (bur.getGrade() > _ExecuteGrade)
		throw Form::GradeTooLowException();
    execution();
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}
