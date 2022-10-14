#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( void ) {
    _Name = "test";
    _SignGrade = 72;
    _ExecuteGrade = 45;
    std::cout << _Name << " make noise!" << std::endl;
    srand(time(NULL));
    bool a = rand() % 2;
    if (a)
        std::cout << _Name << " robotomy success" << std::endl;
    else
        std::cout << _Name << " robotomy failed" << std::endl;
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
