#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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
        void SetGrade( int );
        class GradeTooHighException : public std::exception
        {
            public:
                virtual char * what() throw ();
        };
        ~Bureaucrat( void );
};


std::ostream& operator<<(std::ostream& ,Bureaucrat const & );

#endif