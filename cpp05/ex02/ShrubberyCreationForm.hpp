#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm( std::string );
        ShrubberyCreationForm( ShrubberyCreationForm const& );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm const& );
        void    execute( Bureaucrat const & ) const ;
        void    execution( void ) const ;
        ~ShrubberyCreationForm();
};

#endif