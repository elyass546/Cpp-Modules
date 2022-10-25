#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form {
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
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class UnsignedFormException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
        void    beSigned( Bureaucrat const& );
        std::string getName( void ) const ;
        int getSignGrade( void ) const ;
        bool    getIndice( void ) const ;
        int getExecuteGrade( void ) const ;
        ~Form();
};

std::ostream& operator<<(std::ostream&, Form const & );

#endif