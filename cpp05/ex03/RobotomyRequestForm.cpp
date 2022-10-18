#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Roboto", 72, 45){
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

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& robot) : Form(robot){
    _target = robot._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & robot) {
    _target = robot._target;
    return (*this);
}

void    RobotomyRequestForm::execute( Bureaucrat const & bur ) const {
    if (getIndice() == false)
        throw Form::UnsignedFormException();
    if (bur.getGrade() > getExecuteGrade())
		throw Form::GradeTooLowException();
    execution();
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}
