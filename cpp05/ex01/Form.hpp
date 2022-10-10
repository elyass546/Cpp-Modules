#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string    _Name;
        bool    _Indice;
        int     _SignGrade;
        int     _ExecuteGrade;
    public:
        Form( void );
        Form( std::string, int );
        Form( Form const & );
        Form& operator=( Form const & );
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        void    beSigned( Bureaucrat const& );
        void    signForm( void );
        std::string getName( void ) const ;
        int getSigngrade( void ) const ;
        int getexecutegrade( void ) const ;
        ~Form();
};

std::ostream& operator<<(std::ostream&, Form const & );

#endif