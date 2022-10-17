#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
    private:
        std::string _target;
    public:
        RobotomyRequestForm( std::string );
        RobotomyRequestForm( RobotomyRequestForm const &);
        RobotomyRequestForm& operator=( RobotomyRequestForm const & );
        std::string getName( void ) const;
        int getSignGrade( void ) const ;
        int getExecuteGrade( void ) const;
        void    execute( Bureaucrat const & )  const ;
        void    execution( void ) const ;
        ~RobotomyRequestForm();
};


#endif