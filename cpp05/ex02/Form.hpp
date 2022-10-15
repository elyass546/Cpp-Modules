#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
    private:
        std::string    _Name;
        bool    _Indice;
        int     _SignGrade;
        int     _ExecuteGrade;
    public:
        Form( void );
        Form( std::string, int , int);
        Form( Form const & );
        Form& operator=( Form const & );
        ~Form();
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        virtual void    beSigned( Bureaucrat const& ) = 0;

        std::string getName( void ) const ;
        int getSigngrade( void ) const ;
        bool    getIndice( void ) const ;
        int getexecutegrade( void ) const ;
        void    execute(Bureaucrat const & )  const ;
};

std::ostream& operator<<(std::ostream&, Form const & );

#endif