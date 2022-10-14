#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"

class PresidentialPardonForm {
    private:
        std::string _Name;
        int _SignGrade;
        int _ExecuteGrade;
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( PresidentialPardonForm const& );
        PresidentialPardonForm& operator=( PresidentialPardonForm const& );
        ~PresidentialPardonForm( void );
};


#endif