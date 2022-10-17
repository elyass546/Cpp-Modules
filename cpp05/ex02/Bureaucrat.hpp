#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat{
    private:
        std::string Name;
        int Grade;
    public:
        Bureaucrat( void );
        Bureaucrat( int, std::string );
        Bureaucrat( Bureaucrat const& );
        Bureaucrat& operator=( Bureaucrat const& );
        int getGrade( void ) const ;
        std::string getName( void ) const ;
        void	signForm( Form & bur );

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        void    executeFrom( Form const & );
        ~Bureaucrat( void );
};


std::ostream& operator<<(std::ostream& ,Bureaucrat const & );

#endif