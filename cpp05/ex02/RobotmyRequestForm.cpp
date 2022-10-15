#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( std::string target ) {
    _Name = "test";
    _SignGrade = 72;
    _ExecuteGrade = 45;
    std::cout << target << " make noise!" << std::endl;
    srand(time(NULL));
    bool a = rand() % 2;
    if (a)
        std::cout << target << " robotomy succeeded" << std::endl;
    else
        std::cout << target << " robotomy failed" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm( RobotmyRequestForm const& robot) {
    *this = robot;
}

RobotmyRequestForm& RobotmyRequestForm::operator=( RobotmyRequestForm const & robot) {
    _Name = robot._Name;
    _SignGrade = robot._SignGrade;
    _ExecuteGrade = robot._ExecuteGrade;
    return (*this);
}

RobotmyRequestForm::~RobotmyRequestForm( void ) {}
