#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string _target;
    public:
        PresidentialPardonForm( std::string );
        PresidentialPardonForm( PresidentialPardonForm const& );
        PresidentialPardonForm& operator=( PresidentialPardonForm const& );
        ~PresidentialPardonForm( void );
        void    execution( void ) const ;
        void    execute( Bureaucrat const & ) const ;
};


#endif