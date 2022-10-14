#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class RobotmyRequestForm {
    private:
        std::string _Name;
        int _SignGrade;
        int _ExecuteGrade;
    public:
        RobotmyRequestForm( void );
        RobotmyRequestForm( RobotmyRequestForm const &);
        RobotmyRequestForm& operator=( RobotmyRequestForm const & );
        std::string getName( void ) const;
        int getSignGrade( void ) const ;
        int getExecuteGrade( void ) const;
        ~RobotmyRequestForm();
        class GradeTooHighExecption : std::exception {
            public:
                virtual const char *what() const throw();
        };
         class GradeTooLowExecption : std::exception {
            public:
                virtual const char *what() const throw();
        };
};


#endif